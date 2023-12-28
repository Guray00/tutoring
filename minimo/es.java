import java.util.Scanner;

public class es{

	public static void main(String[] args){

    // creiamo lo scanner per l'input
    Scanner scanner = new Scanner(System.in);

    // mostri a schermo di inserire un primo numero
    System.out.println("Inserisci il primo numero");
    
    // faccio inserire il numero1
    int numero1 = scanner.nextInt();
    
    // mostri a schermo di inserire un  secondo numero
    System.out.println("Inserisci il secondo numero");
    
    // faccio inserire il numero2
    int numero2 = scanner.nextInt();
    
    // se numero1 è più piccolo di numero2
    if (numero1 < numero2){
      // stampa a schermo numero1
      System.out.println("Il valore minimo è " + numero1);
    } 
    // in tutti gli altri casi
    else {
      // stampa a schermo numero2
      System.out.println("Il valore minimo è " + numero2);
    }
	}
}