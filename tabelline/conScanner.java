// soluzione con scanner

public class conScanner{

	public static void main(String[] args){

    Scanner input = new Scanner(System.in);

		// chiediamo all'utente di inserire il numero
    System.out.println("Inserisci un numero: ");

    // lo facciamo inserire
    int numero = input.nextInt();

    /*
      Facciamo un ciclo: 
        > e' determinato o no? Si!

      - partenza: 1
      - arrivo: 10
      - passo: 1 alla volta
    */

    for(int counter = 1; counter<=10; counter++){
      
      // calcolare il risultato, risultato = numero * counter
      int risultato = numero * counter;
      
      // Stampo: numero + " * " + counter + " = " + risultato
      System.out.println(numero + " * " + counter + " = "+ risultato);
    }

       
	}
}