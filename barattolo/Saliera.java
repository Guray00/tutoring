public class Saliera extends Barattolo {
  private int fori;

  public Saliera(){
    super();
    this.fori = 1;
  }
  
  public Saliera(int fori, int volume, int quantita){
    super(volume, quantita);
    this.fori = fori;
  }
  
  public int getFori(){
    return fori;
  }
  
  public void setFori(int fori){
    this.fori = fori;
  }

  public void usa(){
    // per ogni foro presente
    for(int i=0; i<fori; i++){
      // uso un'unità
      super.usa();
    }
  }
}