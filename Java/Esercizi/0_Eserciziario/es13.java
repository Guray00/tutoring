import java.util.Scanner;

// Scrivere l'algoritmo che, letto in input un numero intero, dica se è pari o dispari.

class es13 {

	public static void main(String[] args) {
		
		// creo un nuovo scanner per chiedere un numero intero
		Scanner tastiera = new Scanner(System.in);

		// chiedo allo scanner un numero casuale intero
    int inp = tastiera.nextInt();

    if((inp % 2) == 0){
      System.out.println("numero pari");
    }
    else{
      System.out.println("numero dispari");
    }

	}

}

