# funzione che carica il file in una matrice
def leggi_tempesta(nomefile):
  with open(nomefile, "r", encoding="utf-8") as file:
    matrice = []
    
    for line in file:
      riga = []
      for char in line.strip():
        if char == '_':
          riga.append(0)
        else:
          riga.append(int(char))
        
      matrice.append(riga)
    return matrice

# funzione che stampa a schermo la matrice della tempesta
def stampa_tempesta(matrice):
  for riga in matrice:
    for char in riga:
      if char == 0: print("_", end="")
      else:         print(char, end='')
    print()
  print()

def trova_ombelico(matrice):
  # salviamo indice e valore massimo
  # indice_max_riga = -1
  # max_riga = 0
  
  # for i,riga in enumerate(matrice):
  #   sum=0
    
  #   for char in riga:
  #     sum += char  

  #   if sum > max_riga:
  #     indice_max_riga = i
  #     max_riga = sum

  # print(indice_max_riga)

  somme_righe = []
  for riga in matrice:
    somme_righe.append(sum(riga))
    
  val_max = max(somme_righe)
  indice_max_riga = somme_righe.index(val_max)

  # len(matrice)    => il numero di righe
  # len(matrice[0]) => il numero di colonne

  somme_colonne = []
  
  # per ogni indice delle colonne
  for c in range(len(matrice[0])):
    somma = 0

    # per ogni indice delle righe
    for r in range(len(matrice)):
      somma += matrice[r][c]

    # ho finito di fare la somma di tutta una colonna
    somme_colonne.append(somma)

  val_max = max(somme_colonne) # trovo il massimo
  indice_max_colonna = somme_colonne.index(val_max) # recupero indice massimo

  return indice_max_riga, indice_max_colonna

def sposta_tempesta(matrice):
  
  # per ogni riga nella matrice
  for row in matrice:


    # ...cerchi il numero più a destra che non sia zero...

    # per ogni elemento da destra sinistra
    # for char in row[::-1]:
    for i in range(len(row)-1, 0, -1):
      # se non è zero:
      if row[i] > 0:
        row[i] -= 1   # diminuisco di 1
        break         # smetto di cercare
     
    row.insert(0, 0) # aggiungo uno zero in testa
    row.pop()        # levare l'elemento in coda
       

def solo_zeri(matrice):
  for row in matrice:
    for char in row:
      if char != 0:
        return False

  return True

def main():
  matrice = leggi_tempesta("mappa.txt")
  
  maxriga, maxcolonna = trova_ombelico(matrice)
  print(f"L'ombelico è in posizione {maxriga},{maxcolonna} e vale {matrice[maxriga][maxcolonna]}\n")

  # finchè la matrice non ha solo zeri
  while not solo_zeri(matrice):
    
    # stampa la matrice
    stampa_tempesta(matrice)

    # sposta la matrice
    sposta_tempesta(matrice)


main()

  