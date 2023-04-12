# creiamo una lista
valori = []

# chiedo in input quanti numeri vorrà inserire nella lista
n = int(input("Inserisci la dimensione del lista: "))

# per ogni numero
for i in range(0, n):

  # chiedo di inserire un valore
  v = int(input("inserisci un valore: "))  

  # lo inserisco nella lista
  valori.append(v)

  
# stampare la lista
print(valori)