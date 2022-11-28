n = int(input("Quanto vale n? "))
y = list(range(1, n+1))

#rimuovo i numeri dispari
for i in y:
    if i % 2 != 0:
        y.remove(i)
print(*y)
