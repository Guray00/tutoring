mese = int(input("Inserisci il numero del mese: "))

if mese == 1 or mese == 2:
    stagione = "inverno"
elif mese == 4 or mese == 5:
    stagione = "primavera"
elif mese == 7 or mese == 8:
    stagione = "estate"
elif mese == 10 or mese == 11:
    stagione = "autunno"
elif mese == 3:
    giorno = int(input("Inserisci il giorno: "))
    if giorno <= 20:
        stagione = "inverno"
    else:
        stagione = "primavera"
elif mese == 6:
    giorno = int(input("Inserisci il giorno: "))
    if giorno <= 20:
        stagione = "primavera"
    else:
        stagione = "estate"
elif mese == 9:
    giorno = int(input("Inserisci il giorno: "))
    if giorno <= 20:
        stagione = "estate"
    else:
        stagione = "autunno"
elif mese == 12:
    giorno = int(input("Inserisci il giorno: "))
    if giorno <= 20:
        stagione = "autunno"
    else:
        stagione = "inverno"

print("La stagione è: ", stagione) 