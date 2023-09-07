# inserisco un numero 
n = int(input("inserisco un numero: "))

# se il numero è divisibile per 2
if n%2 == 0:
  # calcolo il doppio
  n = n*2
  
  # lo mostro a schermo
  print("il doppio vale " + str(n))

# in tutti gli altri casi... 
else: 
  # calcolo il triplo
  n= n*3

  # lo mostro a schermo
  print("il triplo vale "+str(n))