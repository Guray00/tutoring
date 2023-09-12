n = int(input("numero di articoli: "))

while n<= 0:
  print("inserisci un numero valido")
  n = int(input("numero di articoli: "))
  
totale = 0

# per ogni articolo
for i in range(n):

  # inseriamo le informazioni
  prezzo = int(input("inserire il prezzo: "))
  while prezzo <= 0:
    print("Hai sbagliato!")
    prezzo=int(input("Inserisci il prezzo: "))
  
  sconto= int(input("inserire lo sconto: "))
  while sconto<0 or sconto>100:
    print("Hai sbagliato!")
    sconto= int(input("inserire lo sconto: "))
  
  # calcoliamo lo sconto
  s= prezzo*sconto/100
  totale= s+totale

# stampare a schermo il totale degli sconti
print("lo sconto totale "+ str(totale))