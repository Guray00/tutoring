def is_prime(n):
  for i in range(2, n):
    if(n%i == 0):
      return False
  return True

# fattorePrimo(n) => restituire il più grande fattore primo
# versione che controlla tutti i numeri da 2
def fattore_primo(n):
  f=1
  for i in range(2,n):
    # se è divisore e primo
    if (n%i == 0 and is_prime(i)):
      f=i
      
  return f

def fattore_primo2(n):
  for i in range(n,2,-1):
    if (n%i == 0 and is_prime(i)):
      return i
      
  return 1
    
      
    
# __main__
print(fattore_primo (18))
print(fattore_primo2(18))