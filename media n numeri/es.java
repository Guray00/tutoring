import java.io.*;


public class es{

	public static void main(String[] args){

    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

    try {

      // prendiamo quanti numeri vogliamo chiedere all'utente
      String str_appo;
      int n;

      System.out.print("Quanti numeri vuoi inserire? ");
      str_appo = input.readLine();

      n = Integer.parseInt(str_appo);

      // 1 2 3 4 5
      /*
        0 + 1 => 1
                 1 + 2 => 3
                          3 + 3 => 6 
                                   6 + 4 = 10
                                           10 + 5  = 15 
      */

      // faccio una scatola che mi permette di ricordare 
      //la somma di tutti i numeri
      float somma = 0;
      
      // chiediamo n numeri all'utente
      for(int i=0; i < n; i++){
        System.out.println("Inserisci un numero:");
        str_appo=input.readLine();

        int numero=Integer.parseInt(str_appo);
        somma = somma + numero;
      }

      // sta facendo la divisione tra interi dimenticandosi la 
      // virgola!!!!!!!!!!

      // 19.0 / 5 => 3.8 => 3.0
      float media = somma / n;
      System.out.println("La media di n numeri vale: "+ media);
      // media = somma / n
      
    }

    catch(Exception exc){
      System.out.println("Errore...");
    }
	}
}