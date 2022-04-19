import java.util.ArrayList;

public class Ristorante {

    /* Ristorante
    * --> elenco di piatti: ArrayList
    * --> elenco di ordini: ArrayList
    */

    private ArrayList<Piatto> ordini;
    private ArrayList<Piatto> menu;

    public Ristorante(ArrayList<Piatto> ordini, ArrayList<Piatto> menu){
        this.ordini = ordini;
        this.menu = menu;
    }

    // costruttore di copia
    public Ristorante(Ristorante c){
        this.ordini = c.ordini;
        this.menu = c.menu;
    }

    public void setOrdini(ArrayList<Piatto> ordini) {
        this.ordini = ordini;
    }

    public void setMenu(ArrayList<Piatto> menu) {
        this.menu = menu;
    }

    public ArrayList<Piatto> getOrdini() {
        return ordini;
    }

    public ArrayList<Piatto> getMenu() {
        return menu;
    }

    public void addOrdine(Piatto i){
        ordini.add(i);
    }

    public void removeOrdine(Piatto i){
        ordini.remove(i);
    }

    public ArrayList<Piatto> sortMenu(Piatto.TipoDiPiatto p){
        /*
        * Ragionamento:
        * creo un array vuoto: elenco
        * scorriamo l'array del menu
        * --> selezioniamo i tipi di piatti if (tipo == quelloInInput)
        * -------> aggiungiamo il piatto al nuovo array che era vuoto
        *
        * riordiniamo l'elenco
        */

        // selezioniamo i piatti
        ArrayList<Piatto> elenco = new ArrayList<Piatto>();
        for(int i = 0; i < menu.size(); i++){

            // controllo se il piatto alla posizione i-esima è della tipologia corretta
            if(menu.get(i).getTipo() == p){ // se il tipo è corretto salvo nell'array ausiliario "elenco" i piatti
                elenco.add(menu.get(i));              // aggiungo il piatto
            }
        }


        // scorro gli elementi
        for (int i= 0; i < elenco.size()-1; i++){
            int min = i;

            for (int j = i+1; j < elenco.size(); j++){
                if (elenco.get(j).getPrezzo() < elenco.get(min).getPrezzo()){
                    min = j;
                }
            }

            // scambio
            Piatto tmp = elenco.get(min);
            elenco.set(min, elenco.get(i));
            elenco.set(i, tmp);
        }


        return elenco;
    }
}
