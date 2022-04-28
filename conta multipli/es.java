import java.util.Scanner;

public class es{

	public static void main(String[] args){

    // oggetto per chiedere input
    Scanner input = new Scanner(System.in);

    // quanti numeri vuoi inserire?
    System.out.print("Quanti numeri vuoi inserire? ");
    int n = input.nextInt();
    
    // quanto vale A?
    System.out.print("Di quale numero vuoi trovare i multipli?");
    int a = input.nextInt();
   
      
    int conta=0;
    // per ogni numero inserito
    for(int i=0; i<n; i++){

      // inseriamo il numero
      System.out.print("Inserisci numero: ");
      int numero = input.nextInt();
      
      // controllo se è multiplo di A
      if(numero%a==0){
        conta++;    
      }
      
    }
    
    System.out.println("I multipli di "+a+" sono: "+conta);
	}
}