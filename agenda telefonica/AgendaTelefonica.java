public class AgendaTelefonica{
  private String[] nome;
  private String[] cognome;
  private String[] numTel;
  private int counter=0;

  // costrutore di default
  public AgendaTelefonica(){
    this.nome    = new String[10];
    this.cognome = new String[10];
    this.numTel  = new String[10];
  }

  // costruttore con il parametro
  public AgendaTelefonica(int dim){
    this.nome    = new String[dim];
    this.cognome = new String[dim];
    this.numTel  = new String[dim];
  }
  
  public String[] getNome(){
    return nome;
  }
  
  public String[] getCognome(){
    return cognome;
  }

  public String[] getNumTel(){
    return numTel;
  }

  public void setNome(String[] nome){
    this.nome = nome;
  }
  
  public void setCognome(String[] cognome){
    this.cognome = cognome;
  }

  public void setNumTel(String[] numTel){
    this.numTel = numTel;
  }

  public boolean inserisci(String n, String c, String t){
  
    // se l'agenda non e' piena -> se ci sono cassetti liberi
    if(counter < nome.length){
    
      // inserisce nome cognome e numero di telefono nella prima cella       libera
      nome[counter]    = n; 
      cognome[counter] = c;
      numTel[counter]  = t;

      // incrementiamo il contatore
      counter++;
      
      // restituisco true
      return true;
    }
    
    // altrimenti
    else {
      // restituisco false
      return false;
    }
    
  }

  public String trova (String n, String c){

    // per ogni utente in rubrica
    for(int i = 0; i<nome.length; i++){
    
      // se il il nome e cognome e' uguale a quello che cerco
      if(nome[i] == n && cognome[i] == c){
        // ritorno numTel
        return numTel[i];
      }
      
    }
    
    // ... <- se arrivo qua significa che non l'ho trovato
    // restituisco null
    return null;
  }

  public void listaUtenze(){
    System.out.println("Lista utenti:");
    
    // per ogni utente in rubrica (0...counter)
    for(int i = 0; i<counter; i++){
      // stampare informazione a schermoou
      System.out.println("- " + nome[i] + " "+ cognome[i] + " " + numTel[i]);
    }
  }
}