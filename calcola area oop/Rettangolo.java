public class Rettangolo {
  private double base;
  private double altezza;
  
  // costruttore di default (senza parametri)
  public Rettangolo(){
    this.base = 0.0;
    this.altezza = 0.0;
  }

  // costruttore di default (con parametri)
  public Rettangolo(double base, double altezza){
    this.base = base;
    this.altezza = altezza;
  }

  public double getBase(){
    return base;
  }
  
  public void setBase(double new_base){
    this.base = new_base;
  }

  public double getAltezza(){
    return altezza;
  }
  
  public void setAltezza(double new_altezza){
    altezza = new_altezza;
  }
  
  public double calcolaArea(){
    double area = base*altezza;
    return area;
  }

  // funzione che permette di stampare le informazioni di un rettangolo
  public String toString(){
    return "altezza: " + altezza + " base: " + base + " area: " + calcolaArea();
  }

  
}