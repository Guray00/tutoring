cond = True
count = 1
num = 0
while cond:
    x = float(input("Inserisci un numero: "))
    if num == 0:
        num = x
        continue
    if x > num:
        count += 1
        num = x
    elif x <= num:
        cond = False

print("Numeri crescenti:", count)

