numerokWh = int(input("Inserisci il numero di kWh: "))

if numerokWh <= 500:
    prezzo = numerokWh * 0.2

elif numerokWh <= 1000 and numerokWh > 500:
    # 700 => 500*0.20 + 200*0.05
    prezzo = 500*0.2 + (numerokWh-500)*0.05

else:
    # 1200 => 500*0.20 + 500*0.05 + 200*0.08
    prezzo = 500*0.2 + 500*0.05 + (numerokWh-1000)*0.08


costomedio = prezzo/numerokWh
print("Il costo medio è: ", costomedio)
print("Il prezzo totale è: ", prezzo)