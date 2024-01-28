# prendo in inputi il primo coefficiente
m1 = float(input("Inserisci il primo coefficiente: "))

# prendo in inputi il secondo coefficiente
m2 = float(input("Inserisci il primo coefficiente: "))

# se il loro prodotto è uguale a -1:
if m1*m2 == -1:
  # stampo che le rette sono perpendicolari
  print("Le rette sono perpendicolari")


# se invece i numeri sono uguali:
elif m1==m2:
  # stampo che le rette sono parallele
  print("Le rette sono parallele")

# in tutti gli altri casi....
else:
  # le rette non sono ne perpendicolari ne parallele
  print("le rette non sono ne perpendicolari ne parallele")
  