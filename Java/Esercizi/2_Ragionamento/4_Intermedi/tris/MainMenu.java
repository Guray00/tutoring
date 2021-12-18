import java.util.Scanner;
import tris.GiocoTris;

public class MainMenu {

	public static void main(String[] args) {
		
		System.out.println("====== Gioco del TRIS ===========");
		
		Scanner scanner = new Scanner(System.in);
		
		GiocoTris gioco = new GiocoTris();
		
		System.out.println("Giocatore1 inserisci il tuo nome:");
		String nome1 = scanner.nextLine();
		System.out.println("Giocatore2 inserisci il tuo nome:");
		String nome2 = scanner.nextLine();
		
		gioco.impostaGiocatori(nome1, nome2);
		
		System.out.println("La partita inizia");
		gioco.iniziaPartita();
		
		do {

			gioco.stampaCampo();

			String giocatoreTurno = gioco.getGiocatoreTurno();
			char simbolo = gioco.getSimbolo();
			System.out.println(giocatoreTurno + " inserisci il simbolo " + simbolo + " in posizione:");
			String posizione = scanner.nextLine();
			
			gioco.gioca(Integer.parseInt(posizione));
			
		} while(gioco.isPartitaInCorso());
		
		gioco.stampaCampo();
		System.out.println("Partita conclusa. Vincitore: " + gioco.getVincitore());
		
		System.out.println("====== Gioco Terminato ===========");
	}

}
