# Esercizio Biblioteca

Scrivere la classe Prestito contenente i seguenti dati privati:
- String titoloLibro
- String nomeCliente
- GregorianCalendar dataPrestito
- GregorianCalendar dataRestituzione

e i seguenti metodi pubblici, oltre ai costruttori e ai metodi get necessari: 
- boolean isPrestito() che restituisce true se la data di restituzione è null.
- boolean isScaduto() che restituisce true se la data di restituzione è null e la data del prestito + 30 giorni è inferiore alla data corrente.

Scrivere la classe Biblioteca contenente: 
- il nome della Biblioteca (String)
- un array di oggetti di tipo Prestito

con i seguenti metodi, oltre ai costruttori:
- *boolean presta(String nomeCliente, String titololibro, String dataPrestito)* che aggiunge un nuovo prestito alla lista dei prestiti, se il libro NON è già in prestito.

- *Prestito ricerca(String titolo)* che esegue la ricerca di un titolo e restituisce l'oggetto. Prestito se presente, null altrimenti.

- *boolean restituisci(String titolo)* che effettua la ricerca di un libro nella lista dei prestiti e - se è in prestito - aggiunge la data corrente come data di restituzione; ritorna false se il libro non è stato trovato oppure non è in prestito.

- boolean restituisci(String titolo, GregorianCalendar dataPrestito) che effettua la ricerca di un libro nella lista dei prestiti e - se è in prestito - aggiunge dataPrestito come data di restituzione; ritorna false se il libro non è stato trovato oppure non è in prestito.
- *Biblioteca libriInPrestito()* che restituisce la lista dei prestiti in essere.
- *Biblioteca listaPrestiti()* che restituisce la lista dei prestiti già terminati 
- *Biblioteca prestitiScaduti()* che restituisce la lista dei prestiti restituiti oltre la scadenza oltre a quelli attualmente in prestito ma scaduti.
