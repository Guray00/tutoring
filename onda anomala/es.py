def calcola_chilometri(h):
  conta = 0
  while(h>1):
    h=h/2
    conta = conta+1
  return conta
    






def altezza_onda(h,k):
  for i in range(k):
    h=h/2
    
  if(h<1):
    h=0
  
  return h
  
h=int(input("inserisci l'altezza dell'onda: "))
k=int(input("Quanti km percorre l'onda? " ))
risultato1 = altezza_onda(h,k)
print("l'altezza raggiunta dall'onda è: " + str(risultato1))
risultato2 = calcola_chilometri(h)
print("l'altezza si infrange dopo " + str(risultato2)  +" km")

