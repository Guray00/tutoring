public class Triangolo {
  private int l1;
  private int l2;
  private int l3;

  // costruttore di default
  public Triangolo(){
    l1 = 0;
    l2 = 0;
    l3 = 0;
  }

  public Triangolo(int l1, int l2, int l3){
    this.l1 = l1;
    this.l2 = l2;
    this.l3 = l3;
  }

  public int getL1() {return l1;}
  public int getL2() {return l2;}
  public int getL3() {return l3;}

  @Override
  public String toString(){
    return "Lato1: " + l1 + " | Lat2: " + l2 + " | Lato3: " + l3+"\n";
  }
  
}