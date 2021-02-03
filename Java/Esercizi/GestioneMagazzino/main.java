
public class Main {
    public static void main(String[] args){

        // creazione dei prodotti
        Prodotto p1 = new Prodotto(1, "a", 2);
        Prodotto p2 = new Prodotto(2, "b", 3);


        // creazione dei dettagli dell'Ordine
        DettagliOrdine d1 = new DettagliOrdine(p1, 2);
        DettagliOrdine d2 = new DettagliOrdine(p2, 4);


        // creazione dell'ordine
        Ordine o = new Ordine();


        // aggiunta all'ordine
        o.aggiungiAdOrdine(d1);
        o.aggiungiAdOrdine(d2);


        /*
        * TODO:
        *   - Elimina ordine (codProdotto)
        *   - ModificaOrdine (CodProdotto) -> aggiorna la quantita
        *   - Calcola Totale -> spesa totale ordine
        *   - Calcola Totale (sconto) -> spesa  totale ordine con rimozione dello sconto
        *   - Stampa Descrizione Ordine -> descrive cosa viene acquistato
        * */


        System.out.print(o.toString());
    }
}
