Scrivere una funzione ricorsiva f(n) che consenta di contare la quantità di divisori di un numero n inseristo a schermo. 

La logica induttiva è la seguente:

- restituisce 0 nel caso n sia dispari
- restituisce 1+f(n/2) altrimenti.

## Esempio

```plaintext
Inserisci un numero: 12
Il risultato vale: 2
```