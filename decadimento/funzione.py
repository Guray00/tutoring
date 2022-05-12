# soluzione con funzioni

# parte A
def calcola_massaresidua(mi,c,a):
  # vogliamo levare "c" da "mi" per "a" anni
  mr = mi - (c*a)

  # non può esistere una massa negativa
  if (mr < 0):
    mr = 0
  
  return mr

# parte B
def anni_necessari(mi,c):
  anni = 0
  
  while(mi >= 1):
    # aggiorno la massa rimanente da quella iniziale
    mi = mi - c
    anni = anni + 1
  
  return anni 


# __main__
mi = int(input("Inserire la massa iniziale: "))
while (mi < 0):
  print("\nHai sbagliato, inserisci una massa positiva")
  mi = int(input("Inserire la massa iniziale: "))


a  = int(input("Inserire gli anni: "))
c  = int(input("Inserire la costante di decadimento: "))
risultato1 = calcola_massaresidua(mi,c,a)

print ("la massa residua sarà pari a: " + str(risultato1))

risultato2 = anni_necessari(mi,c)
print("\nLa massa ci mette "+ str(risultato2) + " anni ad esaurirsi")

