Sviluppare un programma che permetta di simulare il comportamento di un sensore di temperatura e pressione, che acquisisce dati 24h/24h, salvati in due differenti vettori (si supponga 4 celle). Caricare i valori da tastiera all'interno dei vettori.

Eseguire poi le seguenti operazioni:

1. stampare i vettori di temperatura e pressione
2. trovare il valore max di temperatura e pressione
3. trovare il valore min di temperatura e pressione
4. dato un valore di temperatura inserito dall'utente, mostrare la posizione nel vettore in cui questo valore compare (se compare!)
5. dato un valore di pressione inserito dall'utente, mostrare la posizione nel vettore in cui questo valore compare (se compare!)

Tutte queste richieste vanno gestite con un menù, che permetta di scegliere all'utente quali operazioni svolgere. 

```plaintext
Inserisci il valore di temperatura: 0
Inserisci il valore di temperatura: 1
Inserisci il valore di temperatura: 2
Inserisci il valore di temperatura: 3

Inserisci il valore di pressione: 9
Inserisci il valore di pressione: 8
Inserisci il valore di pressione: 7
Inserisci il valore di pressione: 6

Scelta: 1
Temperatura: 0 1 2 3 
Pressione:   9 8 7 6 

Scelta: 2
Massima temperatura: 3
Massima pressione:   7

Scelta: 3
Minimo temperatura: 0
Minimo pressione:   6

Scelta: 4
Inserisci un valore di temperatura da cercare: 1
La posizione in cui compare e' 1


Scelta: 5
Inserisci un valore di pressione da cercare: 6
La posizione in cui compare e' 3
```