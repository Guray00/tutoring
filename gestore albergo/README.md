# Albergo

Si vuole simulare il funzionamento di un Albergo. 

Prevedere tutti i costruttori (default, con parametri 
e di copia) e i metodi get/set per la gestione degli oggetti, oltre ai metodi:

- Per l'aggiunta/rimozione di una prenotazione 
- Per l'aggiunta/rimozione di una camera all'albergo 
- Per la ricerca delle prenotazioni di un certo giorno 
- Per la ricerca delle camere libere

## Classe camera

Scrivere la classe **Camera** con le seguenti caratteristiche:

- il **numero** della stanza.
- la **tipologia** (una stringa del tipo: _"singola"_, _"matrimoniale con bagno"_, 
_"doppia senza bagno"_).
- un attributo che indica se la camera è **occupata** o meno. 

## Classe prenotazione

Scrivere la classe **Prenotazione** con:

- La **data di inizio** della prenotazione. 
- La **data di fine** della prenotazione.
- Il **nome** del cliente.
- La **camera** oggetto della prenotazione.

## Classe Albergo

Scrivere la classe **Albergo** che contiene:

- Il nome dell'albergo.
- Un insieme di oggetti di tipo _Camera_.
- La lista delle _Prenotazioni_.