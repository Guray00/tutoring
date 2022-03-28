# n! / (n-k)! con:
# - n numero di oggetti 
# - k numero dei posti

# 4! / (4 - 4)! => 4! / 0! => 4*3*2*1 / 1 => 24

def fattoriale(n):
  if (n<=1):
    return 1
  else:
    return n*fattoriale(n-1)


# funzione
def disposizioni(n,k):
  risultato=fattoriale(n)/fattoriale(n-k)
  return risultato

  # __main__
val1 = int(input("Inserisci il numero degli elementi: "))
val2 = int(input("Inserisci il numero dei posti: "))

ris = disposizioni(val1, val2)

print("Il risultato e': " + str(ris))