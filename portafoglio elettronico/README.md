Definisci la classe PortafoglioElettronico (tipo Satispay) con i seguenti attributi (0,75 pt):

- String codicePIN
- boolean attivo
- double budgetMassimo
- double creditoResiduo
- double spesaTotale

i metodi sono:
- costruttore:
  - Inizialmente disattivo,
  - spesaTotale a 0
  - credito residuo uguale a budget massimo (1 pt)
  - get di tutti gli attributi (0,25 pt)
- void attiva: attiva il portafoglio (0,25 pt)
- void disattiva: pone il portafogli in stato disattivo (0,25 pt)
- boolean acquista(String codicePIN, double prezzo) : Effettua un pagamento a due condizioni:
- il codice PIN è uguale a quello ricevuto come parametro
- il credito residuo permette di effettuare il pagamento
Ritorna true se il pagamento è stato effettuato, false altrimenti (1,5 pt)
- double ricarica: aumenta il credito residuo e restituisce il nuovo credito; il credito
residuo non potrà essere superiore al budgetMassimo (0,5 pt)
- boolean verificaAcquisto (double prezzoUnitario, int quantita): verifica se è
possibile acquistare “quantita” prodotti al prezzo unitario di “prezzoUnitario”. Ritorna
true se possibile, false altrimenti (0,5 pt)
Creare inoltre un main che effettua le seguenti operazioni (3 pt):
1. crea un portafoglio elettronico
2. prova ad effettuare un pagamento
3. attiva il portafoglio
4. effettua due pagamenti, uno con PIN corretto e uno con PIN errato e stampa
messaggio per l’esito dei pagamenti
5. stampa il credito residuo
6. verifica la fattibilità di un acquisto di 1 articolo al costo di 1 euro e stampa messaggio
7. verifica la fattibilità di 3 acquisti da 1000000 di euro e stampa messaggio
8. ricarica il portafogli
9. stampa il credito residuo


nota1: acquista scala il credito
nota2: non si può fare acquisto con il portafoglio disattivato