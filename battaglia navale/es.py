def read_data(nomefile):
  matrice= []
  with open(nomefile,'r', encoding = 'utf-8') as file:
    for line in file:
      riga = line.strip().split(',')
      matrice.append(riga)

  return matrice
  
def stampamatrice(matrice):
  alfabeto = ['A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J']
  count = 0
  print(' | 1| 2| 3| 4| 5| 6| 7| 8| 9|10|')
  print('________________________________')
  for riga  in matrice:
    print(alfabeto[count] + '|',end = '')
    count += 1
    for char in riga:
      if char == '1' or char == '2' or char == '':
        print('  ', end ='')
      else:
        print(" "+char, end ='')
      print("|",end="")
    print('\n')
    print('________________________________')

def main():
  testo1 = read_data('navi1.txt')

  testo2 = read_data('navi2.txt')

  with open('mosse.txt', 'r', encoding = 'utf') as file:
    count = 1
    for line in file:
      campi = line.strip().split(',')
      lettera = campi[0]
      if lettera == 'A':
        riga = 0
      if lettera == 'B':
        riga = 1
      if lettera == 'C':
        riga = 2 
      if lettera == 'D':
        riga = 3
      if lettera == 'E':
        riga = 4
      if lettera == 'F':
        riga = 5
      if lettera == 'G':
        riga = 6
      if lettera == 'H':
        riga = 7
      if lettera == 'I':
        riga = 8 
      if lettera == 'J':
        riga = 9 

      colonna = int(campi[1])-1
      if count % 2 != 0:
        print ('turno giocatore 1')
        print(f"coordinate dell'attacco:{lettera}, {colonna+1}")
        if testo2[riga][colonna] == '':
          print('acqua')
          testo2[riga][colonna] = '°'
        else:
          print('colpito')
          testo2[riga][colonna] = '*'
        count += 1
        stampamatrice(testo2)
      else:
        print ('turno giocatore 2')
        print(f"coordinate dell'attacco:{lettera}, {colonna+1}")
        if testo1[riga][colonna] == '':
          print('acqua')
          testo1[riga][colonna] = '°'
        else:
          print('colpito')
          testo1[riga][colonna] = '*'
        count += 1
        stampamatrice(testo1)
        
main()