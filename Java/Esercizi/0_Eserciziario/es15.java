import java.util.Scanner;

// Scrivere un algoritmo che, dato un numero intero in input, visualizza il suo doppio se è pari, il triplo se è dispari.

class es15 {

	public static void main(String[] args) {
		
		// creo un nuovo scanner per chiedere un numero intero
		Scanner tastiera = new Scanner(System.in);
		
		// chiedo il numero a schermo
    System.out.println("inserisci un numero intero");
    int num1 = tastiera.nextInt();

		// verifico se è pari
    if((num1 % 2) ==0){
			// se è pari...
			System.out.println("mostro il suo doppio: " + (num1*2));
		}

    else{
			// se è dispari...
      System.out.println("mostro il numero triplicato: " + (num1*3));
    }
		

	}

}

