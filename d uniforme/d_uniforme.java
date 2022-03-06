
public class esercizio {

  // metodo che calcola la frequenza
  public static int frequenza(int[] v, int x){

    int conteggio=0;
    for (int i=0;i<v.length;i++){
      if(v[i]==x){
        conteggio++;
      }
    }

    return conteggio;
  } 

  // restituire un numero che indic il d oppure 0 se non è d-uniforme
  public static int d_uniforme(int[] v){
    
    // chiamo la frequenza sul primo e mi salvo quanto vale <- d
    int d = frequenza(v, v[0]);

    boolean uniforme = true;
    
    // controllo su tutti che siano della stessa frequenza (quindi
    // uguale a quello salvato prima)
    for (int i = 0; i < v.length; i++){
      if (frequenza(v ,v[i]) != d){
        uniforme = false;
      }
    }

    // se sono uguali, è d-frequente dove d è il numero salvato
    if(uniforme){
      return d;
    }
    else {
      return 0;
    }
  }
  
  
  public static void main (String[] args){
    int [] v = {1,1,5,5};
    System.out.println(d_uniforme(v));
    
  }
}

