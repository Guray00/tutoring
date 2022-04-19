# Ristorante

Un ristorante vuole informatizzare le ordinazioni dei propri clienti.

Ciascun Piatto servito al ristorante è rappresentato da un nome univoco, un tipo (primo, secondo, dessert...) e da una lista di ingredienti. Ciascun Ingrediente è costituito da una descrizione, una quantità e un prezzo unitario. Il prezzo di ciascun piatto è determinato dal costo degli ingredienti utilizzati per produrlo.

I camerieri del ristorante ricevono le ordinazioni che sono memorizzate in oggetti di classe base Ordine; ciascun ordine contiene la lista dei piatti ordinati. A seconda del tipo di ordine, si definiscono le due classi derivate:

• Ordinie_Tavolo in cui è presente il numero del tavolo e il nome del cameriere che l'ha preso in carico • Ordine Domicilio in cui è presente l'indirizzo e l'ora di consegna

Nel primo caso il prezzo totale dell'ordine è determinato dalla somma dei costi dei singoli piatti, nel secondo caso invece è necessario aggiungere un costo fisso (valore statico della classe Ordine Domicilio) dovuto alle spese di consegna.

La classe contenitore Ristorante contiene l'elenco dei piatti a disposizione e la lista delle ordinazioni

effettuate.

Prevedere tutti i costruttori e metodi indicati nel documento JavaDoc

#### Parte 2
creare i metodi per eseguire le seguenti operazioni:
- Calcolo dell’incasso totale degli ordini a domicilio (somma del prezzo di tutti gli ordini a domicilio
presenti nella lista)
- Calcolo dell’incasso totale del ristorante (somma del prezzo di tutti gli ordini presenti nella lista)
- Metodo che restituisce il Cameriere che ha avuto il numero massimo di ordinazioni
- Metodo che restituisce un arraylist di ordini al tavolo che contengono un determinato piatto passato 
come parametro
- Metodo che restituisce il piatto meno costoso di un ordine passato come parametro
- Metodo che restituisce una lista di prodotti (una sola volta per ogni prodotto) dei piatti di un 
determinato ordine a domicilio, passato come parametro