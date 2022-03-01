public class Camera {
    private int numero;
    private String tipo;
    private boolean occupata;

    //costruttore di default
    public Camera(){
        numero = 0;
        tipo = "";
        occupata = false;
    }

    // costruttore con parametri
    public Camera(int numero, String tipo, boolean occupata){
        this.numero = numero;
        this.tipo = tipo;
        this.occupata = occupata;
    }

    // costruttore di copia
    public Camera(Camera c){
        this.numero = c.numero;
        this.tipo = c.tipo;
        this.occupata = c.occupata;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public int getNumero() {
        return numero;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getTipo() {
        return tipo;
    }

    public void setOccupata(boolean occupata) {
        this.occupata = occupata;
    }

    public boolean isOccupata() {
        return occupata;
    }

    /*
    * Camera
    * --> Numero: Int
    * --> Tipologia: String
    * --> Occupata: Bool*
    */
}