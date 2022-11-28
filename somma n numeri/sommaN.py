n = int(input("Valore di n? "))

count = 0

for i in range(1, n + 1):
    x = int(input("Inserisci un numero: "))
    count += x
print("La somma è", count)