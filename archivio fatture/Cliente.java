/*
- codice
- denominazione
- partita iva (piva)
- indirizzo
*/

public class Cliente{
  private int codice;
  private String denominazione;
  private String piva;
  private String indirizzo;

  // costruttore di default
  public Cliente(){
    codice = -1;
    denominazione = "";
    piva = "";
    indirizzo = "";
  }
  public Cliente(int codice, String denominazione, String piva, String indirizzo){
    this.codice = codice;
    this.denominazione = denominazione;
    this.piva = piva;
    this.indirizzo = indirizzo;
  }

  // costruttore utile per l'implementazione del
  // polimorfismo del recuperaFatture di archivio
  public Cliente(int codice){
    this.codice = codice;
    denominazione = "";
    piva = "";
    indirizzo = "";
  }

  public int getCodice(){
    return codice;
  }
  public void setCodice(int codice){
    this.codice = codice;
  }
    
  public String getDenominazione(){
    return denominazione;
  }
  public void setDenominazione(String denominazione){
    this.denominazione = denominazione;
  }
  
  public String getPiva(){
    return this.piva;
  }
  public void setPiva(String piva){
    this.piva = piva;
  }
    
  public String getIndirizzo(){
    return this.indirizzo;
  }
  public void setIndirizzo(String indirizzo){
    this.indirizzo = indirizzo;
  }

  @Override
  public String toString(){
    return "["+codice+"] "+ denominazione+ ", piva: "+ piva +", indirizzo: "+indirizzo;
  }

  // insegnamo al java come capire se due clienti sono uguali
  public boolean equals(Cliente o){
    
    // per dire se sono uguali analizziamo il codice
    if(this.codice == o.getCodice()){
      return true;
    }

    return false;
  }
  
}

