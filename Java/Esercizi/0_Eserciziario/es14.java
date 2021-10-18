import java.util.Scanner;

// Scrivere un algoritmo che, letti in input due numeri interi, verifichi se il primo è multiplo del secondo.

class es14 {

	public static void main(String[] args) {
		
		// creo un nuovo scanner per chiedere un numero intero
		Scanner tastiera = new Scanner(System.in);

		System.out.println("Inserisci il primo numero: ");
    int primonum = tastiera.nextInt();
		
		System.out.println("Inserisci il secondo numero: ");
    int secondonum = tastiera.nextInt();

    if((primonum % secondonum) == 0){
      System.out.println("primo numero e' multiplo del secondo");
    }
		
    else{
      System.out.println("il primo numero non e' multiplo del secondo");
    }

	}

}

