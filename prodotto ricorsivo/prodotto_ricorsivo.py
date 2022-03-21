

# 3 * 2  = 6 <-------------------------------------------------|
#     somma(3, prodotto (3, 1)) <--------------------| ==> 6 --+
#               somma(3, prodotto(3, 0))<-| ===> 3 --+   
#                               0 --------+

# andiamo sempre prima verso il caso base, e poi risaliamo
# per chiudere tutte le chiamate effettuate

def somma(x, y):
  if (y == 0):
    return x
  else:
    return 1 + somma(x, y - 1)

def prodotto(x, y):
  # caso base
  if (y == 0):
    return 0

  # passo induttivo
  else:
    return somma(x, prodotto(x, y-1))

# --- main ---
n1 = int(input("Iserisci il primo numero: "))
n2 = int(input("Iserisci il secondo numero: "))

risultato = prodotto(n1, n2)
print("Il prodotto vale: "+ str(risultato))