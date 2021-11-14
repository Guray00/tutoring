//	Definire le classi necessarie a scrivere un programma in grado di simulare una gestione semplificata di un conto corrente.
//	In particolare il conto corrente ammette le seguenti operazioni:

//		deposito - il programma permette la registrazione di un movimento che incrementa il saldo del conto corrente

//		prelievo - il programma permette la registrazione di un movimento che decrementa il saldo del conto corrente

//		elenco movimenti - il programma permette di visualizzare tutti i movimenti registrati in un lasso di tempo (data inizio e data fine)

//		saldo - il programma permette di visualizzare il saldo attuale contenuto nel conto corrente

//		ricarica telefonica - il programma permette di eseguire una ricarica telefonica	


// MOVIMENTO: [importo, data, tipologia]
import java.time.LocalDate;
import java.time.Month;
import java.util.Scanner;

public class esercizio {

	public static void main(String[] args){
		//System.out.println("ciao");
		//Movimento a = new Movimento();
		//Scanner s = new Scanner(System.in);


		LocalDate data = LocalDate.of(2021, 11, 14);
		ContoCorrente conto = new ContoCorrente();
		conto.deposita(100.0, data);
		conto.deposita(140.0, data);
		conto.deposita(400.0, data);
		conto.deposita(500.0, data);
		conto.deposita(11.0, data);
		conto.deposita(3300.0, data);

		
		conto.elencoMovimenti();
		System.out.println("saldo: " + conto.getSaldo());

		conto.prelievo(5000, data);
		conto.elencoMovimenti();
		System.out.println("saldo: " + conto.getSaldo());

	}

}

/*
1) leggo la traccia e cerco di capire quali sono le classi che mi potranno servire (conto corrente, movimento)
2) Quale è la classe "più base" che viene richiamata dalle altre? => Movimento
*/