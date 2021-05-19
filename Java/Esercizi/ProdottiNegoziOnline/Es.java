public class Es {

	public static void main(String args[]){
		System.out.println("Esercizio prodotti");

		//ProdottoGenerico a = new ProdottoGenerico(1000, 1600, 10, "prodotto generico");
		//System.out.println(a.toString());

		Aspirapolvere a = new Aspirapolvere(70, 100, 10,"aspirapolvere3000", 0.2, 0.5, 0.2, 3);

		System.out.println(a.toString());
		System.out.println(a.getCodiceProdotto());


		Videogioco b = new Videogioco(30, 50, 22, "I5 gen 3", "4GB di Ram");
		System.out.println(b.toString());
		System.out.println(b.getCodiceProdotto());

		NegozioOnline n = new NegozioOnline("Mediaword", "via dei martiri 11, Pisa", 21);
	
	
	}

}