import java.util.ArrayList;

public class ViaggioPerSingoli extends Viaggio{

    // costo base + quota fissa giornaliera x giorni
    // definizione del metodo astratto calcoloCosto definito in viaggio

    public ViaggioPerSingoli(String t, int c, ArrayList<Giorno> l){
        super(t, c, l);
    }

    public float calcoloCosto(){
        return getCosto() + (getQuotaFissa() * getLista().size());
    }

    public String toString(){
        String tmp ="Titolo: " + this.getTitolo() + " Costo: " +this.calcoloCosto() + " Quota Fissa: " + this.getQuotaFissa() + "\n";

        for (int i = 0; i < getLista().size(); i++){
            tmp += "\t(" + getLista().get(i).getLuogo() + " " + getLista().get(i).getDescrizione()+ ")\n";
        }

        return tmp;
    }
}
