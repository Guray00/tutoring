creare un'applicazione in grado di gestire un archivio di fatture.
Ogni fattura è composta da:

- numero fattura deve essere un progressivo per anno di riferimento es. 01/2021, 02/2021, etc..
-data fattura (LocalDataTime / string)
- importo della fattura
- cliente di riferimento

Ogni cliente a cui la fattura fa riferimento ha i seguenti campi:

- codice
- denominazione
- partita iva (piva)
- indirizzo

l'applicazione deve mettere a disposizione le seguenti operazioni:

- registrazione di una nuova fattura
- elenco di tutte le fatture registrate
- calcolo del totale fatture
- lista delle fatture di un determinato cliente sftuttando il polimorfismo per implementare il recupero sia tramite classe Cliente che tramite il codice.
- elenco dei clienti

Nota: può essere utile implementare l'esercizio realizzando, ove necessario, le relative funzioni toString e equals con override.