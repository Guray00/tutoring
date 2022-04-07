import java.io.*;  

public class es{

	public static void main(String[] args){

    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    
    // qua dentro facciamo il programma
    try {

      // dichiaro le variabili
      int numero, doppio;
      
      //chiedo il valore del numero
      System.out.print("Inserisci un numero: ");

      // chiedo il numero in input
      String str_appo=input.readLine();

      // lo converto
      numero=Integer.parseInt(str_appo);
      
      //calcolo il doppio
      doppio=numero*2;

      // mostro a schermo il risultato
      System.out.print("Il risultato è:" +doppio);
    }

    catch(Exception exc){
      System.out.println("Errore...");
    }

	}
}