
"""
Crea una calcolatrice che:

stampa le opzioni possibili e chiede all'utente di inserire il numero dell'operazione da eseguire:

   1) calcola area rettangolo
   2) cacola area triangolo
   3) calcola perimetro quadrato

se l'utente ha inserito 1 chiedi i dati e clcola l'area del rettangolo
se l'utente ha inserito 2 ...
3 ...
"""



"""
funzione calcola_area_rettangolo(base,  altezza):
	return base*altezza

funzione calcola_area_triangolo(base,  altezza):
	return base*altezza/2

funzione perimetro_quadrato(lato):
	return lato*4

stampo "Il programma ha le seguenti opzioni"
stampo "1) calcola area rettangolo"
stampo "2) calcola area triangolo"
stampo "3) calcola perimetro del quadrato"

risposta = richiedo l'opzione

se (risposta è uguale a 1):
	base = richiedo la base
	altezza = richiedo l'altezza
	risultato = calcola_area_rettangolo(base, altezza)

sennò se (risposta è uguale a 2):
	base = richiedo la base
	altezza = richiedo l'altezza
	risultato = calcola_area_rettangolo(base, altezza)

senno se (risposta è uguale a 3):
	lato = richiedo il lato
	risultato = perimetro_quadrato(lato)

stampo "Il risultato dell'operazione e': " + str(risultato)
"""

def calcola_area_rettangolo(base, altezza):
	return base*altezza

def calcola_area_triangolo(base, altezza):
	return base*altezza/2

def perimetro_quadrato(lato):
	return lato*4

print("Il programma ha le seguenti opzioni")
print("  1) calcola area rettangolo")
print("  2) calcola area triangolo")
print("  3) calcola perimetro del quadrato")

risposta = input("Seleziona un opzione ")

if (risposta == "1"):
	base    = float( input("Inserisci la base: "))
	altezza = float( input("Inserisci l'altezza"))
	risultato = calcola_area_rettangolo(base, altezza)

elif (risposta == "2"):
	base = float(input("Inserisci la base: "))
	altezza = float(input("Inserisci l'altezza"))
	risultato = calcola_area_triangolo(base, altezza)

elif (risposta == "3"):
	lato = input("inserisci il lato: ")
	lato = float(lato)
	risultato = perimetro_quadrato(lato)

else:
	print("Hai sbagliato a inserire...")

print("Il risultato è: " + str(risultato))
