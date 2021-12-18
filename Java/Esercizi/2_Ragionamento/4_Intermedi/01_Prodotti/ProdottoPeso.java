import java.util.GregorianCalendar;
public class ProdottoPeso extends Prodotto{
    private float prezzoAlKg;
    private float pesoKg;

    public float prezzo(){
        float prezzoTot = 0;
        prezzoTot = prezzoAlKg * pesoKg;
        return prezzoTot;
    }

    public ProdottoPeso(){
        super();

        prezzoAlKg = 0;
        pesoKg = 0;
    }

    public ProdottoPeso(String codice, String descrizione, GregorianCalendar calendario, float prezzoAlKg, float pesoKg){
        super(codice, descrizione, calendario);

        this.prezzoAlKg = prezzoAlKg;
        this.pesoKg = pesoKg;
    }

    public ProdottoPeso(ProdottoPeso c){
        // c è di tipo Prodotto peso ma viene convertito in Prodotto, richiamando il costruttore
        // di copia Prodotto(Prodotto c)
        super(c);
        this.prezzoAlKg = c.prezzoAlKg;
        this.pesoKg = c.pesoKg;
    }

    public void setPrezzoAlKg(float prezzoAlKg) {
        this.prezzoAlKg = prezzoAlKg;
    }

    public float getPrezzoAlKg() {
        return prezzoAlKg;
    }

    public void setPesoKg(float pesoKg) {
        this.pesoKg = pesoKg;
    }

    public float getPesoKg() {
        return pesoKg;
    }
}


// peso kg
// prezzo al kg

// funzione che moltiplica il peso al prezzo al kg