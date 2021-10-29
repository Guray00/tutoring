import java.util.Scanner;


class howToScanner {
	public static void main(String[] args){
		Scanner lettore = new Scanner(System.in);

		System.out.println("Scrivi un numero: ");
		int n = lettore.nextInt();

		System.out.println("Adesso scrivi una parola");
		String s = lettore.nextLine();

		System.out.println("Hai salvato come numero " + numero + " mentre come stringa " + s);		
	}
}