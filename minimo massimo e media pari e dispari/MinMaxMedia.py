max = -100
min = 500
media = 0
n = int(input("Quanti numeri vuoi inserire? "))

for i in range(n):
    x = float(input("Inserisci un numero: "))
    if x > max:
        max = x
    if x < min:
        min = x
    media += x
media /= n
print("Il massimo è", max)
print("Il minimo è", min)
print("La media è", media)
