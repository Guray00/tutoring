import java.util.ArrayList;

public class esForno{


	public static void main(String args[]){
    
		ArrayList<ProdottoForno> prodotti = new ArrayList<>();
		

		ProdottoPezzo p1 = new ProdottoPezzo("01", "Pane", 27, 2, 10);
		ProdottoPezzo p2 = new ProdottoPezzo("02", "Pizza", 28, 2.50f, 10);
		ProdottoPezzo p3 = new ProdottoPezzo("03", "Pane", 28, 3, 10);
		
		Forno f1 = new Forno("Alessio", "via Virgilio 1", prodotti);

		f1.aggiungiProdotto(p1);
		f1.aggiungiProdotto(p2);
		f1.aggiungiProdotto(p3);

		System.out.println("TESTANDO datiDelForno =================");
		System.out.println(f1.datiDelForno());

		System.out.println("TESTANDO PRODOTTI MAGGIORI DI UN PREZZO =================");
		ArrayList<ProdottoPezzo> prodottiMaggiori = f1.prodottiMaggioriDiUnPrezzo(2.50f);

		for (int i = 0; i < prodottiMaggiori.size(); i++){		
			System.out.println(prodottiMaggiori.get(i).toString());
		}

		System.out.println("TESTANDO prodottoPesoConLaDurataMaggiore =================");
		ProdottoPeso tmp = f1.prodottoPesoConLaDurataMaggiore();
		
		if(tmp != null) System.out.println(tmp.toString());
		else{System.out.println("Non ci sono prodotti peso\n");}

		System.out.println("TESTANDO datiDelForno =================");
		System.out.println(f1.datiDelForno().toString());

		System.out.println("TESTANDO opzionale =================");
		ArrayList<ProdottoForno> prodottiM = f1.opzionale();

		for (int i = 0; i < prodottiM.size(); i++){
			System.out.println(prodottiM.get(i).toString());
		}
	}


}