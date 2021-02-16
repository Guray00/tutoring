# Bagaglio
Si vuole automatizzare la gestione dei bagagli presenti su un aereo.
La classe Bagaglio rappresenta un bagaglio da imbarcare su un volo aereo – con le informazioni quali il
peso e il nome del proprietario (passeggero).
Tenere conto che:
- un bagaglio viene considerato come "eccedente" se supera i kg 25.
- la tariffa supplementare che si deve pagare per un bagaglio è: 5 €/kg (se il bagaglio non è
eccedente non viene pagato niente)

La classe Volo contiene il codice del volo e la lista dei bagagli relativi a quel volo.
Per ogni metodo richiesto, oltre al punteggio indicato, verrà aggiunto un punteggio pari a 0,5 se verrà
effettuato corretto utilizzo nel main che ne verifichi il funzionamento.
Realizzare i seguenti metodi:
## Metodo 1
Metodo che calcola l'importo totale dei supplementi (totale delle tasse dei bagagli che superano i 25 kg)
## Metodo 2
numeroBagagli (boolean isEccedente): che restituisca il numero di bagagli eccedenti (se riceve in input il
valore true) oppure dei bagagli non eccedenti (se riceve in input il valore false).
## Metodo 3
Metodo che restituisce un array dei bagagli con peso eccedente
## Metodo 4
Metodo che riceve in input due valori rappresentanti il peso minimo e il peso massimo di un bagaglio e
restituisce un elenco con i bagagli con il peso compreso tra i due valori (valori limite inclusi).
## Metodo 5
Metodo che, ricevuto in input il nome di un passeggero, stampa a schermo i suoi bagagli con il relativo
peso, ad es:
``` Nome passeggero: Rossi Mario
Bagagli:
- Bagaglio1 peso: 20 Kg
- Bagaglio2 peso: 18 Kg
- Bagaglio3 peso: 27 Kg
- Bagaglio4 peso: 28 Kg 
```

Se il passeggero non esiste stampare un opportuno messaggio di output.