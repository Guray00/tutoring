import java.util.ArrayList;

public class Forno{
  private String nome;
  private String indirizzo;
  private ArrayList<ProdottoForno> prodotti;

  public Forno(){
    this.nome = "";
    this.indirizzo = "";
    this.prodotti = new ArrayList<>();
  }

  public Forno(String nome, String indirizzo, ArrayList<ProdottoForno> prodotti){
    this.nome = nome;
    this.indirizzo = indirizzo;
    this.prodotti = prodotti;
  }

  public Forno(Forno c){
    this.nome = c.nome;
    this.indirizzo = c.indirizzo;
    this.prodotti = c.prodotti;
  }

  // METODI
  
  
  	// Metodo che aggiunge un prodotto alla lista dei prodotti del forno (solo se non è già presente, controllare il codice)
    public void aggiungiProdotto(ProdottoForno p){
    	for(int i = 0; i < prodotti.size(); i++){
        	if(prodotti.get(i).codice == p.codice){
        	return;
        	}
      	}
      	prodotti.add(p);
    }



	// Metodo che restituisce il numero di prodotti venduti a peso
  public int prodottiVendutiAPeso(){
    int tmp = 0;
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i) instanceof ProdottoPeso){
        tmp += 1; 
      }
    }
    return tmp;
  }

	// Metodo che restituisce una lista di prodotti venduti al pezzo con prezzo maggiore di un valore passato come parametro
  public ArrayList<ProdottoPrezzo> prodottiMaggioriDiUnPrezzo(float p){
    ArrayList<ProdottoPrezzo> prodottiMaggiori = new ArrayList<ProdottoPrezzo>(); 
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i).prezzoFinale() > p && prodotti.get(i) instanceof ProdottoPrezzo){
        prodottiMaggiori.add((ProdottoPrezzo)prodotti.get(i));
      }
    }
    return prodottiMaggiori;
  }

	// Metodo che restituisce il prodotto venduto a peso con la durata maggiore
	public ProdottoPeso prodottoPesoConLaDurataMaggiore(){
		int maxDurata = 0;
		for(int i = 0; i < prodotti.size(); i++){
		if(prodotti.get(maxDurata).giorniDurata < prodotti.get(i).giorniDurata && prodotti.get(i) instanceof ProdottoPeso){
			maxDurata = i;
		}
		}
		return prodotto.get(maxDurata);
	}

	// Metodo che restituisce una stringa con tutti i dati dei prodotti del forno
  


}