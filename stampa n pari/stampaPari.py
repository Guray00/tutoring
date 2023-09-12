n = int(input("inserisci un numero: "))

# scorriamo i numeri da n a 0
for i in range(n,0,-1):
  
  if i%2 == 0:
    print(i, end=" ")