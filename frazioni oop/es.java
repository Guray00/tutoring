public class es {

  public static void main(String[] args) {

    Frazione f1 = new Frazione(2, 3);
    Frazione f2 = new Frazione(1, 3);

    Frazione f3 = new Frazione(4, 6);
    Frazione f4 = new Frazione(4, 5);
    
    System.out.println(f1);
    System.out.println(f2);
    System.out.println(f1 + " + " + f2 + " = " + f1.somma(f2));
    System.out.println(f1 + " * " + f2 + " = " + f1.prodotto(f2));

    System.out.println("\n-------------------\n");
    
    System.out.println(f3);
    System.out.println(f4);
    System.out.println(f3 + " + " + f4 + " = " + f4.somma(f3));
    System.out.println(f3 + " * " + f4 + " = " + f4.prodotto(f3));
    
    System.out.println("\n-------------------\n");
    System.out.println(f1 + " == " + f2 + ": " + f1.compareTo(f2));
    System.out.println(f3 + " == " + f4 + ": " + f3.compareTo(f4));
    System.out.println(f1 + " == " + f3 + ": " + f1.compareTo(f3));
  }
}
