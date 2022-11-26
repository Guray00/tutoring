chiamate = int(input("Inserisci il numero di chiamate effettuate: "))

if chiamate < 80:
    costo = 5
elif chiamate < 140:
    costo = 5 + (chiamate - 80) * 0.1
else:
    costo = 5 + 60 * 0.1 + (chiamate - 140) * 0.05

print("Il costo è di", costo, "euro")
print("Il costo medio è di ", costo / chiamate, "euro per chiamata")