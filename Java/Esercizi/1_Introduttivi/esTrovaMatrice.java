import java.util.Scanner;

// data una matrice, contare quante volte un numero inserito dall'utente compare
public class esTrovaMatrice {	

	public static void main(String[] args) {

		int matrice [][] = {	{1, 2, 3}, 
													{4, 5, 6}, 
													{6, 6, 6}
											 };

		// System.out.println();

		// chiedere in input un numero
    System.out.println("inserisci un numero");
    Scanner scanner = new Scanner(System.in);
    int num1 = scanner.nextInt();
    int count = 0;

		// verificare quante volte il numero compare nella matrice
    for (int i=0;i<3;i++){
      for (int j=0;j<3;j++){
				if (num1 == matrice[i][j]){
					count++;
      	}
    	}
		}

 		System.out.println("abbiamo trovato il numero " + count + " volte");
	}
}
