
# definiamo la funzione "fact"

def fact(n):
  # quale è il caso base?
  if(n == 1):
    return 1

  # se non siamo nel caso base
  else:
    return n * fact(n-1)

# --- main ---
risultato = fact(6)
print("Fattoriale: "+str(risultato))