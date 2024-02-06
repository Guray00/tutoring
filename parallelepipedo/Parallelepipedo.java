public class Parallelepipedo extends Rettangolo {
  /*ATTRIBUTI*/
  private double larghezza;

  /*COSTRUTTORI*/
  public Parallelepipedo(){
    super();
    larghezza = 0;
  }
  public Parallelepipedo(double base, double altezza, double larghezza){
    super(base, altezza);
    this.larghezza = larghezza;
  }
  
  /*METODI*/
  public double getVolume(){
    return super.getArea()*larghezza;
  }
}