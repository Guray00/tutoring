# 4 + 5 => come alle elementari, sommiamo 1 5 volte
# 4 + 1
# 4 + 1 + 1
# 4 + 1 + 1 + 1
# 4 + 1 + 1 + 1 + + 1
# 4 + 1 + 1 + 1 + + 1 + 1

def somma(x, y):
  # caso base
  if (y == 0):
    return x

  # passo induttivo
  else:
    # se non decrementiamo y, questo procede all'infinito
    return 1 + somma(x, y - 1)


# --- main ---
n1 = int(input("Iserisci il primo numero: "))
n2 = int(input("Iserisci il secondo numero: "))

risultato = somma(n1, n2)
print("La somma vale: "+ str(risultato))
 