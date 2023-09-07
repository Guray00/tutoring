# inserimento del numero 1
n1 = int(input("Inserisci il primo numero: "))

# inserimento del numero 2
n2 = int(input("Inserire il secondo numero: "))

# inserimento del numero 3
n3 = int(input("Inserisci il terzo numero: "))

# ci salviamo il valore del massimo
max = 0

# se il primo numero è maggiore del secondo
if n1 > n2:
  # se il primo è maggiore del terzo 
  if n1 > n3: 
    # allora il primo è massimo
    max = n1

  # altrimenti se non è maggiore del terzo
  else: 
    # allora il terzo è il più grande
    max = n3   

# altrimenti:
else:

  # se il secondo è maggiore del terzo
  if n2> n3 :
  
    # il secondo è il maggiore
    max = n2
  
  # altrimenti
  else:
    #  il terzo è il maggiore
    max = n3

# mostriamo a schermo il valore massimo
print("il massimo vale " + str(max))
