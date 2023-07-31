Un ragazzo di nome Mario è appassionato di programmazione e gli piace risolvere problemi legati al mondo reale. Un giorno, mentre sta viaggiando con la sua famiglia su un'autostrada, si è chiesto come potrebbe scrivere un programma per calcolare l'importo del pedaggio autostradale che devono pagare in base ai caselli attraversati e al tipo di veicolo utilizzato.

Aiuta Marco a creare un'applicazione Java per calcolare l'importo del pedaggio autostradale.

## Istruzioni

1. Crea una classe chiamata `Casello` che rappresenti un casello autostradale. Questa classe dovrebbe avere gli attributi `num` (numero del casello), `tipo` (pianura o montagna) e `distanza` (distanza del casello dall'inizio dell'autostrada). Fornisci anche i metodi getter e setter per accedere agli attributi.

2. Crea una classe chiamata `Autostrada` che gestisca una lista di caselli. La classe `Autostrada` dovrebbe avere un costruttore vuoto che inizializza la lista dei caselli e due metodi principali:
   - `aggiungiCasello(String tipo, double distanza)`: Questo metodo consente di aggiungere un nuovo casello all'autostrada. Se la distanza fornita è negativa, il casello non verrà aggiunto alla lista.
   - `calcolaPedaggio(int caselloIngresso, int caselloUscita, String tipoVeicolo)`: Questo metodo calcola l'importo del pedaggio che un veicolo deve pagare per percorrere l'autostrada tra i caselli di ingresso e uscita specificati, utilizzando il tipo di veicolo specificato (A, B o C) per determinare le tariffe. Il metodo dovrebbe considerare solo i caselli tra l'ingresso e l'uscita, inclusi i due estremi.

3. Scrivi un programma Java che utilizzi le classi `Casello` e `Autostrada` per simulare un viaggio lungo un'autostrada. Chiedi all'utente di inserire i dati per i caselli, inclusi il tipo (pianura o montagna) e la distanza dall'inizio dell'autostrada. Successivamente, chiedi all'utente di inserire il numero del casello di ingresso, il numero del casello di uscita e il tipo di veicolo (A, B o C) utilizzato.

4. Utilizza il metodo `calcolaPedaggio` per calcolare l'importo del pedaggio da pagare e visualizza il risultato a schermo, indicando anche il numero dei caselli attraversati.

## Esempio

```plaintext
Benvenuto a CalcolaPedaggioAutostradale!

Inserisci i dati dei caselli:
Casello 1:
Tipo (pianura o montagna): pianura
Distanza dall'inizio dell'autostrada: 50.0

Casello 2:
Tipo (pianura o montagna): montagna
Distanza dall'inizio dell'autostrada: 120.0

Casello 3:
Tipo (pianura o montagna): pianura
Distanza dall'inizio dell'autostrada: 200.0

Inserisci i dati per il viaggio:
Casello di ingresso: 1
Casello di uscita: 3
Tipo di veicolo (A, B o C): B

Hai attraversato 3 caselli.
L'importo del pedaggio da pagare è: 36.732

Grazie per aver utilizzato l'applicazione. Buon viaggio!
```