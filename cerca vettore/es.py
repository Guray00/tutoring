# creiamo un lista
lista = []

# chiediamo quanti numeri vuole inserire
n = int(input("Quanti numeri vuoi inserire nel lista? "))

for i in range(0, n):
  numero = int(input("Inserire un numero: "))
  lista.append(numero)

print()
k = int(input("Inserire il numero da verificare: "))

if (k in lista):
  print("Il numero è presente")
else:
  print("Il numero non è presente")

"""
# creo una variabile trovato che si ricordi se ho 
# trovato o meno k
trovato = False

# apro ogni cassetto
for i in range(0, n):
  
  # controllo
  if(lista[i] == k):
    trovato = True

if (trovato == True):
  print("Il numero è presente")
else:
  print("Il numero non è presente")
"""