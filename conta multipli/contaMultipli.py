n = int(input("Quanti numeri vuoi inserire? "))
x = int(input("Numero in oggetto? "))

count = 0

for i in range(n):
    y = int(input("Inserisci un numero: "))
    if y % x == 0:
        count += 1
print("Numeri multipli di", x, ":", count)