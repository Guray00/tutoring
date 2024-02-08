Implementare un sistema per la gestione di libri in una biblioteca attraverso la realizzazione di classi e oggetti. 
Per semplicità, il sistema utilizza un array statico per gestire il catalogo della biblioteca. 

Per la creazione del sistema sarà necessario implementare:

- classe libro: permette di definire un libro e il relativo funzionamento.
- classe biblioteca: permette di salvare le informazioni relative al catalogo di libri presenti:
- classe main: classe di test per verificare il funzionamento del sistema.

## Classe libro

La classe libro avrà i seguenti attributi privati:
  - titolo (di tipo String): il titolo del libro.
  - autore (di tipo String): l'autore del libro.

Inoltre i seguenti metodi:
  - un costruttore che consenta di inizializzare il titolo e l'autore del libro. 
  - Dovrebbero essere forniti metodi getter perottenere il titolo e l'autore del libro.
  - funzioni setter per impostare i valori


## Classe biblioteca

La classe biblioteca avrà i seguenti attributi privati:

  - array di libri: come attributo privato per memorizzare il catalogo della biblioteca. 
  - il numero di libri presenti nel catalogo

Inoltre i seguenti metodi:

  - Dovrebbe avere un costruttore che inizializzi il catalogo come un array di libri con
una capacità massima specificata.
  - Un metodo aggiungiLibro che permetta di aggiungere un libro al catalogo della biblioteca solo se la capacità massima non è
stata raggiunta. 
  - Un metodo visualizzaCatalogo che stampi a video i titoli e gli autori di tutti i libri presenti nel catalogo.


## Classe main

La struttura del main deve essere come segue:

  - Crea almeno due istanze di libri. 
  - Crea un'istanza di una biblioteca con una capacità massima specificata. 
  - Aggiunge i libri al catalogo della biblioteca.
  - Visualizza il catalogo della biblioteca. 
  
Il programma deve dimostrare il corretto funzionamento del sistema di gestione bibliotecaria, mostrando la capacità di aggiungere libri a una biblioteca e visualizzarne il catalogo.