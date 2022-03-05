Scrivere la funzione C che riceve in ingresso un array V di valori float di dimensione N, ed una lista L collegata con puntatori di valori float ed opera nel modo seguente:

- Inizialmente è trovata la mediana dell’array (se il numero di elementi è dispari la mediana divide in due metà uguali la distribuzione dei dati; se il numero di elementi dell’array è pari, la mediana è calcolata come la media dei due elementi centrali della distribuzione dei dati). Il valore della mediana deve anche essere restituito tra i parametri formali della funzione;

- Gli elementi della lista L con valore minore della mediana dell’array calcolata come sopra sono rimossi dalla lista ed aggiunti secondo l’ordine con cui sono trovati in L ad una seconda lista L1 (inizialmente vuota) che deve essere restituita tra i parametri formali della funzione.

- Scrivere anche la funzione di costo e la complessità della funzione.
(Esempio: V={5,1,3,4,6,2,7,8}, N=8, Med=4.5 -> L={5,3,1,6,2} -> rimuove da L gli elementi
minori della mediana e li aggiunge in modo ordinato a L1={3,1,2}). 