public class Prodotto {

    private int codice;
    private String descrione;
    private float prezzo;

    Prodotto(int codice, String descrizione, int prezzo){
        // inizializzazione della classe

        this.codice     = codice;
        this.descrione  = descrizione;
        this.prezzo     = prezzo;
    }

    // ============= metodi get =================

    public int getCodice() {
        return codice;
    }

    public float getPrezzo() {
        return prezzo;
    }

    public String getDescrione() {
        return descrione;
    }

    public String toString(){
        String str =  "codice: "+codice + " -> descrizione: "+descrione+" prezzo: "+prezzo;
        return str;
    }

    // ============= metodi set =================

    public void setCodice(int codice){
        this.codice = codice;
    }

    public void setDescrione(String descrione){
        this.descrione = descrione;
    }

    public void setPrezzo(int prezzo){
        this.prezzo = prezzo;
    }
}
