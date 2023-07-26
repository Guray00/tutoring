import java.util.*;

public class GestoreMessaggi {
  Vector<Messaggio> vett;

  // costruttore di default
  public GestoreMessaggi(){
    vett = new Vector <Messaggio>(); // []
  }

  // costruiamo con un messaggio
  public GestoreMessaggi(Messaggio messaggio){ // [ msg1 ]

    // vett lo creo come vettore vuoto
    vett = new Vector <Messaggio>();

    // aggiungo un messaggio al vettore
    vett.add(messaggio);
  }

  // costruiamo con un vettore di messaggi
  public GestoreMessaggi(Vector<Messaggio> messaggi){
    vett = messaggi;
  }

  // per ogni messaggio presente stampi a schermo con questo formato 
  // [data] [mittente] => [destinatario]: [testo]
  public void print(){
    
    for(int i=0; i<vett.size(); i++){
      // vett.get(i) è un messaggio!
      vett.get(i).print();
    }

  }

  // funzione che permette di aggiungere un 
  // messaggio al vettore dei messaggi
  public void addMessaggio(Messaggio msg){
    vett.add(msg);
  }

  // funzione che cancella tutti i messaggi presenti
  public void clearMessaggi(){
    vett.clear();
  }

  // funzione che restituisce il numero di messaggi
  public int conteggio(){
    return vett.size();
  }
}