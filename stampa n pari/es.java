import java.util.Scanner;

public class es{

	public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);

    // invitiamo a schermo a scrivere un numero
    System.out.print("Inserire un numero: ");
    
    // facciamo inserire il numero
    int N = scanner.nextInt();

    // per ogni numero da n fino a 1
    for (int i = N-1; i >= 2; i--){
      // se il numero è pari
      if (i%2 == 0){
        // lo stampo
        System.out.print(i+" ");
      }
    }
  }
}