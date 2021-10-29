import java.util.GregorianCalendar;

public class Prenotazione {
    private GregorianCalendar dataInizio;
    private GregorianCalendar dataFine;
    private String nomeCliente;
    private Camera camera;

    // costruttore di default
    public Prenotazione() {
        dataInizio = null;
        dataFine = null;
        nomeCliente = "";
        camera = null;
    }

    // costruttore con parametri
    public Prenotazione(GregorianCalendar dataInizio, GregorianCalendar dataFine, String nomeCliente, Camera camera) {
        this.dataInizio = dataInizio;
        this.dataFine = dataFine;
        this.nomeCliente = nomeCliente;
        this.camera = camera;
    }

    // costruttore di copia
    public Prenotazione(Prenotazione c) {
        this.dataInizio = c.dataInizio;
        this.dataFine = c.dataFine;
        this.nomeCliente = c.nomeCliente;
        this.camera = c.camera;
    }

    public void setDataInizio(GregorianCalendar dataInizio) {
        this.dataInizio = dataInizio;
    }

    public GregorianCalendar getDataInizio() {
        return dataInizio;
    }

    public void setDataFine(GregorianCalendar dataFine) {
        this.dataFine = dataFine;
    }

    public GregorianCalendar getDataFine() {
        return dataFine;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setCamera(Camera camera) {
        this.camera = camera;
    }

    public Camera getCamera() {
        return camera;
    }

    /*
     * Prenotazione --> DataInizio: GregorianCalendar --> DataFine:
     * GregorianCalendar --> NomeCliente: String --> camera: Camera
     */
}
