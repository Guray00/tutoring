import java.util.Random;

public class es{
	public static void main(String[] args){
    Random rnd = new Random();
    
    // creiamo un vettore denominato dati di 50 elementi
    int[] dati = new int[50];

    // cicliamo 50 volte
    for (int i = 0; i < 50; i++){
      // 0...89 + 1 => 1...90
      dati[i] = rnd.nextInt(90) + 1;
    }

    // stampare il vettore
    for (int i = 0; i < 50; i++){
      System.out.print(dati[i] + " ");
    }

    // la media dei valori IN POSIZIONE dispari
    int somma = 0;
    for (int i = 1; i < 50; i = i + 2) {
      // controllo che il cassetto sia in posizione dispari
      somma = somma + dati[i];
    }

    float media = (float) somma/25;
    System.out.println("\n");
    System.out.println("La media dei valori presenti in posizione dispari e': " + media);
      
	}
}