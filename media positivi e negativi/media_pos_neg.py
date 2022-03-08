# calcolare la media positiva e negativa di n numeri
# input: -1 -2 3
# output:
# > media negativi = -1.5
# > media positivi = 3.0 

n=int(input("Di quanti numeri vuoi calcolare la media? "))
somma_pos=0
somma_neg=0

positivi = 0
negativi = 0

for i in range(n):
  c = int(input("inserisci un numero: "))

  if c > 0:
    # caso dei positivi
    positivi += 1
    somma_pos += c

  else:
    # caso dei negativi
    negativi += 1
    somma_neg += c

media_pos = somma_pos/positivi
media_neg = somma_neg/negativi

print("La media dei positivi vale: " + str(media_pos))
print("La media dei negativi vale: " + str(media_neg))