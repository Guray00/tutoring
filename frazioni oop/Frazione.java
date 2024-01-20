public class Frazione {
  private int numeratore;
  private int denominatore;

  public Frazione(int numeratore, int denominatore) {
    this.numeratore = numeratore;
    this.denominatore = denominatore;
  }

  public int getNum() {return numeratore;}
  public int getDen() {return denominatore;}

  public String toString() {
    return numeratore+"/"+denominatore;
  }

  // ⁠somma(Frazione f) che fa la somma della frazione con quella ricevuta come parametro e ritorna una nuova frazione somma
  public Frazione somma(Frazione f){
    // 2/3 + 4/5           |   2/3  + 1/3
    int new_denominatore;
    int new_numeratore;
    
    if(this.denominatore == f.getDen()){
      new_denominatore = this.denominatore;
      new_numeratore = this.numeratore + f.getNum();
    } 
    else{
      new_denominatore = this.denominatore * f.getDen();
      new_numeratore = (new_denominatore / denominatore) * numeratore + (new_denominatore / f.getDen() ) * f.getNum();
    }

    // creiamo la nuova
    Frazione s = new Frazione(new_numeratore, new_denominatore);
    s.riduci();
    return s;
  }

  //-⁠ ⁠prodotto(Frazione f), come il caso precedente ma calcola il prodotto
  public Frazione prodotto(Frazione f){
    int new_denominatore = this.denominatore * f.getDen();
    int new_numeratore   = this.numeratore   * f.getNum();

    Frazione p = new Frazione(new_numeratore, new_denominatore);
    p.riduci();
    return p;
  }
  
  public int compareTo(Frazione f){
    double f1 = (double) this.numeratore / this.denominatore;
    double f2 = (double) f.getNum()      / f.getDen();

    // controllo se sono uguali
    if(f1==f2){
      return 0;
    } else if(f1>f2){
      return 1;
    } else{
      return -1;
    }
  }

  public void riduci(){
    int min;
    
    // troviamo il minimo
    if (numeratore < denominatore){
      min = numeratore;
    } else {
      min = denominatore;
    }

    int mcd = 1;
    
    // per ogni numero che va da 1 a min
    for(int i = 1; i <= min; i++){
      // se entrambi il num e denom non danno resto
      if(numeratore%i == 0 && denominatore%i == 0){
        mcd = i;
      }  
    }

    numeratore = numeratore / mcd;
    denominatore = denominatore / mcd;
  }
  
}