public class Bagaglio {
    private float peso;
    private String nomePasseggero;

    private static int tariffa = 5;
    private static int eccedente = 25;

    public float eccedenza(){
        if(peso > eccedente){
            return (peso - eccedente) * tariffa;
        }

        return 0;
    }

    public boolean isEccedente(){
        if(peso > eccedente){
            return true;
        }
        return false;
    }

    public Bagaglio(){
        peso = 0;
        nomePasseggero = "";
    }

    public Bagaglio(float peso, String nomePasseggero){
        this.peso = peso;
        this.nomePasseggero = nomePasseggero;
    }

    public Bagaglio(Bagaglio c){
        this.peso = c.peso;
        this.nomePasseggero = c.nomePasseggero;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }

    public float getPeso() {
        return peso;
    }

    public void setNomePasseggero(String nomePasseggero) {
        this.nomePasseggero = nomePasseggero;
    }

    public String getNomePasseggero() {
        return nomePasseggero;
    }
}





