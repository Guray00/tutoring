def sommaPari(n):
  # chiedo di inserire il numero
  val = int(input("Inserisci un numero: "))

  # caso base
  if (n==1):
    if (val%2==0):
      return val
    
    else:
      return 0

  # passo induttivo
  else:
    if (val%2==0):
      return val + sommaPari(n-1)

    else:
      return 0 + sommaPari(n-1)
    

    


# __main__
n = int(input("Quanti numeri vuoi inserire? "))
risultato = sommaPari(n)

print("La somma dei soli numeri pari vale: "+str(risultato))







# =================================================
# Scrivere una funzione ricorsiva che 
# somma i numeri inseriti fino a quando sono pari,
# al primo dispari termina e stampa a schermo la somma