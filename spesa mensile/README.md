Si vuole implementare un programma per la pianificazione delle proprie spese mensili. Il programma deve prevedere la gestione fino a 10 categorie di spesa che l'utente può configurare all'avvio del programma. 

Di seguito il programma richiede l'inserimento dell'importo mensile a disposizione. 

A questo punto a video viene proposto un menù del tipo:

1) Visualizzazione categorie spesa con relativi importi;
2) Inserimento spesa in base alla categoria;
3) uscita dal programma;

NB: alla voce 2 il programma mostra l'importo non ancora assegnato, quindi l'elenco delle categorie di spesa con relativi importi e chiede di inserire il numero della voce di spesa che si desidera inserire. Dopo l'inserimento del numero di spesa, il programma richiede l'inserimento dell'importo da assegnare a quella voce. Dopo l'inserimento dell'importo il programma controlla l'effettiva disponibilità e segnala l'eventuale superamento del limite di spesa rifiutando l'inserimento e tornando al menù principale.

#### Esempio
```plaintext
  Quante categorie utilizzi? 3

  Inserisci il nome: Benzina
  Insersici importo: 100

  Inserisci il nome: gas
  Insersici importo: 100

  Inserisci il nome: luce
  Insersici importo: 100

  Quanto hai a disposizione? 200

  Seleziona dal menu:
  1) Visualizzazione categorie spesa con relativi importi;
  2) Inserimento spesa in base alla categoria;
  3) uscita dal programma;

  Seleziona: 2

  Quale categoria scegli? 1
  Hai ancora a disposizione 100 euro

  Quale categoria scegli? 2
  Hai ancora a disposizione 0 euro

  Seleziona dal menu:
  1) Visualizzazione categorie spesa con relativi importi;
  2) Inserimento spesa in base alla categoria;
  3) uscita dal programma;

  ....
```
