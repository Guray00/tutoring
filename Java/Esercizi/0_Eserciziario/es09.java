// Scrivere un algoritmo che, dato il prezzo di un prodotto, calcoli il prezzo scontato del 20%.

public class es09 {	

	public static void main(String[] args) {
		
		int prezzo_base = 50;
    int prezzo_scontato = prezzo_base - (prezzo_base*20/100);
    
    System.out.println(prezzo_scontato);
	}

}
