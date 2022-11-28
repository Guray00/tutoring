n = int(input("Valore di n? "))
count = 0
for i in range(1, n + 1):
    count += i
print("La somma dei primi", n, "numeri interi è", count)