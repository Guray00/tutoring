import java.util.Scanner;


public class esercizio{

	public static void main(String[] args){

		Autostrada a = new Autostrada();
    a.aggiungiCasello(null, 0);
    a.aggiungiCasello("montagna", 10);
    a.aggiungiCasello("pianura", 5);
    a.aggiungiCasello("montagna", 5);

    a.ingresso(1, "A");
    System.out.println(a.uscita(3));
	}
  
}