n = int(input("Quanti numeri vuoi inserire? "))
pos = neg = nulli = 0
for i in range(n):
    x = float(input("Inserisci un numero: "))
    if x > 0:
        pos += 1
    elif x < 0:
        neg += 1
    else:
        nulli += 1

print("Numeri positivi:", pos)
print("Numeri negativi:", neg)
print("Numeri nulli:", nulli)