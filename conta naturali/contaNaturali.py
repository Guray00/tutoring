def contaNaturali(n):
    if n.is_integer() == True and n > 0:
        return 1
    return 0

n = int(input("Quanti numeri vuoi inserire? "))
count = 0
for i in range(n):
    #forziamo l'interpretazione come float
    #in modo da poter usare la funzione is_integer()
    x = float(input("Inserisci un numero: "))
    count += contaNaturali(x)
print("Numeri naturali:", count)