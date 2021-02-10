import java.util.ArrayList;

public abstract class Viaggio {
    private String titolo;
    private float costo;                // costo di base
    private ArrayList<Giorno> lista;    // lista di giorni
    private static int quotaFissa;

    public void aggiuntaGiorno(Giorno g){

        boolean tmp = true;

        for(int i = 0; i < lista.size(); i++){
            if(lista.get(i).equals(g)){
                tmp = false;
            }
        }

        if(tmp) lista.add(g);

        //if (!lista.contains(g)) lista.add(g);
    }

    public abstract float  calcoloCosto(); // metodo astratto, non può essere richia
    public abstract String  toString(); // metodo astratto, non può essere richia

    public void rimozioneGiorno(Giorno g){
        for(int i = 0; i < lista.size(); i++){
            if(lista.get(i).equals(g)){
                lista.remove(g);
                return;
            }
        }
    }

    public boolean equals(Viaggio v){
        if(this.titolo == v.titolo) return true;
        return false;
    }

    public Viaggio(){
        titolo = "";
        costo = 0;
        lista = new ArrayList<Giorno>();
    }

    public Viaggio(String titolo, float costo, ArrayList<Giorno> lista){
        this.titolo = titolo;
        this.costo = costo;
        this.lista = lista;
    }

    public void setQuotaFissa(int quotaFissa){
        this.quotaFissa = quotaFissa;
    }

    public int getQuotaFissa(){return this.quotaFissa;}

    public Viaggio(Viaggio c){
        this.titolo = c.titolo;
        this.costo = c.costo;
        this.lista = c.lista;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }

    public String getTitolo() {
        return titolo;
    }

    public void setCosto(float costo) {
        this.costo = costo;
    }

    public float getCosto() {
        return costo;
    }

    public void setLista(ArrayList<Giorno> lista) {
        this.lista = lista;
    }

    public ArrayList<Giorno> getLista() {
        return lista;
    }
}
// titolo del viaggio, il costo di base e la lista degli oggetti di tipo Giorno di cui
// si compone


// quota fissa giornaliera