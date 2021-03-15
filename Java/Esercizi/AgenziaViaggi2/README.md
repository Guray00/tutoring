# Agenzia Viaggi
Ciascun Giorno è rappresentato da un numero d’ordine _(intero)_, il nome del luogo e una breve descrizione; 
```
ad esempio [3; “Roma”; “Terme di Caracalla, Musei capitolini, Catacombe”].
```
Due oggetti di tipo Giorno sono considerati uguali se hanno lo stesso numero d’ordine.
La classe base *astratta* Viaggio definisce il titolo del viaggio, il costo di base e la lista degli oggetti di tipo Giorno di cui si compone. Due oggetti di tipo Viaggio sono considerati uguali se hanno lo stesso titolo. Tale classe verrà derivata in:
- ViaggioPerSingoli
- ViaggioPerGruppi con il numero minimo e massimo di partecipanti

La classe contenitore Agenzia contiene il nome dell'agenzia e l’elenco dei viaggi disponibili. I prezzi vengono calcolati a partire dal costo di base, aggiungendo una quota fissa giornaliera per ciascun 
giorno del viaggio _(definita staticamente nella classe base Viaggio)_; nel caso di viaggi per gruppi deve essere aggiunta una certa quota gruppo _(definita staticamente nella classe ViaggioPerGruppi)_ moltiplicata per il numero massimo di passeggeri.
```
Ad esempio: il viaggio per singoli “Le capitali europee” della durata di 8 giorni costa € 350 di base + 
€ 40 al giorno = € 670; mentre il viaggio per gruppi fino a 30 partecipanti “I laghi italiani” della durata 
di 5 giorni costa € 120 di base + € 25 al giorno + € 4 di quota gruppo = € 365
```
## Metodi
Prevedere tutti i costruttori (default, con parametri e di copia), i metodi get/set laddove necessari, i metodi equals e toString(), oltre ai metodi per:
- l’aggiunta di un giorno ad un viaggio (se non presente);
- la rimozione di un giorno da un viaggio (se presente);
- l’aggiunta di un viaggio alla lista di un’agenzia (se non presente);
- la rimozione di un viaggio dalla lista di un’agenzia (se presente);
- il calcolo del prezzo di un viaggio per ciascuna delle due classi, come override del metodo astratto;
- la creazione della lista dei viaggi con costo inferiore ad un certo valore, in ordine decrescente
rispetto al costo;
- la creazione della lista dei viaggi per singoli che passano da una certa località, in ordine alfabetico per titolo del viaggio;
- la creazione della lista dei viaggi per gruppi con numero minimo di partecipanti uguale ad un certo valore, ordinati per numero di giorni previsti;
- la creazione della lista dei viaggi per gruppi che superano un certo numero di giorni.