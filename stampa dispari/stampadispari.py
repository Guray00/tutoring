#questa soluzione stampa un numero alla volta
y = list(range(3,21+1))
for i in y:
    if i % 2 == 0:
        continue
    print(i)

#questa soluzione stampa tutti i numeri assieme
#rimuovendo dalla lista i numeri pari
y = list(range(3,21+1))
for i in y:
    if i % 2 == 0:
        y.remove(i)
print(*y)
