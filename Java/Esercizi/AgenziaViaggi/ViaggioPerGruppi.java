import java.util.ArrayList;

public class ViaggioPerGruppi extends Viaggio{
    private static int quotaGruppo;
    private int maxPartecipanti;
    private int minPartecipanti;

    public ViaggioPerGruppi(){
        super();
        maxPartecipanti = 0;
        minPartecipanti = 0;
    }
    // costo base + quotaFissaGiornaliera * giorni + quotaGruppo * maxPasseggieri
    public float calcoloCosto(){
        return getCosto() + (getQuotaFissa() * getLista().size()) + (quotaGruppo * maxPartecipanti);
    }

    public ViaggioPerGruppi(String titolo, int costo, ArrayList<Giorno> lista, int maxPartecipanti, int minPartecipanti){
        super(titolo, costo, lista);
        this.maxPartecipanti = maxPartecipanti;
        this.minPartecipanti = minPartecipanti;
    }

    public ViaggioPerGruppi(ViaggioPerGruppi c){
        super(c);
        this.maxPartecipanti = c.maxPartecipanti;
        this.minPartecipanti = c.minPartecipanti;
    }

    public void setMaxPartecipanti(int maxPartecipanti) {
        this.maxPartecipanti = maxPartecipanti;
    }

    public int getMaxPartecipanti() {
        return maxPartecipanti;
    }

    public void setMinPartecipanti(int minPartecipanti) {
        this.minPartecipanti = minPartecipanti;
    }

    public int getMinPartecipanti() {
        return minPartecipanti;
    }

    public void setQuotaGruppo(int q){
        this.quotaGruppo = q;
    }

    public String toString(){
        String tmp ="Titolo: " + this.getTitolo() + " Costo: " +this.calcoloCosto() + " Quota Fissa: " + this.getQuotaFissa() + " Max Partecipanti: "+ getMaxPartecipanti() + " Min Partecipanti: "+ getMinPartecipanti() + "\n";


		// viaggio
			// lista -> elenco di giorni

        for (int i = 0; i < getLista().size(); i++){
			// aggiungo una tabulazione + informazioni del giorno + a capo
            tmp += "\t(" + getLista().get(i).toString() + ")\n";
        }

        return tmp;
    }
}
