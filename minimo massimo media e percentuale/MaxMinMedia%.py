Max = -100
Min = 500
pos = neg = 0

media = 0
i = 0
n = int(input("Quanti numeri vuoi inserire? "))
while i < n:
    x = float(input("Inserisci un numero: "))
    if x > 500 or x < -100:
        continue
    if x > Max:
        Max = x
    if x < Min:
        Min = x
    media += x
    if x >= 0:
        pos += 1
    else:
        neg += 1
    i += 1

media /= n
print("Il massimo è", Max)
print("Il minimo è", Min)
print("La media è", media)
print("Percentuale di numeri positivi:", pos/n*100,"%")
print("Percentuale di numeri negativi:", neg/n*100,"%")
    