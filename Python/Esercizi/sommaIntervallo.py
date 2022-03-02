# prende due interi, x e y, e calcola la somma di tutti i numeri
# dispari compresi nell'intervallo

def isDispari(n):
  tmp = (n%2 == 1)
  return tmp


def calcolaSomma(x, y):
  somma = 0

  # controlla tutti i numeri nell'intervallo
  # compreso tra x ed y
  for i in range(x, y, 1):

    # se il numero preso in esame è dispari...
    if(isDispari(i)):
      # faccio la somma tra i numeri che ho già sommato
      # e il nuovo numero i
      somma = somma + i

  # restituisci la somma che ho calcolato
  return somma
  

# -------- main ----------
x = int(input("Inserisci x: "))
y = int(input("Inserisci y: ")) # facciamo finta che y è sempre > x


n = calcolaSomma(x, y)
print(n)