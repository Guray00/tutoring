# inserisci in una lista 10 numeri casuali
import random
lista=[]
conteggio=0
while conteggio<10:
  conteggio+=1
  a=random.randint(10,20)
  lista.append(a)
print(lista)

