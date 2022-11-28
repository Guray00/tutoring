n = int(input("Quanti articoli? "))
scontoTotale = 0
for i in range(n):
    prezzo = float(input("Prezzo: "))
    sconto = float(input("Sconto: "))
    #calcolo il prezzo scontato
    prezzoScontato = prezzo - prezzo * sconto / 100
    scontoTotale += prezzo - prezzoScontato
    print("Prezzo scontato:", prezzoScontato)
print("Sconto totale:", scontoTotale)