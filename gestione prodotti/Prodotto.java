import java.util.GregorianCalendar;

public class Prodotto {
    private String codice;
    private String descrizione;
    private GregorianCalendar dataDiScadenza;

    public Prodotto(){
        codice = "";
        descrizione = "";
        dataDiScadenza = null;
    }

    public Prodotto(String codice, String descrizione, GregorianCalendar dataDiScadenza){
        this.codice = codice;
        this.descrizione = descrizione;
        this.dataDiScadenza = dataDiScadenza;
    }

    public Prodotto(Prodotto c){
        this.codice = c.codice;
        this.descrizione = c.descrizione;
        this.dataDiScadenza = c.dataDiScadenza;
    }

    //  prodotto1.equals(prodotto2);
    public boolean equals(Prodotto p2){
        if (this.codice.equals(p2.codice)) return true;
        else
            return false;
    }

    public void setCodice(String codice) {
        this.codice = codice;
    }

    public String getCodice() {
        return codice;
    }

    public void setDescrizione(String descrizione) {
        this.descrizione = descrizione;
    }

    public String getDescrizione() {
        return descrizione;
    }

    public void setDataDiScadenza(GregorianCalendar dataDiScadenza) {
        this.dataDiScadenza = dataDiScadenza;
    }

    public GregorianCalendar getDataDiScadenza() {
        return dataDiScadenza;
    }
}