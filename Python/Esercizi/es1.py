# ESERCIZIO 1 ==============================================================
# Trova tutti i numeri tra 0 e un milione che sono divisibili per 563 e 756

# stampare a schermo (print) i numeri tra 0 e un milione divisibli per 563 e 756
# stampare a schermo (print) in un range(0,un milione) divisibli per 563 e 756


# RAGIONAMENTO  ==============================================================
# scorriamo i numeri da 0 a un milione
	# il numero è divisibile sia per 563 che per 756?
		# se si ==> print(numero)
		# se no ==> non faccio nulla

# NOTA BENE!
# % => resto della divisione, serve per trovare i divisori!

# Tabella di verità AND
#condizone1 	condizione2	risultato
#Vero 		Vero		Vero
#Vero		Falso		Falso
#Falso		Falso		Falso

# Tabella di verità OR
#condizone1 	condizione2	risultato
#Vero 		Vero		Vero
#Vero		Falso		Vero
#Falso		Falso		Falso

for i in range(1000000):
	if( (i%563 == 0) and (i%756 == 0) ):
		print(i)