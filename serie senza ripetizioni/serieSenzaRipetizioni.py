count = prec = 0
while True:
    x = int(input("Inserisci un numero: "))
    if count == 0:
        prec = x
        count += 1
        continue
    if x == prec:
        count += 1
        break
    prec = x
    count += 1
print("La serie ha", count, "elementi")