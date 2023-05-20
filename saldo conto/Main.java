import java.io.*;

public class Main {

    public static void main(String[] args) {

        // Questa serve per fare input
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);

        try {
            // Lettura dell'input dell'utente
            System.out.print("Inserisci il saldo iniziale del conto corrente: ");
            double saldoIniziale = Double.parseDouble(tastiera.readLine());

            System.out.print("Inserisci l'importo della transazione: ");
            double importoTransazione = Double.parseDouble(tastiera.readLine());

            System.out.print("Inserisci il tipo di transazione (d = deposito, a = assegno, s = spese): ");
            char tipoTransazione = tastiera.readLine().charAt(0);

            // Calcolo del saldo finale
            double saldoFinale = saldoIniziale;

            if (tipoTransazione == 'd') {
                saldoFinale += importoTransazione;
            } else if (tipoTransazione == 'a') {
                saldoFinale += importoTransazione;
            } else if (tipoTransazione == 's') {
                if (saldoFinale >= importoTransazione) {
                    saldoFinale -= importoTransazione;
                } else {
                    saldoFinale -= importoTransazione;
                    saldoFinale -= 10.00; // Addebito per servizio bancario
                    System.out.println("Fondi insufficienti!");
                }
            } else {
                System.out.println("Tipo di transazione non valido!");
                return; // Termina il programma
            }

            // Mostrare il saldo finale a schermo
            System.out.println("Il saldo finale del conto corrente è: " + saldoFinale);

        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
