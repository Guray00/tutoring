# prendere in input due numeri interi e contare 
# quanti sono i divisori comuni

def isDivisore(numero, divisore):
  return numero%divisore==0


def funzione():
  n  = int(input("Inserisci un numero: "))
  n2 = int(input("Inserisci un numero: "))
  
  # devo controllare se sono divisori i numeri da 2 a n-1
  conta = 0
  for i in range(2, n+1, 1):
    if isDivisore(n, i) and isDivisore(n2, i):
      print("il numero " + str(i) + " è un divisore")
  
      # incrementa ogni volta che trova un divisore comune
      conta = conta + 1
      
  print("abbiamo trovato " + str(conta) + " divisori")


# ---- main ----
funzione()
