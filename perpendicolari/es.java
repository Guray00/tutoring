import java.io.*;

public class es{

	public static void main(String[] args){

    // questa serve per fare input
    InputStreamReader input = new InputStreamReader(System.in);
    BufferedReader tastiera = new BufferedReader(input);

    try {
      float m1, m2;
      System.out.println("Inserisci il coefficiente angolare m1: ");
      m1 = Float.parseFloat(tastiera.readLine());

      // prendo in input il secondo coefficiente angolare
      System.out.print("m2: ");
      m2 = Float.parseFloat(tastiera.readLine());

      // -1 nel caso in cui sono perpendicolari
      if(m1*m2 == -1){
        System.out.println("Le rette sono perpendicolari");
      }
        
      else{
        System.out.println("Le rette non sono perpendicolari");
      }

    }

    catch(Exception e){
      System.out.println(e); 
    }
    
	}
}