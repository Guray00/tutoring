Realizzare un programma che legge da input un voto (carattere tra 'A' ed 'E') e ne stampa il significato (A significa ottimo, B buono, C sufficiente, D insufficiente, E gravemente insufficiente).

extra: Farlo funzionare sia con le lettere maiuscole
che con le lettere minuscole

## Esempio
```text
Inserisci un voto: A
Il voto è ottimo

## Soluzioni

### Soluzione Python

Il codice chiede all'utente di inserire un voto utilizzando l'istruzione input(). Dopo aver letto il voto, il codice trasforma sempre la lettera in maiuscolo (ad esempio "a" diventa "A") per riconoscere anche i voti inseriti in minuscolo. Quindi, il codice utilizza una serie di istruzioni if e elif per confrontare il voto con diverse stringhe e stampare un messaggio appropriato per ogni caso. Se il voto inserito non corrisponde a nessuna delle stringhe previste, il codice stampa un messaggio per indicare che il voto non è valido.