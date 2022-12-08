# Dichiaro 2 variabili int 'k' e 'h'
k = 0
h = 0
h1 = 0
h2 = 0
i = 0
conta = 0

# Chiedo all'utente di inserire i valori delle 2 variabili
h = int(input("Inserisci il valore dell'altezza: "))
k = int(input("Inserisci il valore in chilometri: "))

# Copio l'altezza iniziale
h1 = h
h2 = h

# Scorro i da 0 a k(escluso) a passi di 1
for i in range(k):
  # Divido l'altezza per 2
  h1 /= 2

# Voglio sapere dopo quanti km l'altezza si annulla
# si annulla quando h = 0
#                1        2        3        4             5
# 20 => 20/2 => 10 / 2 => 5 / 2 => 2 => 2 / 2 => 1 / 2 => 0 
while h2 != 0:
  h2 /= 2
  conta += 1

# Stampo a schermo l'altezza finale dell'onda
print("L'altezza finale dell'onda e': " + str(h1))
print("L'altezza si azzera dopo: " + str(conta) + " km")
