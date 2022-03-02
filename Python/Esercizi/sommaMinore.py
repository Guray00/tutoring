# leggi "tanti" numeri da tastiera, fino a quando
# la somma dei numeri immessi è maggiore del primo numero 
# inserito

n = int(input("inserisci un numero "))
somma = 0

# finchè la somma è minore di n, chiedo i numeri
while somma<n:
  c=int(input("inserisci un numero "))
  somma=somma+c

print("Finito, somma finale: "+ str(somma))
