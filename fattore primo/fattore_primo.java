import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // Inizializzare una variabile "fattore_primo" a "1"
    int fattore_primo = 1;

    // Chiedere all'utente di inserire un numero "n"
    Scanner scanner = new Scanner(System.in);
    System.out.print("Inserisci un numero: ");
    int n = scanner.nextInt();
    
    // Iterare da 2 a metà del valore di "n" (escluso)
    for (int i = 2; i <= n / 2; i++){
      // Se "n" è divisibile per il numero corrente dell'iterazione
      if (n % i == 0){
        // Assegnare "n" il risultato della divisione di "n" per il numero corrente dell'iterazione
        n = n / i;
        // Se "n" è un numero primo
        if (n == 2 || (n > 2 && n % 2 != 0)){
          // Assegnare "fattore_primo" il valore di "n"
          fattore_primo = n;
        }
      }
    }

    // Stampare a schermo "fattore_primo"
    System.out.println("Il più grande fattore primo di " + n + " è " + fattore_primo);
  }
}