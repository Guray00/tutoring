import java.io.*;

public class Main {

    public static void main(String[] args) {

        // Questa serve per fare input
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);

        try {
            // Lettura delle coordinate del punto A
            System.out.print("Inserisci la coordinata x del punto A: ");
            double xA = Double.parseDouble(tastiera.readLine());

            System.out.print("Inserisci la coordinata y del punto A: ");
            double yA = Double.parseDouble(tastiera.readLine());

            // Lettura delle coordinate del punto B
            System.out.print("Inserisci la coordinata x del punto B: ");
            double xB = Double.parseDouble(tastiera.readLine());

            System.out.print("Inserisci la coordinata y del punto B: ");
            double yB = Double.parseDouble(tastiera.readLine());

            // Calcolo della distanza tra i punti A e B
            double distanza = calcolaDistanza(xA, yA, xB, yB);

            // Mostrare la distanza a schermo
            System.out.println("La distanza tra i punti A e B è: " + distanza);

        } catch (Exception e) {
            System.out.println(e);
        }

    }

    // Funzione per calcolare la distanza tra due punti
    public static double calcolaDistanza(double x1, double y1, double x2, double y2) {
        double distanza = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2));
        return distanza;
    }
}
