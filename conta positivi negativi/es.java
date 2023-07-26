import java.io.*;

public class es{

   public static void main(String[] args){

    // questa serve per fare input
    InputStreamReader input = new InputStreamReader(System.in);
    BufferedReader tastiera = new BufferedReader(input);

    try {
      int n, x, pos=0, neg=0, zero=0;

      // chiedo di inserire la quantità di numeri
      System.out.print("Quanti numeri vuoi inserire? ");
      n=Integer.parseInt(tastiera.readLine());

      // per n volte
      for(int i=1; i <= n; i++){
        // prendiamo in input il valore
        System.out.print("Numero " + i + ": ");
        x=Integer.parseInt(tastiera.readLine());

        // se è positivo
        if(x>0){
          pos++;
        }

        //altrimenti se è negativo
        else if(x<0){
          neg++;
        }
        else {
          zero++;
        }
      }

      // ora che abbiamo il conteggio effettivo dei numeri
      System.out.println("\nNumeri positivi: "+pos);
      System.out.println("Numeri negativi: "+neg);
      System.out.println("Numeri nulli: "+zero);
    }

    catch(Exception e){
      System.out.println(e); 
    }
    
	}
}