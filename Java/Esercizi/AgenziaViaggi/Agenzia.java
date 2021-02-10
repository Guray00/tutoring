import java.util.ArrayList;

public class Agenzia {
    private String nome;
    private ArrayList<Viaggio> viaggi;


    // metodo n. 6
    public ArrayList<Viaggio> viaggiCostoInferiore(float costo){
        ArrayList<Viaggio> viaggiInferiore = new ArrayList<Viaggio>();

        for (int i = 0; i < viaggi.size(); i++){
            // scorriamo la lista dei viaggi

            if (viaggi.get(i).calcoloCosto() <= costo){
                // dobbiamo inserire il viaggio

                // 325 -> 270  300  320  325  350  370

                int j = 0;
                while (j < viaggiInferiore.size() && viaggi.get(i).calcoloCosto() < viaggiInferiore.get(j).calcoloCosto()){
                    j++;
                }

                viaggiInferiore.add(j, viaggi.get(i));
            }

            else{
                // non inseriamo il viaggio
            }

        }

        return viaggiInferiore;
    }
    // add(intero, elemento);
    /* scorriamo la lista dei viaggi
          costa meno di costo?
                si
                    scorro gli elementi finchè il costo del successivo è minore
                    inserisco alla posizione i-esima
                no
                    continuo
    */


    // instance of consente di verificare all'interno di una lista della classe base "Viaggio"
    // se gli elementi presenti, istanze di tipo classe derivato, sono di un tipo piuttosto che un altro

    // metodo n. 7
    public ArrayList<Viaggio> viaggioSingoli(String luogo){
        ArrayList<Viaggio> viaggioSingoli = new ArrayList<Viaggio>();

        // scorriamo tutti i viaggi salvati in viaggi
        for(int i = 0; i < viaggi.size(); i++){

            // verifico che sia un viaggio per singoli
            if(viaggi.get(i) instanceof ViaggioPerSingoli){
                //if(viaggi.get(i).equals(luogo))
                //viaggioSingoli.add(viaggi.get(i));


                // controllo se esiste almeno un giorno con luogo quello passato in input
                boolean tmp = false;
                for (int j = 0; j < viaggi.get(i).getLista().size(); j++){
                    if(viaggi.get(i).getLista().get(j).getLuogo().equals(luogo)){
                        tmp = true;
                        break; //esiste, esco
                    }
                }

                if (tmp){
                    int k = 0;

                    // controlliamo che il titolo sia maggiore rispetto a quello verificato, incrementiamo l'indice
                    while(k < viaggioSingoli.size() && viaggi.get(i).getTitolo().compareTo(viaggioSingoli.get(k).getTitolo()) > 0){
                        k++;
                    }

                    // Carrara Firenze Milano Piacenza  Pisa

                    viaggioSingoli.add(k, viaggi.get(i));
                }

            }
        }

        return viaggioSingoli;
    }

    // metodo n.8
    public ArrayList<ViaggioPerGruppi> viaggioGruppi(int minPartecipanti) {
        ArrayList<ViaggioPerGruppi> viaggiPartecipanti = new ArrayList<ViaggioPerGruppi>();

        // scorro tutti i viaggi
        for (int i = 0; i < viaggi.size(); i++) {

            // controlliamo che siano
            if (viaggi.get(i) instanceof ViaggioPerGruppi) {

                // controlliamo che il numero dei partecipanti minimo sia uguale
                if (((ViaggioPerGruppi) viaggi.get(i)).getMinPartecipanti() == minPartecipanti) {

                    // scorriamo i viaggi già inseriti per poter inserire in ordine di numero di giorni

                    int j = 0;

                    // 13-> 5 6 10 12 --

                    /*
                      AND
                    * V V V
                    * V F F
                    * F V F
                    * F F F

                      OR
                      V V V
                      F V V
                      V F V
                      F F F
                    */


                    while(j < viaggiPartecipanti.size() && viaggi.get(i).getLista().size() > viaggiPartecipanti.get(j).getLista().size()){
                        j++;
                    }

                    viaggiPartecipanti.add(j, (ViaggioPerGruppi) viaggi.get(i));
                }
            }
        }

        return viaggiPartecipanti;
    }

    // la creazione della lista dei viaggi per gruppi che superano un certo numero di giorni.
    public ArrayList<ViaggioPerGruppi> giorniSuperati(int giorni){
        // creiamo la lista per gli elementi
        ArrayList<ViaggioPerGruppi> v = new ArrayList<ViaggioPerGruppi>();

        // scorriamo i viaggi presenti
        for (int i = 0; i < viaggi.size(); i++){

            // cotnrolliamo che l'elemento sia effettivamente un viaggio per gruppi
            if(viaggi.get(i) instanceof ViaggioPerGruppi){

                // controlliamo che il numero di giorni sia superiore a quello inserito in input
                if(viaggi.get(i).getLista().size() > giorni){

                    // inseriamo nella lista
                    v.add((ViaggioPerGruppi) viaggi.get(i));
                }
            }
        }

        return v;
    }

    public void aggiungiViaggio(Viaggio v){
        boolean tmp = true;

        for(int i = 0; i < viaggi.size(); i++){
            if(viaggi.get(i).equals(v)){
                tmp = false;
            }
        }

        if(tmp) viaggi.add(v);
    }

    public void rimozioneViaggio(Viaggio v){
        for(int i = 0; i < viaggi.size(); i++){
            if(viaggi.get(i).equals(v)){
                viaggi.remove(v);
                return;
            }
        }
    }

    public Agenzia(){
        nome = "";
        viaggi = new ArrayList<Viaggio>();
    }

    public Agenzia(String nome, ArrayList<Viaggio> viaggi){
        this.nome = nome;
        this.viaggi = viaggi;
    }

    public Agenzia(Agenzia c){
        this.nome = c.nome;
        this.viaggi = c.viaggi;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setViaggi(ArrayList<Viaggio> viaggi) {
        this.viaggi = viaggi;
    }

    public ArrayList<Viaggio> getViaggi() {
        return viaggi;
    }
}



