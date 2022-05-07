def numero_perfetto(n):
  somma=0
  for i in range(1, n):
    
    # verificare se il numero è un divisore
    if ( n%i == 0):
      somma = somma+i
      
  if (somma == n):
    return True

  else:
    return False

# __main__
n=int(input("inserisci il numero: "))
risultato1=numero_perfetto(n)
if (risultato1==True):
  print("il numero è perfetto ")
  
else:
  print("il numero non è perfetto ")

    
