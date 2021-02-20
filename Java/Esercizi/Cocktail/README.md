# Cocktail
Un “Cocktail Bar” vuole automatizzare la creazione di bevande alcoliche ed analcoliche, con il calcolo del
prezzo, sulla base dei singoli componenti con cui questi sono stati creati.
Ciascun **Componente** è rappresentato da un nome, una quantità e un costoUnitario.
La classe base **Cocktail** definisce il nome del cocktail e la collezione dei suoi Componenti. Tale classe verrà
derivata in:
- CocktailAnalcolico
- CocktailAlcolico con il dato relativo alla gradazione alcolica in esso contenuta

## Prima parte
La classe contenitore CocktailBar contiene il nome del locale e l’elenco dei cocktail disponibili con i prezzi
calcolati sommando il costo unitario di ciascun componente per la quantità; ai cocktail alcolici viene
applicato un ulteriore costo in base al grado alcolico (si aggiunge cioè una quantità ottenuta moltiplicando il
grado alcolico per un “fattore costante” definito staticamente in CocktailAlcolico).
Prevedere tutti i costruttori (default, con parametri e di copia) e i metodi get/set per la gestione degli
oggetti, oltre ai metodi:
- per l’aggiunta/rimozione di componenti ai cocktail
- per l’aggiunta/rimozione di cocktail al listino del bar
- per il calcolo del prezzo di un cocktail
- per la creazione della lista dei cocktail alcolici al di sotto di una certa gradazione, in ordine
decrescente del grado alcolico
- per la creazione della lista dei cocktail che contengono un certo componente, in ordine alfabetico
(inserimento ordinato)
- per la creazione della lista dei cocktail con prezzo maggiore di una certa cifra, in ordine di prezzo
(inserimento ordinato)

## Seconda parte
Implementare i seguenti metodi aggiuntivi:
- Metodo che restituisce una lista di cocktail alcolici che contengono un determinato componente passato come paramentro.
- Metodo che restituisce una lista di componenti di un cocktail che hanno un determinato prezzo (il cocktail ed il prezzo sono passati come parametro).
- Metodo che restitiuisce il valore complessivo di tutti i cocktail disponibili nel bar.
- Metodo che, passato come parametro un cocktail, restituisce vero se è alcolico e falso se è analicolico.
- Metodo che restituisce il numero di coctail alcolici disponibili nel bar.
- Metodo che restituisce il numero di cocktail analcolici disponibili nel bar.