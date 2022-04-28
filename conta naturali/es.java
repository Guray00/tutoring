import java.util.Scanner;

public class es{

	public static void main(String[] args){

    // crea l'oggetto che ti permette di fare input
		Scanner scanner = new Scanner(System.in);

    // chiediamo quanti numeri vuole inserire
    System.out.print("Quanti numeri vuoi inserire? ");
    int n = scanner.nextInt();

    // variabile che serve a contare quanti 
    // numeri sono naturali
    int conta = 0;

    // 4 => 0 1 2 3
    for(int i=0; i < n; i++){
      System.out.print("Inserire un numero: ");
      int numero = scanner.nextInt();
      
      if(numero>=0){
        // voglio contare il numero

        // conta = conta + 1;
        conta++;
      }
    }

    System.out.println("Ho contato " + conta + " numeri.");
	}
}