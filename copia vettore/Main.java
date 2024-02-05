import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Chiedi all'utente di inserire 5 numeri
        System.out.print("Inserisci 5 numeri separati da spazi: ");
        int[] vettore1 = new int[5];

        // Leggi i numeri e salvali nel vettore1
        for (int i = 0; i < 5; i++) {
            vettore1[i] = scanner.nextInt();
        }

        // Copia i numeri in un secondo vettore (vettore2)
        int[] vettore2 = new int[5];
        for (int i = 0; i < 5; i++) {
            vettore2[i] = vettore1[i];
        }

        // Stampa il contenuto di entrambi i vettori
        System.out.print("Vettore1: ");
        stampaVettore(vettore1);

        System.out.print("Vettore2: ");
        stampaVettore(vettore2);

        // Salva i numeri in ordine inverso nel secondo vettore
        int indiceInverso = 4;
        for (int i = 0; i < 5; i++) {
            vettore2[i] = vettore1[indiceInverso];
            indiceInverso--;
        }

        // Stampa il contenuto del secondo vettore (in ordine inverso)
        System.out.print("Vettore2 (in ordine inverso): ");
        stampaVettore(vettore2);
    }

    // Funzione di supporto per stampare un vettore
    private static void stampaVettore(int[] vettore) {
        for (int elemento : vettore) {
            System.out.print(elemento + " ");
        }
        System.out.println();
    }
}
