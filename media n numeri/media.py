n=int(input("Di quanti numeri vuoi calcolare la media? "))
somma=0

for i in range(n):
  c = int(input("inserisci un numero: "))
  somma += c

media = somma / n
print("la media è: " + str(media))

    