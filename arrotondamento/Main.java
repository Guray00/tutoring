import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Inserisci un numero float: ");
        float numero = scanner.nextFloat();

        // Calcolo della parte decimale
        float decimale = numero - (int) numero;

        // Arrotonda per eccesso se la parte decimale è maggiore o uguale a 0.5
        int risultato;
        if (decimale >= 0.5) {
            risultato = (int) numero + 1;
        } else {
            risultato = (int) numero;
        }

        System.out.println("Numero arrotondato: " + risultato);
    }
}