orario = input("Inserisci rispettivamente ore, minuti e secondi: ").split(" ")

ore = int(orario[0])*60*60
minuti = int(orario[1])*60
secondi = ore + minuti + int(orario[2])

print("Orario in secondi:", secondi)