n= int(input("inserire un valore: "))
cont= 0

# verifichiamo che il valore di n sia valido
while n<= 0: 
  print("Errore! Inserisci una quantità valida.\n")
  n= int(input("inserire un valore: "))

# per ogni numero inserito
for i in range(n):

  # chiedermi di inserire il numero
  numero = int(input("Inserisci il numero: "))
  
  if numero%2 != 0 and numero>0:
    cont= cont+1
    
print("I numeri positivi e dispari contati sono "+ str(cont))