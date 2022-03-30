# Esempio:
# 20 => 1 + f(20/2) 
#              1 + f(10/2)
#                    1 + f(5/2)
#                          0



def funzione(n):
  # caso base
  if(n%2 != 0):
    return 0

  # passo induttivo
  else:
    return 1 + funzione(n/2)

# __main__
n=int(input("inserisci un numero: "))
risultato = funzione(n)

print("Il risultato e': " + str(risultato))