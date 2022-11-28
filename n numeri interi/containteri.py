def eIntero(x):
    if x > 0:
        return 1
    return 0

n = int(input("Quanti numeri vuoi inserire? "))
count = 0
for i in range(n):
    x = float(input("Inserisci un numero: "))
    count += eIntero(x)
print("Numeri interi:", count)