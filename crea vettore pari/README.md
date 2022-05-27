Scrivere un programma che, mediante l’uso di una funzione, si occupi di cercare
all’interno di un vettore gli elementi pari, li inserisca in un nuovo vettore creato
appositamente (la lunghezza del nuovo vettore deve essere creata in base al
risultato della ricerca) e lo passi al main dove avverrà la stampa.

#### Esempio
Inserire lunghezza vettore: 5
Inserisci un numero: 1
Inserisci un numero: 2
Inserisci un numero: 3
Inserisci un numero: 4
Inserisci un numero: 5
[ 2 4 ]

#### Schema concettuale
funzione:
  - cercare gli elementi pari
  - creare un vettore
  - metterli in un nuovo vettore

Main:
  - far inserire gli elementi in un vettore
  - richiamare la funzione
  - stampare il nuovo vettore di elementi pari

#### Spoiler 1
  int vettore2 [lunghezza];
  -> prima cerco la lunghezza: conto gli elementi
  -> ricontrollo gli elementi del vettore inserendo in vettore 2 quelli pari