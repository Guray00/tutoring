import java.util.Scanner;


// ESERCIZIO INCOMPLETO 

public class es1 {

	// lo scopo di questa funzione è riuscire a stampare il tabellone
	
	public static void stampaMatrice(char tabellone[][]){
		for (int i = 0; i < 3; i++) {
				
				System.out.print('|');
				for (int j = 0; j < 3; j++) {
					System.out.print(tabellone[i][j] + "|");
				}
		
				System.out.println("\n");
		}	
	}

	public static void main(String[] args) {
		char croce   = 'X';
		char cerchio = 'O';

		// boolean vincita X;
		// boolean vincita O;
		char tabellone[][] = new char[3][3];

		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				tabellone[i][j] = ' ';

		Scanner tastiera = new Scanner(System.in);

		for (int k = 0; k < 5; k++) {

			System.out.println("turno giocatore croce");
			System.out.println(" digitare posizione colonna seguita da spazio e posizione riga (parte da 0)");

			int colonna = tastiera.nextInt();
			int riga = tastiera.nextInt();

			tabellone[riga][colonna] = croce;

			stampaMatrice(tabellone);

			if (k == 4) return;

			System.out.println("turno giocatore cerchio");
			System.out.println(" digitare posizione colonna seguita da spazio e posizione riga (parte da 0)");

			colonna = tastiera.nextInt();
			riga = tastiera.nextInt();

			tabellone[riga][colonna] = cerchio;

			stampaMatrice(tabellone);
		}

	}

}
