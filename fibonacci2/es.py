# n => valore da verificare
# i => indice della sequenza che stiamo analizzando
# a => valore a-esimo della successione calcolato => fibonacci(i)
# attenzione: n, i sono PARAMETRI della funzione

# mi voglio fermare in 2 casi:
#   - (a == n), quindi fa parte
#   - (a >  n), non fa parte

# in tutti gli altri casi, passo induttivo:
#   funzione(n, i)

def fibonacci(n):
  if(n==1 or n==2):
    return 1
  elif (n <= 0):
    return -1
  else:
    risultato=fibonacci(n-1) + fibonacci(n-2)
    return risultato

def verifica(n,i):
  a = fibonacci(i) # i-esimo elemento della serie di fib
  
  if(a==n):
    return True
    
  elif(a>n):
    return False
 
  else:
    # "trasportare" fino al main il risultato
    return verifica(n, i+1)

    

# __main__
val = int(input("Inserisci un numero: "))

if (verifica(val, 1) == True):
  print("Fa parte")
else:
  print("Non fa parte")