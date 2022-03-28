


# Formula
# risultato = n! /  k! (n-k)!

# funzione fattoriale (ricorsiva)
# 5! = 5*4*3*2*1

# Quando ti sei fermato? 1 => caso base
# A ogni passaggio cosa hai fatto? => n * (n-1) => passo ind.
def fattoriale(n):
  if (n==1):
    return 1
  else:
    return n*fattoriale(n-1)

# funzione coeff bin 
def coef (n,k):
  risultato=fattoriale(n)/(fattoriale(k)*fattoriale(n-k))
  return risultato
    
# __main__

val1 = int(input("Inserisci il primo numero: "))
val2 = int(input("Inserisci il secondo numero: "))

ris = coef(val1, val2)

print("Il risultato e': " + str(ris))