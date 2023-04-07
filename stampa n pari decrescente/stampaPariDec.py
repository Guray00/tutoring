# prendo in input il numero inserito dall'utente
N = int(input("inserisci un numero: "))

for i in range(N, 0, -1):

  # se il numero è pari
  if i%2 == 0:
    print(i)
  