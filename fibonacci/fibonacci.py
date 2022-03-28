# 1, 1, 2, 3, 5, 8, 13, ... 

# calcola l'elemento della serie in posizione n
def fibonacci(n):
  # caso base 1
  if(n==1 or n==2):
    return 1
  
  # caso base 2
  elif (n <= 0):
    return -1

  # passo induttivo
  else:
    risultato=fibonacci(n-1) + fibonacci(n-2)
    return risultato


# __main__
val = int(input("Inserisci quanti numeri della sequenza vuoi mostrare: "))
fibonacci(val)

print("[ ", end="")
for i in range(1, val+1):
  ris = fibonacci(i)
  print(ris, end=" ")

print("]")