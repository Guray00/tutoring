import java.util.Calendar;
import java.util.GregorianCalendar;

public class Prestito {
    private String titoloLibro;
    private String nomeCliente;
    private GregorianCalendar dataPrestito;
    private GregorianCalendar dataRestituzione;

    public Prestito(){
        this.titoloLibro = "";
        this.nomeCliente = "";
        this.dataPrestito = null;
        this.dataRestituzione = null;
    }

    public Prestito(String titoloLibro, String nomeCliente, GregorianCalendar dataPrestito, GregorianCalendar dataRestituzione){
        this.titoloLibro = titoloLibro;
        this.nomeCliente = nomeCliente;
        this.dataPrestito = dataPrestito;
        this.dataRestituzione = dataRestituzione;
    }

    public Prestito(Prestito c){
        this.titoloLibro = c.titoloLibro;
        this.nomeCliente = c.nomeCliente;
        this.dataPrestito = c.dataPrestito;
        this.dataRestituzione = c.dataRestituzione;
    }

    public void setTitoloLibro(String titoloLibro) {
        this.titoloLibro = titoloLibro;
    }

    public String getTitoloLibro() {
        return titoloLibro;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setDataPrestito(GregorianCalendar dataPrestito) {
        this.dataPrestito = dataPrestito;
    }

    public GregorianCalendar getDataPrestito() {
        return dataPrestito;
    }

    public void setDataRestituzione(GregorianCalendar dataRestituzione) {
        this.dataRestituzione = dataRestituzione;
    }

    public GregorianCalendar getDataRestituzione() {
        return dataRestituzione;
    }

    public boolean isPrestito(){
        if(dataRestituzione == null){
            return true;
        }
        return false;
    }

    public boolean isScaduto(){
			
        if (this.isPrestito()){
            GregorianCalendar now = new GregorianCalendar(); // tempo attuale

            now.add(Calendar.DAY_OF_MONTH, -30); // se precedente a questa data, allora è scaduto

            // se dataPrestito è precedente rispetto a 30 giorni fa, allora restituirà un valore > 0
            if (now.compareTo(this.dataPrestito) < 0){
                return false;
            }

            else{
                return true;
            }
        }

        return false;
    }
}
