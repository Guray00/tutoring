Creare la classe Dipendente con gli attributi:

- nome
- cognome
- livello di inquadramento professionale. Può valere da 1 a 7 oppure Q (quadro) o D (dirigente)
- stipendio mensile


Realizzare i seguenti metodi: 

- Dipendente(String nome, String cognome, char livello, float stipendio): costruttore con parametri.

- tredicesima(): restituisce la tredicesima calcolata come 80% dello stipendio mensile.

- stipendioAnnuo(): restituisce lo stipendio annuo calcolato aggiungendo la tredicesima e un bonus di 1000 euro per i dipendenti dal livello 6 in su (compresi quadri e dirigenti).

- toString(): restituisce una stringa a piacere contenente almeno cognome e stipendio annuo.

- compareTo(Dipendente d): confronta due dipendenti in base allo stipendio annuo e restituisce un intero con il criterio consueto.

- getters e setters per gli attributi

Implementare in seguito un main con una lista di dipendenti e stamparla. Calcolare inoltre il totale degli stipendi annui.

Implementare in seguito un main nel seguente modo:

- creare una lista di dipendenti
- stampare la lista
- calcolare il totale degli stipendi annui
- ordinare la lista per stipendio annuo decrescente e stamparla
- aumentare del 5% lo stipendio mensile dei quadri e dirigenti
- stampare nuovamente la lista ordinata
- calcolare e stampare il totale degli aumenti erogati su base annua
