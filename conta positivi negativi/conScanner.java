import java.util.Scanner;

public class conScanner{

	public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);

    // scatolina che salva il numero di positivi = 0
    int positivi = 0;
    
    // scatolina che salva il numero di negativi = 0
    int negativi = 0; 
    
    // scatolina che salva il numero di nulli = 0
    int nulli = 0;

    // Chiedo all'utente di inserire il valore di N
    System.out.println("Inserisci il valore di N: ");  

    // faccio inserire il valore di N
    int N = scanner.nextInt();

    // per ogni valore fino ad N
    for (int i = 0; i < N; i++) {

      // faccio inserire un numero
      System.out.print("Inserisci un numero: ");
      int numero = scanner.nextInt();

      // controllo se il numero è positivo
      if (numero > 0) {
        // mi alzi un dito ai positivi (aggiungo 1 a quello che avevo)
        positivi = positivi + 1;
      } else if (numero < 0) {
        // mi alzi un dito ai negativi (aggiungo 1 a quello che avevo)
        negativi = negativi + 1;
      } else {  // in tutti gli altri casi
        // mi alzi un dito ai nulli (aggiungo 1 a quello che avevo)
        nulli = nulli + 1;
      }
    }

    System.out.println();
    System.out.println("Sono stati inseriti " + positivi + " numeri positivi");
    System.out.println("Sono stati inseriti " + negativi + " numeri negativi");
    System.out.println("Sono stati inseriti " + nulli + " numeri nulli");
    
	}
}