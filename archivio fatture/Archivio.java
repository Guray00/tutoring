import java.util.*;

public class Archivio {
  private Vector<Fattura> fatture;

  // costruttore di default
  public Archivio(){
    fatture = new Vector<Fattura>();
  }

  // costruttore con un parametro
  public Archivio(Vector<Fattura> fatture){
    this.fatture = fatture;
  }

  // metodo che aggiunge una fattura
  public void addFattura(Fattura fattura){
    fatture.add(fattura);
  }

  // scrivere una funzione che permetta di stampare
  // l'elenco di informazioni delle fatture registrate
  public void print (){

    for(int i=0; i<fatture.size(); i++){
      System.out.println(fatture.get(i));
    }
    
  }

  @Override
  public String toString(){

    // creo una stringa vuota
    String str = "";

    // scorro l'elenco di tutte le stringhe
    for (int i = 0; i < fatture.size(); i++){
      // per ogni fattura, aggiungo alla stringa totale
      // la conversione a stringa della relativa fattura
      str = str + fatture.get(i).toString() + "\n";
    }
    
    return str;
  }

  // scrivere una funzione che restituisce
  // l'importo totale delle fatture
  public float totale(){
    // totale delle fatture
    float tot = 0;

    // scorro tutte le fatture
    for(int i = 0; i < fatture.size(); i++){
      // recupero ogni importo e lo sommo al totale
      tot = tot + fatture.get(i).getImporto();
    }
    
    return tot;
  }

  // lista delle fatture di un determinato cliente
  public Vector<Fattura> recuperaFatture(Cliente cliente){

    // vettore che contiene l'elenco di tutte le fatture
    // che sono state trovate per un determinato cliente
    Vector<Fattura> risultato = new Vector<Fattura>();

    // guardare uno ad una le fatture
    for(int i=0; i<fatture.size(); i++){
      
      // controlli il codice per vedere se è uguale a quello del cliente
      //if(fatture.get(i).getCliente().getCodice() == cliente.getCodice()){
      if(fatture.get(i).getCliente().equals(cliente)){
        // lo metto da parte
        risultato.add(fatture.get(i));
      }
      
    }

    // restituisco l'elenco delle fatture messe da parte
    return risultato;
  }

  // polimorfismo per il recupero delle fatture dal codice del cliente
  public Vector<Fattura> recuperaFatture(int codice){
    Cliente c = new Cliente(codice);
    Vector<Fattura> risultato = recuperaFatture(c);
    return risultato;
  }

  // fa la stessa di recupareFatture, ma stampa
  public void stampaFatture(Cliente cliente){
    Vector<Fattura> risultato = recuperaFatture(cliente);

    for(int i = 0; i < risultato.size(); i++){
      System.out.println(risultato.get(i));
    }
  }

  // funzione che restituisce l'elenco dei clienti
  public Vector<Cliente> getClienti(){
    Vector<Cliente> risultato = new Vector<Cliente>();
    
    // guardo tutte le fatture
    for(int i=0; i<fatture.size(); i++){
 
      // verifico che il cliente non sia già nell'elenco
      // -1 vuol dire che l'elemento non è contenuto
      if(risultato.indexOf( fatture.get(i).getCliente() ) == -1 ){
        
        // lo mettiamo nell'elenco
        risultato.add(fatture.get(i).getCliente());
      }

    }
    
    // restituisco l'elenco
    return risultato;
  }

  // funzione che stampa a schermo i clienti presenti nell'archivio
  public void stampaClienti(){
    Vector<Cliente> risultato = getClienti();
    
    for(int i=0; i<risultato.size(); i++){
      System.out.println(risultato.get(i));
    }
    
  }
  
}

