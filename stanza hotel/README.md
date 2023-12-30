Si definisca una classe StanzaHotel con i seguenti attributi:

- codice: string
- piano: int
- tipologia: string
- capienza: int che contiene il numero di persone che possono essere ospitate al suo interno
- costoDie: double che contiene il costo giornaliero
• occupata: boolean che contiene un booleano indicante il fatto che la stanza sia occupata o meno
• giorniOccupati: int che contiene il numero di giorni da cui è occupata la stanza
- costoServiziAccessori: arraylist di double che contiene i costi aggiuntivi addebitati alla stanza

Il costruttore accetta codice, piano, tipologia, capienza e costoDie. Automaticamente imposta occupata a false, giorniOccupati a zero e costoServiziAccessori come una lista vuota di double.

I metodi sono:

- get di tutti gli attributi
- checkIn() che imposta il valore di occupata a true e giorniOccupati a 1
- initGiorno() che aumenta il numero di giorniOccupati di 1
- addServizio(double) che aggiunge il costo ricevuto come parametro alla lista dei servizi accessori
- checkOut() che riporta occupata a false, giorniOccupati a 0 e ritorna il costo totale della stanza sommando il costo dell’affitto della stanza e dei servizi accessori

Si realizzi una classe MainHotel che, all’interno del metodo main:

- inizializza tre stanze, due al piano 1 e una al piano 2
- fa il checkIn di tutte e tre le stanze
- aggiunge servizi e aumenta il numero di giorni a piacimento
- fa il checkout di tutte e tre le stanze
- stampa il totale delle stanze al primo piano e il totale delle stanze al secondo piano (usando i getter)
