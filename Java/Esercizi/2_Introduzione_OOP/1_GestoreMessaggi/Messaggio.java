// un messaggio ha:
// - contenuto: String
// - data: localDateTime
// - mittente: String
import java.time.LocalDateTime;


public class Messaggio{
  String contenuto;
  LocalDateTime dataora;
  String mittente;
  

    public Messaggio(String m, String c){
        this.mittente=m;
        this.contenuto=c;
        this.dataora=LocalDateTime.now();
    }  
  

    public void print(){

        //[dfddf] [contenuto] [dataora]
        System.out.println("["+ mittente +"] [" + contenuto + "] ["+ dataora + "]");
    }

}

