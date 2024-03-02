public class Barattolo{
  private int volume;
  private int quantita;

  // costruttore
  public Barattolo(){
    this.volume = 0;
    this.quantita = 0;
  }

  // parametrizzato
  public Barattolo(int volume, int quantita){
    this.volume = volume;
    this.quantita = quantita;
  }

  public int getVolume(){
    return volume;
  }
  
  public void setVolume(int volume){
     this.volume = volume;
  }
  
  public int getQuantita(){
    return quantita;
  }
  
  public void setQuantita(){
    this.quantita = quantita;
  }

  // funzione che inserisce n nel barattolo
  public void inserisci(int n){
    // se la quantita' + quanto voglio mettere > volume 
    if( (quantita + n) > volume){
      // segno che e' pieno
      quantita = volume;
    }
    // altrimenti
    else{
      // sommo la quantita' da inserire
      quantita += n;
    }
  }
  
  public void usa(){
    if(quantita >= 1){
      quantita -= 1;
    }
  }
  
}