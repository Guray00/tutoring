import java.util.Scanner;

public class es{

	public static void main(String[] args){
    
    Scanner input=new Scanner(System.in);

    System.out.print("Quanti numeri vuoi inserire? ");
    int n = input.nextInt();
    int conta=0;
    
    for(int i=0; i<n; i++){
      System.out.print("Inserisci numero: ");
      int numero = input.nextInt();

      // se il numero è contemporanamente
      // dispari e positivo
      if(numero>0 && numero%2==1){
        conta++;
      }
    }
	System.out.print("I numeri positivi e dispari contati sono "+conta);
  }
}