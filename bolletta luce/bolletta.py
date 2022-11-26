unita = int(input("Inserisci il numero di unità: "))

if unita <= 50 and unita > 0:
    spesa = unita * 0.5
elif unita <= 150 and unita > 50:
    spesa = 50*0.5 + (unita-50)*0.75
elif unita <= 250 and unita > 150:
    spesa = 50*0.5 + 100*0.75 + (unita-150)*1.20
elif unita > 250:
    spesa = 50*0.5 + 100*0.75 + 100*1.20 + (unita-250)*1.50
else:
    spesa = 0
cosstofinale = spesa + spesa*0.2
print("Il costo finale è: ", cosstofinale)