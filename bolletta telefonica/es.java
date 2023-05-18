import java.io.*;

public class es{

	public static void main(String[] args){

    // necessario per fare input
    InputStreamReader input = new InputStreamReader(System.in);
    BufferedReader tastiera = new BufferedReader(input);

    try {

      // chiedere quante chiamate ha effettuato
      System.out.print("Quante telefonate hai effettuato? ");

      // prendo in input il valore
      int x;
      float s;
      
      x = Integer.parseInt(tastiera.readLine());
      
      // se le chiamate sono meno di 80
      if(x<=80){
        s = 5.0f;
      }

      // se le chiamate sono tra 80 e 140
      else if(x <= 140 && x > 80){
        s = 5.0f + 0.10f * (x-80);
      }

      // più di 140 chiamate
      else{
        s = 5.0f  + 0.10f*(60) + 0.07f * (x-140); 
      }
      
      System.out.println(s);
    }

    catch(Exception e){
      System.out.println(e); 
    }
    
	}
}