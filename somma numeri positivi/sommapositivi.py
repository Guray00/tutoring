count = 0
while True:
    x = int(input("Inserisci un numero: "))
    if x > 0:
        count += x
    if x <= 0:
        break
print("La somma dei numeri positivi è", count)