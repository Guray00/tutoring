/*

*/

public class frequencies {

  public static void stampaVettore(int[] v){
    System.out.print("[ ");
    for (int i = 0; i<v.length; i++){
      System.out.print(v[i]+" ");
    }
    System.out.print("]\n");
  }

  public static int[] funzione(int[] v){
    int[] v2 = new int[v.length];
    int pos = 0;
    
    // scorre il vettore
    for (int i=0; i < v.length; i++){

      // questo ciclo serve a controllare, quando è falso
      // significa che non lo abbiamo trovato e dobbiamo
      // contare, quando è vero allora non controlliamo
      boolean trovato = false;
      for (int k = 0; k < i; k++){
        if(v[i] == v[k]){
          trovato = true;
          break;
        }
      }

      // se non l'ho trovato... conto!      
      if(!trovato){
        for(int j=0; j < v.length; j++){
          
          if (v[i] == v[j]){
            v2[pos]++;
          }
        }
        
        pos++;
      }
    }

    return v2;
  }
  
	public static void main(String[] args){

    int[] v = {1, 1, 5, 2, 3, 4, 5};
    int[] v2 = funzione(v);    
    stampaVettore(v);
    stampaVettore(v2);

	}
}