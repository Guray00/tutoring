import java.util.*;

public class es{

	public static void main(String[] args){

    Cliente c1 = new Cliente(1, "Mario", "MRFOSIF", "Via Roma 13, Milano");
    Cliente c2 = new Cliente(2, "Luigi", "LGIRFIEF", "Via Milano 31, Roma");
  
    Fattura f1 = new Fattura(5, 2023, "17-03-2023", 15.32f, c1);
    Fattura f2 = new Fattura(2, 2021, "30-08-2021", 1.70f, c2);
    Fattura f3 = new Fattura(1, 2020, "01-02-2020", 12.50f, c2);

    // verifica costruttore
    Archivio a1 = new Archivio();

    // verifica se l'aggiunta funziona
    a1.addFattura(f1);
    a1.addFattura(f2);
    a1.addFattura(f3);

    // verifica stampa fatture
    System.out.println(a1);

    // verifica totale fatture
    System.out.println("Il totale è di: "+a1.totale());

    // verifica se stampafatture funziona
    System.out.println("\n============================\n");
    a1.stampaFatture(c1);

    // verifica se clienti funziona
    System.out.println("\n============================\n");
    System.out.println("Clienti: ");
    a1.stampaClienti();
	}
}