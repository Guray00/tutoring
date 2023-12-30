Definisci la classe DistributoreBiglietti con gli attributi:
- codice:
- nomeF: nome della fermata del bus
- nBiglietti: numero dei biglietti che il distributore può ancora erogare
- stato: indica se il distributore è in funzione oppure è fermo
- costo: costo del biglietto (potrebbe essere unico per tutti i distributori)

e i metodi: 
- DistributoreBiglietti: costruttore
- get...: getter per ogni attributo
- toString: restituisce una stringa con i dati del distributore
- ricarica: ricarica il distributore del numero di biglietti specificato
- vendi: vende il numero di biglietti specificato e restituisce una stringa contenente l’importo da pagare o il messaggio che i biglietti non sono disponibili. Deve anche aggiornare lo stato del distributore quando ha esaurito i biglietti.
- ripara: cambia lo stato del distributore in seguito a un intervento di manutenzione

Creare inoltre un main che testa in maniera significativa la classe DistributoreBiglietti.
