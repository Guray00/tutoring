public class esAutoMoto {

	public static void main(String args[]){
		Moto m1 = new Moto("a", "b", 500, 200);
		Auto a1 = new Auto("c", "d", 500, 200);
		Moto m2 = new Moto("e", "f", 500, 200);
		Auto a2 = new Auto("g", "h", 500, 200);

		// creazione del rivenditore
    	Rivenditore r1 = new Rivenditore("Fiat");

		System.out.println("Test generaMatricola ===============");
		m1.generaMatricola();
		m2.generaMatricola();
		a1.generaMatricola();
		a2.generaMatricola();
   		System.out.println(m1.getMatricola());
		System.out.println(m2.getMatricola());	
   		System.out.println(a1.getMatricola());	
   		System.out.println(a2.getMatricola());	

		System.out.println("Test aggiungiMezzo ===============");
    	r1.aggiungiMezzo(m1);
     	r1.aggiungiMezzo(a1);
		System.out.println(r1.toString());

		System.out.println("Test removeMezzo ===============");
      	r1.removeMezzo(m1.getMatricola());
		System.out.println(r1.toString());

	}
}