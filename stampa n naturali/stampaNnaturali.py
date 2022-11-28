x = int(input("Quanti numeri vuoi stampare? "))
#creo una lista che contiene tutti i numeri da 1 a x
y = list(range(1, x+1))
#stampo la lista
print(y)
#stampo senza parentesi e virgole
print(*y)