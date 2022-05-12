# soluzione con funzioni

def controllo(N):
  pari=0
  dispari=0
  
  for i in range(N):
    num=int(input("inserisci un numero: "))
  
    if(num%2==0):
      pari=pari+1
    else:
      dispari=dispari+1
      
  # ==========
  # stampiamo dirattamente i risultati
  print("Pari totali: " + str(pari))
  print("Dispari totali: " + str(dispari))



# __main__
N = int(input("Inserire il valore di N: "))
controllo(N)