import java.io.*;  

public class es{

	public static void main(String[] args){

    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    
    // qua dentro facciamo il programma
    try {

      // creiamo le variabili
      int minuti, ore, secondi;

      // chiediamo all'utente di inserire il numero di ore
      System.out.println("Inserire ore");

      // prendo in input le ore (come stringa)
      String str_appo=input.readLine();
      ore=Integer.parseInt(str_appo);

      // chiediamo di inserire i minuti
      System.out.println ("Inserire minuti");

      // prendo in input il numero come stringa
      str_appo=input.readLine();

      // convferto il numero in int
      minuti=Integer.parseInt(str_appo);

      // chiedo di inserire i secondi
      System.out.println("Inserire secondi");

      str_appo=input.readLine();
      secondi=Integer.parseInt(str_appo);

      secondi=secondi+60*minuti+ore*3600;

      System.out.println("Abbiamo in totale in secondi: "+secondi);
      
      }

    catch(Exception exc){
      System.out.println("Errore...");
    }

	}
}