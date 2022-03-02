# Scrivere un codice python che legga 10 numeri e stampi il maggiore tra questi


# salvarlo dentro una variabile
# confrontare n con il numero salvato nella variabile

max = -1 # -1 per dire che ancora non lo abbiamo salvato

for i in range(10):
  n = int(input("Inserisci un numero "))

  if i==0:
    max=n
  
  # se il numero è più grande lo salvo
  if n>max:
    max = n

print("il massimo e': " + str(max))