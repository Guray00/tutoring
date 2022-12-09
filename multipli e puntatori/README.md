Scrivere una funzione f(…) che ha come argomento un puntatore a intero. Sia n il valore dell’oggetto puntato. La funzione stampa il valore del puntatore ed il valore dell’oggetto puntato, dopodiché restituisce come ritorno di funzione:
-	il quadrato di n se n è multiplo di 2; 
-	altrimenti il cubo di n se n è multiplo di 3; 
-	altrimenti il numero n. 

Scrivere un programma che:
-	chiede un numero da tastiera;
-	stampa a video l’indirizzo a cui tale numero è memorizzato;
-	chiama la funzione f(…) sul numero; e 
-	stampa a video il ritorno della funzione.

## Esempio
```text
Numero? 10
Indirizzo in memoria: 0x7ffef6900d48
Dentro f(): Valore puntatore: 0x7ffef6900d48
Dentro f(): Valore oggetto puntato: 10
Il risultato e’: 100
```