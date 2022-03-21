def somma(x, y):
  if (y == 0):
    return x
  else:
    return 1 + somma(x, y - 1)

def prodotto(x, y):
  if (y == 0):
    return 0
  else:
    return somma(x, prodotto(x, y-1))


def esponente(x, y):
  # caso base
  if(y==0):
    return 1

  # caso induttivo
  else:
    return prodotto(x, esponente(x, y-1))

n1 = int(input("Iserisci il primo numero: "))
n2 = int(input("Iserisci il secondo numero: "))

risultato = esponente(n1, n2)
print("L'elevamento a potenza vale: "+ str(risultato))
 