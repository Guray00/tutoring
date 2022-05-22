import java.util.Scanner;

public class es{
	public static void main(String[] args){

    // creare un oggetto scanner, in modo da chiedere l'input
    Scanner input = new Scanner(System.in);

    // Chiediamo all'utente di inserire un numero n
    System.out.print("inserisci un numero: ");

    // facciamo inserire all'utente il numero
    int N = input.nextInt();

    /*
      vogliamo mostrare a schermo in modo decrescente
      i numeri da N a 2

      sabbiamo quante volte vogliamo farlo? (o inizio e fine?)
      - partenza: N
      - arrivo: 2
      - passo: "vado indietro di 1"
    */

    for(int i=N;i>=2;i--){

      // vogliamo controllare se il numero è pari

      if((i%2)==0){
        System.out.print(i+" ");
      }
        // stampiamo a schermo il numero
      
    }
   
	}
}