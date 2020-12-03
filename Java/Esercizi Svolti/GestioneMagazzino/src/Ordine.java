import java.util.Calendar;
import java.util.Date;
import java.util.ArrayList; // import the ArrayList class
import java.util.GregorianCalendar;

public class Ordine {

    int codiceOrdine;
    Calendar data;
    ArrayList<DettagliOrdine> dettagli;

    Ordine(){
        data = new GregorianCalendar();
        dettagli = new ArrayList<DettagliOrdine>();
    }

    public void setOrdine(int codiceOrdine) {
        this.codiceOrdine = codiceOrdine;
    }

    public void setData(Calendar data) {
        this.data = data;
    }

    public Calendar getData() {
        return data;
    }

    public int getCodiceOrdine() {
        return codiceOrdine;
    }

    public void aggiungiAdOrdine(DettagliOrdine dettagliOrdine){
        dettagli.add(dettagliOrdine);
    }


    public String toString(){
        StringBuffer str = new StringBuffer();

        for (int i = 0; i < dettagli.size(); i++){
            str.append(dettagli.get(i).toString() + ((i+1 != dettagli.size()) ? "\n" : ""));
        }

        return str.toString();
    }

}
