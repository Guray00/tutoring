import random

n = input("Numero massimo di fiammiferi che vuoi inserire: ")
k = int(input("Fiammiferi da levare a ogni turno: "))
# Determina il numero di fiammiferi casualmente
x = random.randrange(int(n) + k + 1) + k
giocatore = 1

while x > 0:
    y = int(input("Quanti fiammiferi vuoi levare? "))

    if y <= k:
        x = x - y
        # Determina il prossimo giocatore
        giocatore = giocatore%2 + 1
    else:
        print("Devi levare meno fiammiferi")

print("Finito! Ha vinto il giocatore", giocatore)

