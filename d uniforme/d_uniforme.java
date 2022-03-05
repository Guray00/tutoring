/*
Un array di numeri interi positivi si dice d-uniforme, per qualche d > 0, se è ordinato in modo non 
crescente e se ogni valore appare esattamente d volte. Ad esempio, l’array {13,13,13,8,8,8,6,6,6} è 3-uniforme. La distribuzione di un array d-uniforme contenente n elementi, è l’array ottenuto ponendo le d copie di ciascun valore in n/d gruppi ordinati in modo decrescente, uno di seguito all’altro. Ad esempio la distribuzione dell’array {13,13,13,8,8,8,6,6,6} è l’array {13,8,6,13,8,6,13,8,6}.
Scrivere un metodo in Java--, detto distribuisci, che, dato in input un array a di numeri interi positivi ordinato in modo non crescente, restituisca la distribuzione di a, se a è d-uniforme per 
qualche d > 0, altrimenti restituisca l’array a stesso. 
Ad esempio, con input l’array {13,13,13,8,8,8,6,6,6} che è 3-uniforme, il metodo deve restituire l’array {13,8,6,13,8,6,13,8,6}, mentre con input l’array {13,13,13,8,8,8,6,6} che non è d-uniforme 
per alcun d > 0, il metodo deve restituire l’array {13,13,13,8,8,8,6,6}. Infine, con input l’array {13,13,13,13} che include un solo valore ed è 4-uniforme, il metodo deve restituire l’array {13,13,13,13}
*/

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

