count = 0
while True:
    x = int(input("Inserisci un numero: "))
    if x < 10:
        count += x
    if x >= 10:
        break
print("La somma dei numeri minori di 10 è", count)