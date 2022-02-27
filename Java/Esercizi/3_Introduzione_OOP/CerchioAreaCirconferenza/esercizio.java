/*
  cercare area e circonferenza di un cerchio dato
  il raggio.

*/

import java.util.Scanner;

public class esercizio{

	public static void main(String[] args){

    Scanner input = new Scanner(System.in);

    System.out.println("Dimmi il raggio del cerchio ");
    double raggio = input.nextDouble();
    
    Cerchio c = new Cerchio(raggio);
    c.stampaCaratteristiche();

    
    System.out.println("circonferenza: " + c.calcolaCirconferenza());
    System.out.println("Area: " + c.calcolaArea());

	}
}
