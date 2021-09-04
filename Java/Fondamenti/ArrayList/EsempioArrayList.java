// https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html

import java.util.ArrayList;

public class EsempioArrayList{

	public static void main(String[] args){
		
		ArrayList<Integer> a = new ArrayList<Integer>();

		a.add(5);
		a.add(2);
		a.add(3);

		System.out.println("Voglio stampare il secondo elemento (indice 1):");
		System.out.println(a.get(1));

		System.out.println("\nStampiamo la lista:");
		System.out.println(a.toString());

		System.out.println("\nRimuoviamo il terzo elemento dalla lista:");
		a.remove(2);
		System.out.println(a.toString());


		// ESEMPIO CON UNA CLASSE DERIVATA

		Oggetto o1 = new Oggetto("oggetto1");
		Oggetto o2 = new Oggetto("oggetto2");
		Oggetto o3 = new Oggetto("oggetto3");

		ArrayList<Oggetto> b = new ArrayList<Oggetto>();
		b.add(o1);
		b.add(o2);
		b.add(o3);


		System.out.println("\nStampiamo la lista di oggetti:");
		System.out.println(b.toString());

		System.out.println("\nStampiamo il terzo elemento dalla lista:");
		System.out.println(b.get(2).nome);

		System.out.println("\nStampiamo la dimensione dalla lista di oggetti:");
		System.out.println(b.size());
	}

}