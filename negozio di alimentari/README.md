Scrivere un programma per gestire un un negozio di alimentari.
In un file sequenziale denominato articoli.txt sono memorizzate le informazioni dei prodotti presenti in negozio nel seguente formato:

```plaintext
codiceArticolo1 [uno spazio] prezzoUnitario1
codiceArticolo2 [uno spazio] prezzoUnitario2
codiceArticolo3 [uno spazio] prezzoUnitario3 
...
```

dove `codiceArticolo` è una stringa di 8 caratteri priva di spazi e `prezzoUnitario` è un numero reale a doppia precisione.

In un file sequenziale `acquisti.txt` vengono registrati, uno di seguito all’altro, gli acquisti effettuati dai clienti. Gli acquisti vengono registrati nel seguente formato:

```plaintext
codiceArticolo1 [uno spazio] quantitàAcquistata1
codiceArticolo2 [uno spazio] quantitàAcquistata2
codiceArticolo3 [uno spazio] quantitàAcquistata3
...
```

dove codiceArticolo è una stringa di 8 caratteri priva di spazi e quantitàAcquistata è un numero intero.
Nel file acquisti.txt uno stesso codice articolo può apparire più volte con la medesima quantità o con quantità
diverse (lo stesso bene può essere acquistato da più clienti in diverse quantità).

Il programma, letti sequenzialmente i due file di testo che sono stati precedentemente riempiti dall’utente (a meno o tramite un altro programma: scegliete voi), crei un terzo file sequenziale incassi.txt e vi scriva al suo interno:

- nella prima riga, l’incasso totale
- nelle successive righe, l’elenco dei prodotti venduti e, per ciascuno di essi, la quantità totale di prodotti venduti ed il relativo incasso ottenuto.

Nel file incassi.txt, gli articoli dovranno essere elencati in ordine decrescente di fatturato, ovvero dovrete indicare prima l’articolo da cui avete ottenuto l’incasso maggiore e, come ultimo, quello da cui avete ricavato l’incasso minore.
Il formato del file dovrà quindi essere:

```plaintext
incasso totale
codiceArticolo1 [uno o più spazi] quantitàTotaleAcquistata1 [uno o più spazi] incassoTotaleArt1 
jcodiceArticolo2 [uno o più spazi] quantitàTotaleAcquistata2 [uno o più spazi] incassoTotaleArt2 codiceArticolo3 [uno o più spazi] quantitàTotaleAcquistata3 [uno o più spazi] incassoTotaleArt3 ...
```

Nel incassi.txt:

- ogni codice articolo deve apparire una sola volta;
- un codice articolo può non apparire (qualora non sia stato acquistato da nessuno e, di conseguenza, non appare nel file acquisti.txt).