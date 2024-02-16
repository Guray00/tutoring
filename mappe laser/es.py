D = 2

def leggimatrice(nomefile):
  matrice = []
  with open(nomefile,'r',encoding='utf-8') as file:
    for line in file:
      rig = [int(x) for x in line.strip().split() ]
      matrice.append(rig)
  return matrice

def cercaadiacenti(matrice, riga, col):
  adiacenti = []
  for r in range(riga-D, riga+D+1):
    if 0 <= r < len(matrice):
      for c in range(col-D, col+D+1):
        if 0 <= c < len(matrice[r]):
          if r != riga or c != col:
            adiacenti.append(matrice[r][c])
            
  return adiacenti

def cercamassimi(matrice):
  massimi = []
  for riga in range(len(matrice)):
    for col in range(len(matrice[riga])):
      adiacenti = cercaadiacenti(matrice,riga,col)
      if matrice[riga][col] > max(adiacenti):
        massimi.append([riga,col])
  return massimi      

def main():
  matrice = leggimatrice('mappa.txt')

  massimi = cercamassimi(matrice)
  for riga in range(len(matrice)):
    for col in range(len(matrice[riga])):
      """
      for massimo in massimi:
        if [riga, col] == massimo:
          print(f'{matrice[riga][col]}', end="")
        else:
          print('-', end="")
      """

      if [riga, col] in massimi:
        print(f'{matrice[riga][col]} ', end="")
      else:
        print('-  ', end="")
    print()


main()