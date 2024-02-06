public class Rettangolo{
  /*ATTRIBUTI*/
  private double base;
  private double altezza;

  /*COSTRUTTORI*/

  // costruttore di default (senza parametri)
  public Rettangolo(){
    altezza = 0;
    base = 0;
  }

  // costruttore con parametri
  public Rettangolo(double base, double altezza){
    this.base = base;
    this.altezza = altezza;
  }


  // getter e setter
  public void setBase(double b)   { base = b;    }
  public void setAltezza(double a){ altezza = a; }
  
  public double getBase()      { return this.base;    }
  public double getAltezza()   { return this.altezza; }

  // metodi
  public double getArea(){
    return base*altezza;
  }
  

}