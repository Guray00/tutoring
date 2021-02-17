import java.util.ArrayList;
import java.util.Calendar;
import java.util.GregorianCalendar;

public class Biblioteca {
    private String nome;
    private ArrayList<Prestito> prestiti;

    public Biblioteca(){
        this.nome = "";
        this.prestiti = new ArrayList<Prestito>(); // inizializziamo la lista a insieme vuoto
    }

    public Biblioteca(String nome){
        this.nome = nome;
        this.prestiti = new ArrayList<Prestito>(); // inizializziamo la lista a insieme vuoto
    }

    // costruttore con parametri
    public Biblioteca(String nome, ArrayList<Prestito> prestiti){
        this.nome = nome;
        this.prestiti = prestiti;
    }

    public Biblioteca(Biblioteca c){
        this.nome = c.nome;
        this.prestiti = c.prestiti;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setPrestiti(ArrayList<Prestito> prestiti) {
        this.prestiti = prestiti;
    }

    public ArrayList<Prestito> getPrestiti() {
        return prestiti;
    }

    public boolean presta(String nomeCliente, String titololibro, String dataPrestito){
        for(int i = prestiti.size() -1; i >= 0; i--){
            // se è il libro che ci interessa ed è stato restituito
            if(prestiti.get(i).getTitoloLibro().equals(titololibro) && !prestiti.get(i).isPrestito()){

                // per prima cosa creiamo la richiesta di prestito
                Prestito tmp = new Prestito(titololibro, nomeCliente, new GregorianCalendar(), null);

                // aggiungiamo il prestito alla lista dei prestiti
                prestiti.add(tmp);

                return true;
            }
        }

        return false;
    }
    // si cerca l'ultimo prestito inerente al titolo indicato
    Prestito ricerca(String titolo) {
        for(int i = prestiti.size() -1; i >= 0; i--){
            if(prestiti.get(i).getTitoloLibro().equals(titolo)){
                return prestiti.get(i);
            }
        }

        return null;
    }

    public boolean restituisci(String titolo) {
        return this.restituisci(titolo, new GregorianCalendar());
    }

    public boolean restituisci(String titolo, GregorianCalendar dataPrestito){
        for(int i = prestiti.size() -1; i >= 0; i--){
            if(prestiti.get(i).getTitoloLibro().equals(titolo) && prestiti.get(i).isPrestito()){
                prestiti.get(i).setDataRestituzione(dataPrestito);
                return  true;
            }
        }

        return false;
    }

    public Biblioteca libriInPrestito() {

        Biblioteca tmp = new Biblioteca();
        for(int i = 0; i < prestiti.size(); i++){
            if(prestiti.get(i).isPrestito()){
                tmp.prestiti.add(prestiti.get(i));
            }
        }

        return tmp;
    }


    // lista dei prestiti già terminati (per cui il prestito è terminato e isPrestito ci interessa quando vale false)
    public Biblioteca listaPrestiti(){
        Biblioteca tmp = new Biblioteca();
        for(int i = 0; i < prestiti.size(); i++){

            if(!prestiti.get(i).isPrestito())
                tmp.prestiti.add(prestiti.get(i));
        }

        return tmp;
    }

    public Biblioteca prestitiScaduti(){

        Biblioteca tmp = new Biblioteca();

        for (int i = 0; i < prestiti.size(); i++){

            GregorianCalendar restituzione = prestiti.get(i).getDataRestituzione();
            restituzione.add(Calendar.DAY_OF_MONTH, -30);

            if (    // scaduti attualmente
                    this.prestiti.get(i).isScaduto() || (
                            // è stato restituito in 30 giorni oppure no? (a suo tempo)
                    restituzione.compareTo(this.prestiti.get(i).getDataPrestito()) ) > 0
            ){
                tmp.prestiti.add(prestiti.get(i));
            }

        }

        return tmp;
    }

    /*
    boolean presta(String nomeCliente, String titololibro, String dataPrestito)
    -> che aggiunge un nuovo prestito alla lista dei prestiti, se il libro NON è già in prestito.

    Prestito ricerca(String titolo)
    -> che esegue la ricerca di un titolo e restituisce l'oggetto. Prestito se presente, null altrimenti.

    boolean restituisci(String titolo)
    -> che effettua la ricerca di un libro nella lista dei prestiti e - se è in prestito - aggiunge la data corrente
       come data di restituzione; ritorna false se il libro non è stato trovato oppure non è in prestito.


    boolean restituisci(String titolo, GregorianCalendar dataPrestito)
    -> che effettua la ricerca di un libro nella lista dei prestiti e - se è in prestito - aggiunge
       dataPrestito come data di restituzione; ritorna false se il libro non è stato trovato oppure non è in prestito.


    Biblioteca libriInPrestito()
    -> che restituisce la lista dei prestiti in essere.

    Biblioteca listaPrestiti()
    -> che restituisce la lista dei prestiti già terminati

    Biblioteca prestitiScaduti()
    -> che restituisce la lista dei prestiti restituiti oltre la scadenza oltre a quelli attualmente in prestito ma scaduti.
    * */
}
