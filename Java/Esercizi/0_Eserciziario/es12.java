import java.util.Scanner;

// Scrivere l'algoritmo che, letto in input un valore numerico, dica se è positivo o negativo.

class es12 {

	public static void main(String[] args) {
		
		// prendo in input un valore numerico
    Scanner scanner = new Scanner(System.in); 
		int num1 = scanner.nextInt();

		// valuto il suo valore
    if(num1 > 0){
      System.out.println("numero positivo");
    }
		
    else if(num1 == 0){
      System.out.println("Hai inserito lo zero");
    }
  
		
    else{
			System.out.println("numero negativo");
		}

		// restituisco la risposta
		
	}
	

}

