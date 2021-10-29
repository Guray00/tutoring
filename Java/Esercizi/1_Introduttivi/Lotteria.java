import java.util.Scanner;
import java.util.Random;


/*
	scrivere un programma dotato di menu che consente l'estrazione, io gioco 
	e l'uscita per simulare una lotteria.

	1) estrazione: estrae casualmente 6 numeri
	2) gioca:      scrivi sei numeri confrontati con l'estrazione
	3) esci: 			 esce dal programma

*/


public class Lotteria {


	public static void main(String[] args) {

		// per fare richiesta di input
		Scanner scanner = new Scanner(System.in);
		System.out.println("Scegliere una delle seguenti opzioni: ");
		System.out.println("1) estrazione: estrae casualmente 6 numeri");
		System.out.println("2) gioca: scrivi sei numeri confrontati con l'estrazione");
		System.out.println("3) esci: esce dal programma");


		int[] estratti = new int[6]; 

		// continua all'infinito
		while(true){
			System.out.print("\n\nSeleziona: ");
			int scelta = scanner.nextInt();
			
			switch(scelta){
				
				// caso di estrazione
				case 1:

					System.out.println("Hai selezionato la scelta 1 e ho generato 6 numeri casuali");
					Random random = new Random();
					
					System.out.print("[ ");
					for(int i=0; i < 6; i++){
						estratti[i] = random.nextInt(100) + 1;
						System.out.print(estratti[i]+" ");
					}

					System.out.print("]");
					break; // serve a interrompere il case, sennò proseguirebbe!	
			
				case 2:
          if(estratti[0] == 0) {
						System.out.println("Devi prima estrarre!");
						break;
					}

					int[] numerigiocati = new int[6];

					System.out.print("Inserisci 6 numeri: ");
          for(int i=0; i<6; i++){
            numerigiocati[i] = scanner.nextInt(); 
          }
          
					// controllare se i giocati sono uguali a quelli estratti	
					int conta = 0;
					for(int i=0; i<6; i++){
						if( numerigiocati[i] == estratti[i] ){
							conta++;
						}
					}
					
					if(conta == 6){
						System.out.println("Hai vinto! Complimenti!");
						return;
					}

					else{
						System.out.println("Mi dispiace, hai sbagliato...");
					}

					break;
					

				// caso di uscita
				case 3:
        	return;
			
			}
		}	
	}
}