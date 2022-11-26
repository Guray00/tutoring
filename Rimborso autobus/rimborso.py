scontoBus = 15
scontoTreno = 10

CostoAbbonamento = int(input("Inserisci il costo dell'abbonamento: "))

prov = bool(input("Sei in provincia? (True/False): "))

bus = bool(input("Usi il bus? (True/False): "))

treno = bool(input("Usi il treno? (True/False): "))

dist = int(input("Inserisci la distanza in km: "))

if (prov and bus and dist > 20):
    rimborso = CostoAbbonamento * (scontoBus/100)
elif (prov and treno and dist > 20):
    rimborso = CostoAbbonamento * (scontoTreno/100)
else:
    rimborso = 0

print("Il rimborso è: ", rimborso)