import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Chiedi all'utente di inserire la lunghezza del vettore (massimo 20)
        int n;
        while (true) {
            System.out.print("Inserisci la lunghezza del vettore (max 20): ");
            n = scanner.nextInt();
            if (n > 0 && n <= 20) {
                break;
            } else {
                System.out.println("La lunghezza del vettore deve essere compresa tra 1 e 20.");
            }
        }

        // Inizializza il vettore V
        int[] v = new int[n];

        // Popola il vettore V con valori inseriti dall'utente
        for (int i = 0; i < n; i++) {
            System.out.print("V[" + i + "]: ");
            v[i] = scanner.nextInt();
        }

        // Chiedi all'utente di inserire la soglia X
        System.out.print("Inserisci la soglia x: ");
        int x = scanner.nextInt();

        // Inizializza il vettore V2 e il contatore di elementi copiati
        int[] v2 = new int[n];
        int contatoreCopiati = 0;

        // Copia gli elementi di V in V2 se sono inferiori alla soglia X
        for (int elemento : v) {
            if (elemento < x) {
                v2[contatoreCopiati++] = elemento;
            }
        }

        // Stampa il vettore V
        System.out.print("V: ");
        for (int elemento : v) {
            System.out.print(elemento + " ");
        }
        System.out.println();

        // Stampa il vettore V2
        System.out.print("V2: ");
        for (int i = 0; i < contatoreCopiati; i++) {
            System.out.print(v2[i] + " ");
        }
        System.out.println();

        // Stampa il numero di elementi copiati
        System.out.println("Numero di elementi copiati: " + contatoreCopiati);
    }
}
