import java.io.*;

public class es{

	public static void main(String[] args){

    // questa roba serve per fare input
    InputStreamReader input = new InputStreamReader(System.in);
    BufferedReader tastiera = new BufferedReader(input);

    try {

      int x;
        
      System.out.println("Inserisci il numero: ");
        
      x = Integer.parseInt(tastiera.readLine());
      
      // se il numero è pari
      if(x%2==0){
        int s;
        s = x * 2;
        System.out.println(s);
      }
        
      else{
        int s;
        s = x *3;
        System.out.println(s);
      }
      
    }

    catch(Exception e){
      System.out.println("Ciao ho trovato un errore: "+ e); 
    }
    
	}
}