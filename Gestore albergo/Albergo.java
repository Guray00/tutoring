import java.util.ArrayList;
import java.util.GregorianCalendar;

public class Albergo {
    private String nome;
    private ArrayList<Camera> camera;
    private ArrayList<Prenotazione> prenotazioni;

    // costruttore di default
    public Albergo(){
        nome = "";
        camera = new ArrayList<Camera>();
        prenotazioni = new ArrayList<Prenotazione>();
    }

    // costruttore con parametri
    public Albergo(String nome, ArrayList<Camera> camera, ArrayList<Prenotazione> prenotazioni){
        this.nome = nome;
        this.camera = camera;
        this.prenotazioni = prenotazioni;
    }

    public Albergo(Albergo c){
        this.nome = c.nome;
        this.camera = c.camera;
        this.prenotazioni = c.prenotazioni;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setCamere(ArrayList<Camera> camera) {
        this.camera = camera;
    }

    public ArrayList<Camera> getCamere() {
        return camera;
    }

    public void setPrenotazioni(ArrayList<Prenotazione> prenotazioni) {
        this.prenotazioni = prenotazioni;
    }

    public ArrayList<Prenotazione> getPrenotazioni() {
        return prenotazioni;
    }

    public void aggiuntaPrenotazione(Prenotazione checkin){
        prenotazioni.add(checkin);
    }

    public void rimozionePrenotazione(Prenotazione checkout){
        prenotazioni.remove(checkout);
    }

    public void aggiuntaCamera(Camera stanza){
        camera.add(stanza);
    }

    public void rimozioneCamera(Camera stanza){
        camera.remove(stanza);
    }

    // rimozione di una camera (con interi)
    public void rimozioneCamera(int numero){
        for(int i = 0; i < camera.size(); i++) {
            if (camera.get(i).getNumero() == numero) {
                camera.remove(i);
            }
        }
    }

    // aggiunta di una camera (con interi)
    public void AggiungiCamera(int numero, String tipo){
        Camera tmp = new Camera(numero, tipo, false);
        camera.add(tmp);
    }
    // ricerca di una prenotazione in un giorno specificato
    public ArrayList<Prenotazione> ricercaPrenotazione(GregorianCalendar giorno){
        ArrayList<Prenotazione> prenotazioniGiorno = new ArrayList<Prenotazione>();

        // scorriamo tutte le prenotazioni
        for(int i = 0; i < prenotazioni.size(); i++){

            // se la data della prenotazione equivale, la aggiungiamo alla lista delle cose da restituire


            // giorno >= prenotazioneInzio and giorno <= pren

            // [inizio] [giorno] [fine]
            if(prenotazioni.get(i).getDataInizio().compareTo(giorno) * giorno.compareTo(prenotazioni.get(i).getDataFine()) >= 0)
            //if (prenotazioni.get(i).getDataInizio().equals(giorno))
            {
                prenotazioniGiorno.add(prenotazioni.get(i));
            }
        }

        return prenotazioniGiorno;
    }


    public ArrayList<Camera> getCamereLibere(){
        ArrayList<Camera> camereLibere = new ArrayList<Camera>();

        for(int i = 0; i < camera.size(); i++){
            if(camera.get(i).isOccupata() == false){
                camereLibere.add(camera.get(i));
            }
        }
        return camereLibere;
    }
    /*   Albergo
        * --> Nome: String
        * --> Camere: ArrayList<Camera>
        * --> Prenotazioni: ArrayList<Prenotazione>
 */
}
