sommax = 0
max = 0
num = input("Inserire il numero di sequenze: ")

# Viene chiesta la quantità di valori presenti in ogni sequenza
for i in range(0, int(num)):
    len = input("Inserire la lunghezza della sequenza: ")
    somma = 0

    # Vengono chiesti i valori della sequenza
    for j in range(0, int(len)):
        val = input("Inserire valore: ")
        # Si calcola la somma dei valori
        somma = somma + int(val)

    # Si chiede se la somma della sequenza attuale è più grande della somma maggiore
    if i==0 or somma>sommax:
        # La somma diventa quella attuale
        sommax = somma
        # Viene salvato in max il numero della sequenza
        max = i+1

print("La sequenza con la somma massima è la", max)