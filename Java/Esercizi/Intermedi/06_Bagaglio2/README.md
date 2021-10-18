# Bagaglio
Creare la classe astratta Bagaglio che rappresenta un bagaglio da imbarcare su un volo aereo con le informazioni quali il peso e il nome e il cognome del proprietario (passeggero).
La classe dovrà implementare un costruttore parametrico, i metodi get e set delle varie proprietà e i seguenti metodi astratti:
- … pesoEccedente (…) che restituisce il valore del peso eccedente se il bagaglio supera il peso consentito (altrimenti restituisce zero).
- … tariffaSupplementare (…) che calcola e restituisce il valore della tariffa supplementare da pagare nel caso in cui il bagaglio abbia un peso eccedente a quello consentito.

Creare Volo, classe contenitore per tutti i bagagli relativi a quel volo con informazioni come il codice del volo, la destinazione, la data e l'origine del volo.
Tenere conto che:
- un bagaglio a mano viene considerato come "eccedente" se supera i kg 8
- un bagaglio da stiva viene considerato "eccedente" se supera i kg 25
- La tariffa supplementare che si deve pagare per un bagaglio da stiva è 5 €/kg
- La tariffa supplementare che si deve pagare per un bagaglio a mano è 8,5 €/kg

Metodi della classe Volo:
- ... totTariffeSupplementari(...): metodo che calcola e restituisce il valore dell'importo totale delle tariffe supplementari.
- ... pesoEccedenteTotale(...): metodo che calcola e restituisce il peso eccedente totale dei bagagli
- ... elencoBagagliMano(...): metodo privato che restituisce l'elenco dei soli bagagli a mano
- ... stampaInfoBagagliMano(...): metodo che stampa a schermo l'elenco dei soli bagagli a mano e le relative informazioni
- ... elencoBagagliManoEccedenti(...): metodo privato che restituisce l'elenco dei soli bagagli a mano con peso eccedente
- ... stampaInfoBagagliManoEccedenti(...): metodo che stampa a schermo l'elenco dei soli bagagli a mano con peso eccedente e le relative informazioni
- l'elenco dei soli bagagli a mano ordinato per cognome passeggero crescente
- l'elenco dei bagagli da stiva con peso eccedente ordinato per peso decrescente