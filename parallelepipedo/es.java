import java.util.Scanner;

public class es{

  public static void main(String[] args) {
    Scanner in = new Scanner (System.in);
    double base, altezza;
    
    System.out.println("inserisci la base: ");
    base = in.nextDouble();
    
    System.out.println("inserisci l'altezza: ");
    altezza = in.nextDouble();
    
    Rettangolo rettangolo = new Rettangolo(base, altezza);
    System.out.println("Area del rettangolo: " +rettangolo.getArea());
    
    System.out.println("inserisci base, altezza eprofondità");
    Parallelepipedo parallelepipedo = new Parallelepipedo(in.nextDouble(), in.nextDouble(),
    in.nextDouble());
    
    System.out.println("Area del parallelepipedo:" + parallelepipedo.getArea());
    System.out.println("Volume del parallelepipedo: " + parallelepipedo.getVolume());
    
  }
}