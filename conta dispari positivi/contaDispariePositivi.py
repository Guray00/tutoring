n = int(input("Quanti numeri vuoi inserire? "))

count = 0


for i in range(n):
    x = int(input("Inserisci un numero: "))
    if x > 0 and x % 2 != 0:
        count += 1
print("Numeri positivi e dispari:", count)
