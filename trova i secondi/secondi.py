# facciamo inserire le ore
ore = int(input("inserisci le ore: "))

# facciamo inserire le minuti
min = int(input("inserire i minuti: "))

# facciamo inserire le secondi
sec = int(input("inserire i secondi: "))

# converto le ore
ore = ore* 60*60

# converto i minuti
min= min*60

# calcolo il totale
totale= ore+ min+ sec

# mostro a schermo il totale
print("il totale vale "+ str(totale))
