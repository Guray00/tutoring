# scrivere un programma che stampi tutti i numeri primi 
# da 2 a 1000 utilizzando una funzione apposita.


# is_prime(n) => restituisce se il numero è primo o meno
def is_prime(n):
  # da 2 a n-1
  for i in range(2, n):
    # se (n%i == 0) allora... non è primo!
    if(n%i == 0):
      return False
    

  # sono uscito dal for perchè
  # non è mai stata vera la condizione
  return True      


# scorri      => scorre tutti i numeri da 2 a 1000 stampando a schermo
#                tutti i numeri primi (sfruttando la is_prime)
def scorri():
  for i in range(2, 1001):
    # se è primo => stampo
    if (is_prime(i)):
      print(i)
      
        
    # sennò => non faccio nulla

# __main__
scorri()