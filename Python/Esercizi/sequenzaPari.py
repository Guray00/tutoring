# Leggere una sequenza di numeri interi e fermarsi
# quando viene incontrato un numero pari.
# Stampare a schermo quanti numeri (zero escluso) sono 
# stati inseriti


# creo una funzione dispari con dentro
def isdispari(n):
  return n%2!=0

def funzione():
  n = int(input("inserisci un numero "))
  while (isdispari(n)):
    n = int(input("inserisci un numero "))



# ---- nuovo main ----
funzione()

