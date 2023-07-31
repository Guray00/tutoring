import java.util.ArrayList;
import java.util.GregorianCalendar;

public class EsAlbergo {

  public static void main (String[] args){
    Camera c1 = new Camera(1, "singola", false);
    Camera c2 = new Camera(2, "doppia", true);
    Camera c3 = new Camera(3, "singola con bagno", true);
    Camera c4 = new Camera(2, "doppia con bagno", true);

    Prenotazione p2 = new Prenotazione(new GregorianCalendar(2020, 10, 1), new GregorianCalendar(2020, 10, 4), "Giorgio1", c2);
    Prenotazione p3 = new Prenotazione(new GregorianCalendar(2020, 11, 1), new GregorianCalendar(2020, 11, 4), "Giorgio2", c3);
    Prenotazione p4 = new Prenotazione(new GregorianCalendar(2020, 12, 1), new GregorianCalendar(2020, 12, 4), "Giorgio3", c4);

    Albergo a = new Albergo();
    a.aggiuntaCamera(c1);
    a.aggiuntaCamera(c2);
    a.aggiuntaCamera(c3);
    a.aggiuntaCamera(c4);

    a.aggiuntaPrenotazione(p2);
    a.aggiuntaPrenotazione(p3);
    a.aggiuntaPrenotazione(p4);

    ArrayList<Camera> camereLibere = a.getCamereLibere();
    ArrayList<Prenotazione> prenotazioniOttobre = a.ricercaPrenotazione(new GregorianCalendar(2020, 10, 5));

    for (int i = 0; i < camereLibere.size(); i++){
      System.out.println(camereLibere.get(i).getNumero());
    }

    System.out.println("===");

    for (int i = 0; i < prenotazioniOttobre.size(); i++){
      System.out.println(prenotazioniOttobre.get(i).getNomeCliente());
    }
  }

}
