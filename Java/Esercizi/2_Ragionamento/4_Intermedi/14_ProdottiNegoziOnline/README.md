
# Esercizio
Si vuole implementare un software in Java che permetta di gestire tutti i prodotti di un negozio online. Al fine di creare opportunamente le classi che rappresenteranno i singoli prodotti, si tenga conto della seguente classificazione:

## Prodotto Generico
Si implementi quindi una classe astratta ProdottoGenerico con le caratteristiche sotto riportate attuando tutte le tecniche proprie dell’information hiding.

### Proprietà
- prezzoAcquisto – prezzo che paga l’azienda per acquistare il prodotto
- prezzoVendita – prezzo di vendita ai propri clienti
- iva – valore dell’iva
- descrizione 

### Metodi concreti
• get e set per tutte e tre le proprietà
• ...incasso() - metodo che restituisce la cifra incassata lorda (quindi iva compresa)

• ...incasso(double sconto) - metodo che restituisce la cifra incassata lorda (quindi iva compresa) meno lo sconto

• ...ricavo() - metodo che restituisce il valore ricavato dalla vendita del prodotto al netto dell’iva

• ...ricavo(double sconto) - metodo che restituisce il valore ricavato dalla vendita del prodotto al netto dell’iva e dello sconto applicato alla vendita

• costruttore che riceve in input il prezzo d’acquisto e valorizza opportunamente gli altri parametri 

• costruttore che riceve in input il prezzo d’acquisto e il prezzo di vendita e valorizza opportunamente la descrizione 

• costruttore che riceve in input tutti i parametri
(NB nei vari costruttori il parametro “descrizione” non deve essere mai valorizzato con una stringa vuota!)

• override del metodo toString() in modo che restituisca le informazioni del prodotto. Ad esempio per un prodotto generico potrebbe essere:
``` 
Prodotto: prodotto generico
Prezzo d’acquisto: 1000 euro + 100 di iva al 10%
Prezzo di vendita: 1600 euro + 160 di iva al 10%
Sconto applicato alla vendita: 0%
Incasso: 660 di cui 60 a debito iva.
Ricavo netto: 600 
```


## Prodotto digitale

### Proprietà
- dimensione – dimensione in byte del file
- processoreRichiesto – caratteristiche del processore richiesto affinché il prodotto possa essere eseguito
- ramRichiesta – caratteristiche memoria RAM richiesta affinché il prodotto possa essere eseguito


### Metodi concreti

- get e set per tutte e tre le proprietà
- costruttore – implementare tanti costruttori quanti previsti nella classe padre e aggiungere a tutti i parametri specifici della classe ProdottoDigitale
Anche in questi costruttori il parametro “descrizione” non deve essere mai valorizzato con una stringa vuota, ad es. può essere valorizzato con il valore “ Prodotto digitale”
- override del metodo toString() in modo che restituisca le informazioni complete del prodotto digitale. Ad esempio:
```
Prodotto: prodotto digitale
Prezzo d’acquisto: 3000 euro + 300 di iva al 10%
Prezzo di vendita: 5000 euro + 500 di iva al 10%
		... 
		...
```
## Prodotto Materiale

### Proprietà
- larghezza – dimensione in centimetri della larghezza
- altezza – dimensione in centimetri della altezza
- profondita – dimensione in centimetri della profondità 
- peso – dimensione in chilogrammi del peso


### Metodi concreti
- get e set per tutte e tre le proprietà
- ...volume() - metodo che calcola e restituisce il volume in litri del prodotto 
- ...superficieCmq() - metodo che calcola e restituisce la superficie del prodotto in centimetri quadrati 
- ...superficieMq() - metodo che calcola e restituisce la superficie del prodotto in metri 
quadrati 
- costruttore – implementare tanti costruttori quanti previsti nella classe padre e aggiungere a tutti i parametri specifici della classe ProdottoMaterialeAnche in questi costruttori il parametro “descrizione” non deve essere mai valorizzato con 
una stringa vuota.
- override del metodo toString() in modo che restituisca le informazioni complete del prodotto material


## Classe test
Implementare una classe di test contenente un main in cui creare una o più strutture dati del tipo delle classi astratte implementate ed eseguire dei test sulle funzionalità. Ovviamente implementando prima anche delle classi concrete da aggiungere alla struttura dati.