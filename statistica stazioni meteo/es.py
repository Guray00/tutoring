import csv
import math
from statistics import mode

def leggipinerolo(nomefile):

  with open(nomefile,'r', encoding= 'utf-8') as file: 
    reader = csv.DictReader(file, delimiter =';')

    # recupera il nome dei campi
    header = list(next(reader))
    dati= {}
    
    for dato in list(reader):
      # recupero il giorno
      giorno = dato[header[0]].strip().split()[0]

      # se il giorno non è stato inserito
      if giorno not in dati:
        # creo la chiave ne giorno come dizionario
        dati[giorno] = {}

        # per ogni campo presente nel header
        for campo in header[1:]:
          dati[giorno][campo] = [float(dato[campo])]
        
      else:
        for campo in header[1:]:
          dati[giorno][campo].append(float(dato[campo]))
          
  return dati, header

def main():
  meteo, header = leggipinerolo("Pinerolo.csv")

  # stampa l'header
  for h in header:
    print(f"{h:12s}", end="")
  print() 

  risultati = {}
  
  for giorno in meteo:
    risultati[giorno] = {
      "media": [],
      "max": [],
      "min": [],
      "moda": []
    }
    
    for campo in header[1:]:
      mediap = sum(meteo[giorno][campo])/len(meteo[giorno][campo])
      maxp   = max(meteo[giorno][campo])
      minp   = min(meteo[giorno][campo])
      modap  = mode(meteo[giorno][campo])

      risultati[giorno]["media"].append(mediap) 
      risultati[giorno]["max"].append(maxp) 
      risultati[giorno]["min"].append(minp) 
      risultati[giorno]["moda"].append(modap)

  
  for giorno in risultati:
    print(giorno)

    v = ["media", "min", "max", "moda"]

    for c in v:
    #print(risultati[giorno]["media"])
      print(f"{c:12s}: ", end="")
      for e in risultati[giorno][c]:
        str_e = str(math.trunc(e))
        print(f"{str_e:15s}", end="")
      print()


main()
