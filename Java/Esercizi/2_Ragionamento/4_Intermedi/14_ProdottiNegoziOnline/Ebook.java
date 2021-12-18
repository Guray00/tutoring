
public class Ebook extends ProdottoDigitale {
	
	private String casaEditrice;

	public String getCasaEditrice(){return casaEditrice;}

	public Ebook(){
		super();
	}
  
	public Ebook(double pa, double pv, int i, String d, int dim, String pr, String rr){
		super(pa, pv, i, d, dim, pr, rr);
	}

	public Ebook(double _prezzoAcquisto, int _dimensione, String _processoreRichiesto, String _ramRichiesta){
		super(_prezzoAcquisto, _dimensione, _processoreRichiesto, _ramRichiesta);
	}

	public Ebook(double _prezzoAcquisto, double _prezzoVendita, int _dimensione, String _processoreRichiesto, String _ramRichiesta){
		super(_prezzoAcquisto, _prezzoVendita, _dimensione, _processoreRichiesto, _ramRichiesta);
	}

	public Ebook(Ebook c){
		super(c);
	}
}

