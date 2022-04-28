import java.util.Scanner;

public class es{

	public static void main(String[] args){
    Scanner input=new Scanner(System.in);

    System.out.print("Inserisci la base: ");
    int b = input.nextInt();

    System.out.print("Inserisci l'esponente: ");
    int e = input.nextInt();


    /*
    2^3:
      1*2 => 2
      2*2 => 4
      4*2 => 8
    */
  
    int p = 1;
    for(int i=0; i<e; i++){
      p = b*p;
    }
    
	  System.out.print("La potenza è: "+p);
  }
}