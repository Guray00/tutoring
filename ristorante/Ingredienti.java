public class Ingredienti {
    /*
    *  Ingrediente
    *  --> descrizione: String
    *  --> quantita: Int
    *  --> Prezzo: Int
    */
    private String  descrizione;
    private int     quantita;
    private int     prezzo;


    // costruttore classico con implementazione per le 3 variabili richieste
    public Ingredienti(String descrizione, int quantita, int prezzo){
        this.descrizione = descrizione;
        this.quantita    = quantita;
        this.prezzo      = prezzo;
    }
    // costruttore di copia che si occupa di copiare le caratteristiche di un oggetto passato in input in quello attuale
    public Ingredienti(Ingredienti c){
        this.descrizione = c.descrizione;
        this.quantita    = c.quantita;
        this.prezzo      = c.prezzo;
    }

    public void setDescrizione(String descrizione) {
        this.descrizione = descrizione;
    }

    public void setQuantita(int quantita) {
        this.quantita = quantita;
    }

    public void setPrezzo(int prezzo) {
        this.prezzo = prezzo;
    }

    public String getDescrizione(){
        return descrizione;
    }

    public int getQuantita() {
        return quantita;
    }

    public int getPrezzo() {
        return prezzo;
    }
}
