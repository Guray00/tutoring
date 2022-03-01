/*

Si vuole rappresentare un Albergo Scrivere la classe Camera: ogni oggetto di questo tipo rappresenta una camera d'albergo, con il proprio Numero e la propria Tipologia (una stringa del tipo: "singola", "matrimoniale con bagno", "doppia senza bagno", e una variabile che indica se la camera è Occupata. Scrivere la classe Prenotazione con la data di inizio e di fine della prenotazione, il Nome del cliente e la Camera oggetto della prenotazione. Scrivere la classe Albergo che contiene il nome, un insieme di oggetti di tipo Camera e la lista delle Prenotazioni. Prevedere tutti i costruttori (default, con parametri) e i metodi get/set per la gestione degli oggetti, oltre ai metodi:

per l'aggiunta/rimozione di una prenotazione 
per l'aggiunta/rimozione di una camera all'albergo 
per la ricerca delle prenotazioni di un certo giorno 
per la ricerca delle camere libere

*/


//classe camera -> numero, tipologia (stringa), occupata (bool)
//classe prenotazione -> data_inizio (int), data_fine (int), nome del cliente e camera oggetto della prenotazione
//classe Albergo -> array di prenotazioni

public class EsAlbergo{
	public static void main(String[] args){

		// creiamo albergo
		Albergo a = new Albergo();

		// creiamo le camere
		Camera c1 = new Camera(1, "Singola", false);
		Camera c2 = new Camera(2, "Singola", false);
		Camera c3 = new Camera(3, "Singola", false);
		Camera c4 = new Camera(4, "Singola", false);


  	// formato della data: aaaa mm gg  
		
																			 //2021-01-01  2021-01-03
		Prenotazione p1 = new Prenotazione(20210101,     20210103, "Peppino", c1);

																			 //2021-05-01  2021-05-03
		Prenotazione p2 = new Prenotazione(20210501, 20210503, "Mario", c2);


		// aggiungiamo le camere
		a.addCamera(c1, 0);
		a.addCamera(c2, 1);
		a.addCamera(c3, 2);
		a.addCamera(c4, 3);

		// aggiungiamo le prenotazioni
		a.addPrenotazione(p1, 0);
		a.addPrenotazione(p2, 1);

	  // rimuoviamo la camera
		a.delCamera(2);

		// cerchaimo le camere libere
		Camera[] libere = a.getLibere();
	

		System.out.println("Le prenotate il 2 gennaio sono: ");
		Prenotazione[] pren = a.cercaPrenotazione(20210102);

		for (int i =0; i < 10000; i++){
			if(pren[i] != null) System.out.println("> cliente:"+pren[i].getNomeCliente());
		}

		System.out.println("");
		System.out.println("");

		System.out.println("Le camere libere sono: ");

		for (int i =0; i < 10000; i++){
			if(libere[i] != null) System.out.println("> camera n. "+libere[i].getNumero());
		}

		
	}
}