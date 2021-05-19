import java.util.ArrayList;

public class NegozioOnline{
  	private String nome;
	private String indirizzo;
	private int numeroDipendenti; // Numero di dipendenti che lavorano per il negozio
	private ArrayList<ProdottoGenerico> prodotti; // Contenitore privato di tutti i prodotti che l’azienda tratta. 

	public NegozioOnline(){
		nome = "";
		indirizzo = "";
		numeroDipendenti = 0;
		prodotti = new ArrayList<ProdottoGenerico>();
	}
  
  public NegozioOnline(String nome, String indirizzo, int numeroDipendenti, ArrayList<ProdottoGenerico> prodotti){
    this.nome = nome;
    this.indirizzo = indirizzo;
    this.numeroDipendenti = numeroDipendenti;
    this.prodotti = prodotti;
  }

  public NegozioOnline(String nome, String indirizzo, int numeroDipendenti){
    this.nome = nome;
    this.indirizzo = indirizzo;
    this.numeroDipendenti = numeroDipendenti;
    this.prodotti = new ArrayList<ProdottoGenerico>();
  }

  public NegozioOnline(NegozioOnline c){
    this.nome = c.nome;
    this.indirizzo = c.indirizzo;
    this.numeroDipendenti = c.numeroDipendenti;
    this.prodotti = c.prodotti;
  }

	public void setNome(String n){this.nome = n;}
	public String getNome(){return nome;}

	public void setIndirizzo(String i){indirizzo = i;}
	public String getIndirizzo(){return indirizzo;}

	public void setNumeroDipendenti(int n){numeroDipendenti = n;}
	public int getNumeroDipendenti(){return numeroDipendenti;}

  public void addProdotto(ProdottoGenerico p){
    prodotti.add(p);
  }

  public void removeProdotto(int cod){
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i).getCodiceProdotto() == cod){
        prodotti.remove(i);
      }
    }
  }

  public int quantitaLibri(){
    int tmp = 0;
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i) instanceof LibroCarteo || prodotti.get(i) instanceof Ebook){
        tmp++;
      }
    }
    return tmp;
  }

  public int quantitaLibriDigitali(){
    int tmp = 0;
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i) instanceof Ebook){
        tmp++;
      }
    }
    return tmp;
  }

  public int quantitaLibriCartacei(){
    int tmp = 0;
    for(int i = 0; i < prodotti.size(); i++){
      if(prodotti.get(i) instanceof LibroCarteo){
        tmp++;
      }
    }
    return tmp;
  }

  // QUA BISOGNA METTERCI IL LIBRO -> creare due metodi con overload
  
  /*
  public int quantitaPerCasaEditrice(Ebook libro){
	  
    int tmp = 0;
    for(int i = 0; i < prodotti.size(); i++){
      if( (prodotti.get(i) instanceof LibroCarteo || prodotti.get(i) instanceof Ebook) && prodotti.get(i).getCasaEditrice().equals( libro.getCasaEditrice() )){
        tmp++;
      }
    }
	
    return tmp;
  }*/

  
	/*• ...quantitaProdottiTipo(…) metodo che restituisce il numero di prodotti dello stesso tipo di un oggetto passato in input contenuti nella struttura dati.*/

	public int quantitaProdottiTipo (ProdottoGenerico p){
    	int tmp = 0;
		for (int i = 0; i < prodotti.size(); i++){
			
			if (p instanceof ProdottoMateriale){
				if(prodotti.get(i) instanceof ProdottoMateriale){
				tmp++;
				}
      		}
			  
			else if(p instanceof ProdottoDigitale){
				if(prodotti.get(i) instanceof ProdottoDigitale){
				tmp++;
				}
			}
		}

		return tmp;
	}

}

/* METODI
• ...quantitàPerCasaEditrice(…) metodo che restituisce la quantità di libri della sola casa editrice del libro passato in input (sia eBook che cartaceo)


• ...quantitaElettrodomestici(...) metodo che restituisce il numero di elettrodomestici contenuti
nella struttura dati
• ...prodottiPiuRemunerativi(…) metodo che restituisce il prodotto o i prodotti (se sono più di 
uno) che forniscono un ricavo maggiore (senza sconto).
• ...stampaProdottiPerPrezzo(…) - metodo che stampa a schermo i dettagli dei prodotti 
ordinati per prezzo crescente o decrescente in base ad un valore di tipo booleano ricevuto in 
input al metodo.
• ...stampaProdottiDigitaliPerPrezzo(…) - metodo che stampa a schermo i dettagli dei prodotti
digitali ordinati per prezzo crescente o decrescente in base ad un valore di tipo booleano 
ricevuto in input al metodo.
• ...stampaLibriPerTitolo(…) - metodo che stampa a schermo i dettagli dei libri ordinati per 
titolo crescente o decrescente in base ad un valore di tipo booleano ricevuto in input al 
metodo.


*/