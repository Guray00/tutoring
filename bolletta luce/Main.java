import java.io.*;

public class Main {

    public static void main(String[] args) {

        // Questa serve per fare input
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);

        try {
            // Lettura dell'input dell'utente
            System.out.print("Inserisci il numero di unità consumate: ");
            int unitaConsumate = Integer.parseInt(tastiera.readLine());

            // Calcolo del prezzo della bolletta
            double prezzo = 0.0;

            if (unitaConsumate <= 50) {
                prezzo = unitaConsumate * 0.50;
            } else if (unitaConsumate <= 150) {
                prezzo = 50 * 0.50 + (unitaConsumate - 50) * 0.75;
            } else if (unitaConsumate <= 250) {
                prezzo = 50 * 0.50 + 100 * 0.75 + (unitaConsumate - 150) * 1.20;
            } else {
                prezzo = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitaConsumate - 250) * 1.50;
            }

            // Calcolo della tassa aggiuntiva
            double tassaAggiuntiva = prezzo * 0.20;

            // Calcolo del prezzo finale
            double prezzoFinale = prezzo + tassaAggiuntiva;

            // Mostrare il prezzo finale a schermo
            System.out.println("Il prezzo finale della bolletta della luce è: " + prezzoFinale);

        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
