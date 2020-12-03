public class DettagliOrdine {
    private Prodotto prodotto;
    private int quantita;

    //
    DettagliOrdine(Prodotto prodotto, int quantita){
        this.prodotto = prodotto;
        this.quantita = quantita;
    }


    public int getQuantita() {
        return quantita;
    }

    public Prodotto getProdotto() {
        return prodotto;
    }

    //
    public void setProdotto(Prodotto prodotto) {
        this.prodotto = prodotto;
    }

    // imposta la quantita
    public void setQuantita(int quantita) {
        this.quantita = quantita;
    }

    // metodo che restituisce la stringa che identifica l'oggetto
    public String toString(){
        return prodotto.toString() + " quantita: " + quantita;
    }
}
