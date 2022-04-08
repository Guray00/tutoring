import java.io.*;  

public class es{

	public static void main(String[] args){

    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    
    // qua dentro facciamo il programma
    try {

      String str_appo;
      char carattere;
      int valore;
      
      System.out.print("Inserisci un carattere: ");
      str_appo = input.readLine();

      
      carattere = str_appo.charAt(0);
      valore = (int) carattere;

      System.out.println("Il carattere "+ carattere + " vale "+ valore);
      
    }

    catch(Exception exc){
      System.out.println("Errore...");
    }

	}
}