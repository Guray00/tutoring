import java.util.*;
import java.io.*;


public class es{

  public static int somma(Vector<Integer> v){
    int som = 0;
    for(int i=0; i<v.size(); i++){
        som = som + v.get(i) ;
    }
    return som;
  }

	public static void main(String[] args){

    // questa serve per fare input
    InputStreamReader input = new InputStreamReader(System.in);
    BufferedReader tastiera = new BufferedReader(input);

    try {
      Vector<Integer> v= new Vector<Integer>();
      int dim, num, som;
      
      System.out.print("Quanti elementi nel vettore: ");
      dim = Integer.parseInt(tastiera.readLine());
      
      for(int i=0; i<dim; i++){
        System.out.println("Inserisci un numero: ");
        num = Integer.parseInt(tastiera.readLine());
        v.addElement(num);
      }
      
      som = somma(v);
      System.out.println("il risultato della somma è " + som);
    }

    catch(Exception e){
      System.out.println(e); 
    }
    
	}
}