import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // Dichiaro 2 variabili int 'k' e 'h'
    int k, h, h1, h2, i, conta=0;

    // Chiedo all'utente di inserire i valori delle 2 variabili
    Scanner scanner = new Scanner(System.in);
    System.out.print("Inserisci il valore dell'altezza: ");
    h = scanner.nextInt();

    System.out.print("Inserisci il valore in chilometri: ");
    k = scanner.nextInt();

    // Copio l'altezza iniziale
    h1 = h;
    h2 = h;

    // Scorro i da 0 a k(escluso) a passi di 1
    for(i=0; i<k; i++){
      // Divido l'altezza per 2
      h1 /= 2; 
    }

    // Voglio sapere dopo quanti km l'altezza si annulla
    // si annulla quando h = 0
    //                1        2        3        4             5
    // 20 => 20/2 => 10 / 2 => 5 / 2 => 2 => 2 / 2 => 1 / 2 => 0 
    while(h2 != 0){
      h2/=2;
      conta++;
    }

    // Stampo a schermo l'altezza finale dell'onda
    System.out.println("L'altezza finale dell'onda e': " + h1);
    System.out.println("L'altezza si azzera dopo: " + conta + " km");
  }
}
