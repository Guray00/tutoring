import java.util.ArrayList;
import java.util.Random;
  
public class es{

	public static void main(String[] args){

    // creare lista vuota
    ArrayList<Integer> lista = new ArrayList<Integer>();
    Random rand = new Random();

    // generare 20 numeri casuali
    for(int i=0;i<20;i++){
      int n = rand.nextInt(50+1);

      // se la dimensione è pari E il numero generato è pari
      if(lista.size()%2==0 && n%2==0) {
        // aggiungo il numero
        lista.add(n); 
      }
        
      // se la dimensione è dispari E il numero generato è dispari
      else if(lista.size()%2!=0 && n%2!=0) {
        // aggiungo il numero
        lista.add(n); 
      }   
    }

    
    System.out.print("[ ");
    for(int i = 0; i<lista.size(); i++){
      System.out.print(lista.get(i)+" ");
    }
    System.out.println("]");

    // seconda parte ------
    // verificare se la lista è ordinata

    // creiamo una variabile per ricordarci se il la lista è decrescente o meno
    boolean decrescente = true;

    // per ogni numero (dal secondo) presente nella lista
    for(int i = 1; i<lista.size(); i++){
      
      // se il numero non è minore del precedente
      if(lista.get(i) > lista.get(i-1)){
        // MI VOGLIO RICORDARE CHE NON E' DECRESCENTE
        decrescente=false;
        
        // smetto di cercare
        break;
      }
    }
    
    // se la lista è decrescente
    if(decrescente==true){
      // stampo il max e il min e dico che è decrescente
      int max=lista.get(0);
      int min=lista.get(lista.size()-1);
      System.out.println("Il massimo vale " + max + " mentre il minimo " + min);
    }

    // in tutta gli altri casi
    else {
      // stampo che non è decrescente
      System.out.println("La lista non è in ordine decrescente");
    }
	}
}