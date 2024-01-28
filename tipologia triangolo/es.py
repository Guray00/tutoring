"""
Dati tre valori che rappresentano le lunghezze dei lati di un triangolo, stabilire se si tratta di un triangolo equilatero, isoscele o scaleno.

Esempio
Inserisci il primo lato: 3
Inserisci il secondo lato: 3
Inserisci il terzo lato: 3
equilatero
"""

# prendi il primo lato in input
x = int(input("inserire il primo lato: "))

# prendi il secondo lato in input
y = int(input("inserire il secondo lato: "))

# prendi il terzo lato in input
z = int(input("inserire il terzo lato: "))

# se i 3 lati sono uguali:
if x==y==z:
  # stampo "triangolo equilatero"
  print("il triangolo è equilatero")

# altrimenti se sono tutti diversi
elif x!=y!=z:
  # stampo "triangolo scaleno"
  print("triangolo scaleno")

# in tutti gli altri casi:
else:
  # stampo "triangolo isoscele"
  print("triangolo isoscele")



