import java.io.*;

public class Main {

    public static void main(String[] args) {

        // Questa serve per fare input
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);

        try {
            // Lettura dell'input dell'utente
            System.out.print("Inserisci un numero: ");
            int numero = Integer.parseInt(tastiera.readLine());

            // Verifica se il numero è perfetto
            boolean isPerfetto = verificaNumeroPerfetto(numero);

            // Mostrare il risultato a schermo
            if (isPerfetto) {
                System.out.println(numero + " è un numero perfetto.");
            } else {
                System.out.println(numero + " non è un numero perfetto.");
            }

        } catch (Exception e) {
            System.out.println(e);
        }

    }

    // Funzione per verificare se un numero è perfetto
    public static boolean verificaNumeroPerfetto(int numero) {
        int sommaDivisori = 0;
        
        // Calcola la somma dei divisori del numero
        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) {
                sommaDivisori += i;
            }
        }

        // Verifica se la somma dei divisori è uguale al numero stesso
        if (sommaDivisori == numero) {
            return true;
        } else {
            return false;
        }
    }
}
