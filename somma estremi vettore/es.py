# creiamo la lista
numeri = []

# chiedo all'utente quanti numeri ci vuole mettere
n = int(input("Quanti numeri vuoi inserire? "))

# finchè il numero non è pari => n % 2 != 0
while n % 2 != 0 or n <= 0:

  # avvertiamo l'untente
  print("Hai inserito un valore non valido!")
  
  #invitandolo a inserire un nuovo "n"
  n = int(input("Quanti numeri vuoi inserire? "))


# qua n ha un valore valido
for i in range(0, n):
  
  # chiediamo un valore
  v = int(input("Inserire un valore: "))

  # mettiamo v nella lista
  numeri.append(v)

# mostrare a schermo la somma tra gli estremi
# primo:  0
# ultimo: n-1

somma = numeri[0] + numeri[n-1]
print("La somma degli estremi vale: "+str(somma))