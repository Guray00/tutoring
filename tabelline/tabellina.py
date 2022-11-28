x = int(input("Quale tabellina vuoi stampare? "))
#creo una lista che contiene tutti i numeri da 1 a 10
y = list(range(1, 10+1))
for i in y:
    print(x, "*", i, "=", x*i)