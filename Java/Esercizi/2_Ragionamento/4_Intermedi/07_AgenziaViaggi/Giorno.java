public class Giorno {
    private int numeroOrdine;
    private String luogo;
    private String descrizione;

    // override per la verifica dei giorni in base al numero di ordine
    public boolean equals(Giorno o){
        if (this.numeroOrdine == o.numeroOrdine) return true;
        return false;
    }

    public Giorno() {
        numeroOrdine = 0;
        luogo = "";
        descrizione = "";
    }

    public Giorno(int numeroOrdine, String luogo, String descrizione){
        this.numeroOrdine = numeroOrdine;
        this.luogo = luogo;
        this.descrizione = descrizione;
    }

    public Giorno(Giorno c){
        this.numeroOrdine = c.numeroOrdine;
        this.luogo = c.luogo;
        this.descrizione = c.descrizione;
    }

    public void setNumeroOrdine(int numeroOrdine) {
        this.numeroOrdine = numeroOrdine;
    }

    public int getNumeroOrdine() {
        return numeroOrdine;
    }

    public void setLuogo(String luogo) {
        this.luogo = luogo;
    }

    public String getLuogo() {
        return luogo;
    }

    public void setDescrizione(String descrizione) {
        this.descrizione = descrizione;
    }

    public String getDescrizione() {
        return descrizione;
    }

	public String toString(){
		return "luogo: " + getLuogo() + " descrizione: " + getDescrizione();
	}
}
