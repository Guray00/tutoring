import java.util.Scanner;
import java.util.Random;
//><

class randomExample {

	public static void main(String[] args) {
		
		// crei un oggetto che genera numeri casuali
		Random Dado     = new Random();

		// restituiscimi un intero casuale
		int RandomValue = Dado.nextInt();

		// lo mostro a schermo
		System.out.println(RandomValue);
	}
	

}

