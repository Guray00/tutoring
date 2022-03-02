import java.util.Scanner;

public class doppio {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n;

		System.out.println("Inserisci un numero: ");
		n = input.nextInt();
	
		System.out.println("Il suo doppio è " + (2*n));
	}
}