public class eliminaDoppioni{

  public static int[] funzione(int v[]){
    int v2 [] = new int[v.length];
    int pos = 0;
    
    for (int i = 0; i < v.length; i++){
      boolean doppione = false;
      
      for (int j=0; j < v.length; j++){
        if(v[i] == v[j] && i != j){
          doppione = true;
        }
      }

      if (!doppione){
        v2[pos] = v[i];
        pos++;
      }
    }

    int v3 [] = new int[pos];

    for (int i = 0; i < pos; i++){
      v3[i] = v2[i];
    }

    
    return v3;
  }

	public static void main(String[] args){

		int v [] = {1, 2, 3, 4, 3, 2, 7};

    int v2 [] = funzione(v);

    for(int i = 0; i < v2.length; i++){
      System.out.print(" "+ v2[i]);
    }

	}
}