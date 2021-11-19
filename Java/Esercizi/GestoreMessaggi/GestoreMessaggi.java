import java.util.ArrayList;


public class GestoreMessaggi {
    ArrayList<Messaggio> listamessaggi;
    
    // default
    public GestoreMessaggi(){
        listamessaggi = new ArrayList<Messaggio>();
    }

    // quando gli passo una lista
    public GestoreMessaggi(ArrayList<Messaggio> lista){
        listamessaggi = lista;
    }

    // quando gli passo un messaggio
    public  GestoreMessaggi(Messaggio m){
        listamessaggi = new ArrayList<Messaggio>();
        listamessaggi.add(m);
    }

    public void nuovoMessaggio(Messaggio m){
        listamessaggi.add(m);
    }
    
    public void pulisciMessaggi(){
      listamessaggi.clear();
    }

    public int contaMessaggi(){
        return listamessaggi.size();
    }

    public void stampaMessaggi(){
        for(Messaggio m : listamessaggi){
            m.print();
        }
    }
}
