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
  public ArrayList<ProdottoPezzo> prodottiMaggioriDiUnPrezzo(float p){
    ArrayList<ProdottoPezzo> prodottiMaggiori = new ArrayList<ProdottoPezzo>(); 
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i).prezzoFinale() > p && prodotti.get(i) instanceof ProdottoPezzo){
        prodottiMaggiori.add((ProdottoPezzo)prodotti.get(i));
      }
    }
    return prodottiMaggiori;
  }

	// Metodo che restituisce il prodotto venduto a peso con la durata maggiore
	public ProdottoPeso prodottoPesoConLaDurataMaggiore(){
		int maxDurata = -1;

		for (int i = 0; i < prodotti.size(); i++){
			if (prodotti.get(i) instanceof ProdottoPeso){
				maxDurata = i;
			}
		}

		if (maxDurata == -1) return null;	

		for(int i = maxDurata+1; i < prodotti.size(); i++){
			if(prodotti.get(maxDurata).giorniDurata < prodotti.get(i).giorniDurata && prodotti.get(i) instanceof ProdottoPeso){
				maxDurata = i;
			}
		}

		return (ProdottoPeso) prodotti.get(maxDurata);
	}

	// Metodo che restituisce una stringa con tutti i dati dei prodotti del forno
	public String datiDelForno(){
		String info = "";
		for(int i = 0; i < prodotti.size(); i++){
			info += prodotti.get(i).toString();
		}
		return info;
  	}

	public float prezzoMedio(){
		float tmp = 0;

		for (int i = 0; i < prodotti.size(); i++){
			tmp += prodotti.get(i).prezzoFinale();
		}	

		return (tmp/prodotti.size());
	}

	// Metodo che restituisce una lista di prodotti con il prezzo maggiore del prezzo medio di tutti i prodotti del forno ordinati in ordine decrescente di durata

	public ArrayList<ProdottoForno> opzionale(){
		ArrayList<ProdottoForno> tmp = new ArrayList<ProdottoForno>();
		float media = prezzoMedio();


		for (int i = 0; i < prodotti.size(); i++){
			if (prodotti.get(i).prezzoFinale() > media){
				// (2) => 5  3  1  1

				if (tmp.size() == 0 ){
					tmp.add(prodotti.get(i));
					continue;
				}
				
				int j = 0;
				for (j= 0; j < tmp.size(); j++){
					if (prodotti.get(i).getGiorniDurata() > tmp.get(j).giorniDurata){
						tmp.add(j, prodotti.get(i));
						break;
					}
				}
				
			}
		}

		return tmp;
	}
}