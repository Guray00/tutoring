# stampare a schermo i primi 15 numeri dispari a partire da 0
# quindi [1, 3, 5, 7, 9, 11, 13, 15, 17...]

"""
for i in range(30):
	if i % 2 != 0:
		print(i)
"""


# finchè non ho 15 numeri dispari
	# cerco un numero dispari
	# se è dispari
		# incremento il contatore


contatore = 0
numero = 0

# finchè non ho trovato 15 dispari
while (contatore < 15):
	numero = numero + 1

	if (numero%2 != 0):
		print(numero)
		contatore = contatore + 1 # ho trovato un dispari!


