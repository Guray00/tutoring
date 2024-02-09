# Importa la libreria math per la funzione ceil()
import math

# Inserisci un numero float
numero = float(input("Inserisci un numero float: "))

# Calcolo della parte decimale
decimale = numero - int(numero)

# Arrotonda per eccesso se la parte decimale è maggiore o uguale a 0.5
risultato = int(numero) + math.ceil(decimale)

# Stampa il numero arrotondato
print("Numero arrotondato:", risultato)