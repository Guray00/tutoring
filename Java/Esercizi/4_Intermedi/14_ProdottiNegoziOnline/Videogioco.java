
public class Videogioco extends ProdottoDigitale {
	
	public Videogioco(){
		super();
	}
  
	public Videogioco(double pa, double pv, int i, String d, int dim, String pr, String rr){
		super(pa, pv, i, d, dim, pr, rr);
	}

	public Videogioco(double _prezzoAcquisto, int _dimensione, String _processoreRichiesto, String _ramRichiesta){
		super(_prezzoAcquisto, _dimensione, _processoreRichiesto, _ramRichiesta);
	}

	public Videogioco(double _prezzoAcquisto, double _prezzoVendita, int _dimensione, String _processoreRichiesto, String _ramRichiesta){
		super(_prezzoAcquisto, _prezzoVendita, _dimensione, _processoreRichiesto, _ramRichiesta);
	}

	public Videogioco(Videogioco c){
		super(c);
	}
}

