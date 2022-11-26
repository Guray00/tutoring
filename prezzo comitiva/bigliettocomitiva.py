nPersone = int(input("Quante persone sono presenti? "))
prezzoBiglietto = int(input("Quanto costa il biglietto? "))

if nPersone <= 10:
    prezzoTotale = nPersone * prezzoBiglietto
elif nPersone <= 15 and nPersone > 10:
    prezzoTotale = nPersone * prezzoBiglietto * (1-0.05)
else :
    prezzoTotale = nPersone * prezzoBiglietto * (1-0.07)

print("Il prezzo totale è: ", prezzoTotale)