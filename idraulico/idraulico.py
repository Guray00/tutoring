ore = float(input("Inserisci il numero di ore lavorate: "))
CostoMateriali = float(input("Inserisci il costo dei materiali: "))

spesa = 40*ore + CostoMateriali

if spesa < 100:
    spesa = 100

print("La spesa totale è: ", spesa)