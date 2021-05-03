# Esercizio2

#- Crea due liste vuote
#- Fai un ciclo che va dal numero 100 al numero 900
#  - se il numero e' pari lo mette nella lista a
#  - se il numero e' dispari nella lista b
#- alla fine stampa quanti elementi ci sono in ciascuna lista

# creo una lista a vuota
a = []
# creo una lista b vuota
b = []

# faccio un ciclo in range(100, 900):
for numero in range(100, 900):
	# se il (numero%2 == 0):
	if (numero%2 == 0):
		# inserisci in a
		a.append(numero)
	# altrimenti:
	else:
		# inserisci in b
		b.append(numero)

# stampo dimensione di a
print(len(a))
# stampo dimensione di b
print(len(b))