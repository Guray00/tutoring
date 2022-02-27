/*
calcolare area e circonferenza cerchio dato il raggio

*/


class Cerchio {
  private double raggio;

  // costruttore
  public Cerchio(double raggio){
    this.raggio = raggio;
  }  

  public void stampaCaratteristiche(){
    System.out.println("Il raggio del cerchio e': "+raggio);
  }

  // calcoliamo l'area
  public double calcolaArea (){
    return raggio*raggio*3.14; 
  }

  public double calcolaCirconferenza(){
    return 2*3.14*raggio;
  }
  
  // metodo set
  public void setRaggio(double r){
    this.raggio = r;
  }

  // metodo get
  public double getRaggio(){
    return this.raggio;
  }

  
}