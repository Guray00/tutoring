#definisco il metodo
def equilibratore(x, y):
    sum = x + y
    x = sum / 2
    y = sum - x
    #python mi permette di ritornare più di un valore
    return x, y

x = int(input("Inserisci il primo numero: "))
y = int(input("Inserisci il secondo numero: "))

#chiamo il metodo
x , y = equilibratore(x, y)

print("I numeri sono stati equilibrati a", x, "e", y)