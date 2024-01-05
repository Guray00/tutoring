from operator import itemgetter

# funzione che legge il file di temperature
def leggiTemperature(nomefile):
  matrice = []
  with open(nomefile,'r', encoding='utf-8') as file:
    for line in file:
      tmp = [x for x in line.strip().split(" ") if x != '']
      matrice.append(tmp)
      
  return matrice

# funzione che legge la mappa
def leggiMappa(nomefile):
  matrice=[]
  with open(nomefile, 'r', encoding= 'utf-8') as file:
    for line in file:
      riga = line.strip().split(' ')
      matrice.append(riga)
      
  return matrice

# funzione che unisce la stanza alla relativa temperatura
def interpolazione(temperature, mappa):
  stanze = {}
  n_righe = len(temperature)      # numero righe
  n_colonne = len(temperature[0]) # numero colonne

  for i in range(n_righe):
    for j in range(n_colonne):
      temperatura = temperature[i][j]
      
      if temperatura == '-':
        continue
      else:
        temperatura = float(temperatura)
      
      stanza      = mappa[i][j]
      
      if stanza not in stanze:
        stanze[stanza] = [temperatura]
      else:
        stanze[stanza].append(temperatura)
        
  return stanze

def calcola(stanze):
  risultato = []
  
  for stanza in stanze:
    codice = stanza
    tmin   = min(stanze[stanza])
    tmax   = max(stanze[stanza])
    tavarage = sum(stanze[stanza]) / len(stanze[stanza])

    risultato.append([codice, tmin, tmax, tavarage])

  # ordiniamo i dati per codice
  risultato.sort(key=itemgetter(0))
  return risultato
  
def main():
  temperature = leggiTemperature("temperature.txt")
  mappa = leggiMappa("mappa.txt")

  stanze = interpolazione(temperature, mappa)
  risultato = calcola(stanze)

  print("Stanza T.Min T.Max T.Media")
  for ris in risultato:
    print(f"{ris[0]:6s} {ris[1]} {ris[2]} {ris[3]:3.2f}")

main()