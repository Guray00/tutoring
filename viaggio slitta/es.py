import csv
import math

RAGGIO = 6731  # km

def leggi_province(nomefile):
  with open(nomefile, 'r', encoding='utf-8') as file:
    reader = csv.DictReader(file, delimiter=',')
  
    # per ogni provincia che trovo
    province = {}
    for provincia in list(reader):
      # mi salvo nel dizionario le info della provincia con sigla_autom... 
      # come chiave
      lat  = float(provincia["latitudine"]) 
      long = float(provincia["longitudine"]) 
      
      codice = provincia['sigla_automobilistica']
      province[codice] = [lat, long]
      
    return province

# funzione che legge i bambini e ci aggiunge le coordinate
def leggi_bambini(nomefile, province):
  with open(nomefile, 'r', encoding='utf-8') as file:
    reader = csv.DictReader(file, delimiter=',')
    
    bambini = []
    for bambino in reader:
      provincia = bambino["provincia"]
      bambino["coordinate"] = province[provincia]
      bambini.append(bambino)
    
    return bambini


def bambino_max_nord(bambini):
  max_lat = bambini[0]["coordinate"][0]
  max_bambino = bambini[0]
  
  for bambino in bambini:
    if bambino['coordinate'][0] > max_lat:
      max_lat = bambino['coordinate'][0]
      max_bambino = bambino

  return max_bambino


def calcola_distanza(A, B):
  lat_A = A['coordinate'][0] * math.pi / 180.0
  lon_A = A['coordinate'][1] * math.pi / 180.0
  lat_B = B['coordinate'][0] * math.pi / 180.0
  lon_B = B['coordinate'][1] * math.pi / 180.0
  
  delta_lat = lat_A - lat_B
  delta_lon = lon_A - lon_B
  
  h = math.sin(delta_lat/2.0)**2+ math.cos(lat_A)*math.cos(lat_B)*math.sin(delta_lon/2)**2
  return 2 * RAGGIO * math.asin(math.sqrt(h))
 

def main():
  province = leggi_province("province.csv")
  bambini = leggi_bambini("bambini.csv", province)

  bambino_corrente = bambino_max_nord(bambini)
  print(f'Consegnato {bambino_corrente["regalo"]} a {bambino_corrente["nome"]} {bambino_corrente["cognome"]} ({bambino_corrente["provincia"]})')
  bambini.remove(bambino_corrente)
  
  # fino a quando ho bambini a cui consegnare il regalo
  while len(bambini) > 0:
    min_distanza = 40000
    min_bambino  = None
    
    # per ogni altro bambino faccio il paragone
    for bambino in bambini:
      distanza = calcola_distanza(bambino_corrente, bambino)

      if distanza < min_distanza:
        min_distanza = distanza
        min_bambino  = bambino

    bambini.remove(min_bambino) # rimuoviamo il bambino corrente
    bambino_corrente = min_bambino   # aggiorno il valore corrente
    print(f'    Viaggio di {min_distanza} km')
    print(f'Consegnato {bambino_corrente["regalo"]} a {bambino_corrente["nome"]} {bambino_corrente["cognome"]} ({bambino_corrente["provincia"]})')


main()

