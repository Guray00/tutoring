# somma di n (inserito dall'utente) numeri naturali (>0) 
# compresi tra 10 e 20 generati casualmente

import random


n=int(input("Di quanti numeri vuoi calcolare la somma" ))
somma = 0

for i in range(n):
  numero=random.randint(10,20)
  somma=somma+numero
  
print("La somma dei numeri vale:" + str(somma))  
  
