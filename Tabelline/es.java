import java.io.*;

public class es{

	public static void main(String[] args){

    // "oggetto" che consente di chiedere input all'utente
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

    try {
      String str_appo;
      int numero;
      
      System.out.println("Quale tabellina vorrestri mostrare?");
      str_appo = input.readLine();

      // voglio convertire la parola in numero
      numero   = Integer.parseInt(str_appo); 

      // operazione ripetuta di stampa
      for(int i=1; i<=10; i++)
        {
          //5 * 10  =  50
          int prodotto = numero * i;
          System.out.println(numero + " * " + i+ " = " + prodotto);  
        }
    }
      
    catch(Exception exc){
      System.out.println("Errore...");
    }
	}
}