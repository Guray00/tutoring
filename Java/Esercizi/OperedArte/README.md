# Opere d'Arte
Implementare in Java delle opportune classi per gestire le opere d’arte di una collezione.
La collezione è identificata da un nome, un luogo e un insieme di opere d’arte e dovrà esporre i seguenti opportuni metodi che permettano di sapere:

### metodi
• il nome dell’artista dell’opera più costosa
• la quantità di opere di tipo quadro e di opere di tipo scultura presenti nella collezione
• il valore totale della collezione
• il valore totale per ogni singola tipologia di opere
• metodo che riordina la lista completa di opere per prezzo crescente o decrescente in base ad un parametro booleno passato in input al metodo (utilizzare l'algoritmo di ordinamento per selezione)
• metodo che restituisca una stringa con i dati di tutte le opere della collezione
• metodo che restituisce l'elenco delle opere che hanno una quotazione maggiore di un determinato valore passato in input
• metodo che restituisce l'elenco delle opere che hanno una quotazione maggiore della quotazione media di tutte le opere



Tutte le opere d’arte hanno:
• informazioni: titolo, artista, quotazione
• uno o più costruttori parametrici (almeno il titolo dell’opera deve sempre essere valorizzato)
• un metodo che restituisce il valore dell’ingombro
• un metodo che restituisce una stringa con le informazioni dell’opera

Le opere di tipo “quadro” hanno:
• informazioni: titolo, artista, quotazione, base e altezza
• uno o più costruttori parametrici (almeno il titolo dell’opera e le misure di base e l’altezza devono essere valorizzate)
• un metodo che restituisce il valore dell’ingombro (calcolo della superficie occupata)

Le opere di tipo “scultura” hanno:
• informazioni: titolo, artista, quotazione, base, altezza e profondità
• uno o più costruttori parametrici (almeno il titolo dell’opera e le misure di base e altezza devono essere valorizzate)
• un metodo che restituisce il valore dell’ingombro (calcolo dell’area occupata)
• un metodo che restituisce la superficie che la scultura occupa

In una classe contenente un metodo main, creare un oggetto di tipo collezione e aggiungere alla collezione varie opere d’arte.