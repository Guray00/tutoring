import java.util.ArrayList;
import java.util.GregorianCalendar;

public class Prodotti {
    private ArrayList<ProdottoPezzo> prezzo;
    private ArrayList<ProdottoPeso> peso;

    public Prodotti (){
        prezzo = new ArrayList<ProdottoPezzo>();
        peso = new ArrayList<ProdottoPeso>();
    }

    public void aggiungi(ProdottoPezzo c){
        prezzo.add(c);
    }

    public void aggiungi(ProdottoPeso c){
        peso.add(c);
    }

    public String prodottoRicerca(ProdottoPezzo c){
        for(int i = 0; i < prezzo.size(); i++){
            if(prezzo.get(i).getCodice().equals(c.getCodice())){
                return prezzo.get(i).getCodice();
            }
        }
        return null;
    }

    public String prodottoRicerca(ProdottoPeso c){
        for(int i = 0; i < peso.size(); i++){

            //System.out.println("confronto " + c.getCodice() +" con " + peso.get(i).getCodice() +" " + (c.getCodice().equals(peso.get(i).getCodice())));
            if(peso.get(i).getCodice().equals(c.getCodice())){
                //System.out.println("uguali");
                return peso.get(i).getCodice();
            }
        }
        return null;
    }

    public boolean rimuovi(ProdottoPezzo c){
        if(prezzo.remove(c)){
            return true;
        }
        return false;
    }

    public boolean rimuovi(ProdottoPeso c){
        if(peso.remove(c)){
            return true;
        }
        return false;
    }

    public float prezzo(ProdottoPezzo c){
        float prezzoTot = 0;
        for(int i = 0; i < prezzo.size(); i++){
            prezzoTot = prezzoTot + prezzo.get(i).getPrezzo();
        }
        return prezzoTot;
    }

    public float prezzo(ProdottoPeso c){
        float prezzoTot = 0;
        for(int i = 0; i < peso.size(); i++){
            prezzoTot = prezzoTot + peso.get(i).prezzo();
        }
        return prezzoTot;
    }

    public Prodotti prodottiScadutiAl (GregorianCalendar c){

        Prodotti tmp = new Prodotti();

        for (int i = 0; i < prezzo.size(); i++){
            if (prezzo.get(i).getDataDiScadenza().compareTo(c) < 0){
                tmp.aggiungi(prezzo.get(i));
            }
        }

        for (int i = 0; i < peso.size(); i++){
            if (peso.get(i).getDataDiScadenza().compareTo(c) < 0){
                tmp.aggiungi(peso.get(i));
            }
        }

        return tmp;
    }

    public void setPrezzo(ArrayList<ProdottoPezzo> prezzo) {
        this.prezzo = prezzo;
    }

    public ArrayList<ProdottoPezzo> getPrezzo() {
        return prezzo;
    }

    public void setPeso(ArrayList<ProdottoPeso> peso) {
        this.peso = peso;
    }

    public ArrayList<ProdottoPeso> getPeso() {
        return peso;
    }
}

