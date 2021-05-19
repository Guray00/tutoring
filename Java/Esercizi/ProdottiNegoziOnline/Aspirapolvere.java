public class Aspirapolvere extends ProdottoMateriale{
	public Aspirapolvere(){
		super();
	}

	public Aspirapolvere(double _prezzoAcquisto, double _prezzoVendita, int _iva, String _descrizione, double _larghezza, double _altezza, double _profondita, double _peso){  
		super(_prezzoAcquisto, _prezzoVendita, _iva, _descrizione, _larghezza, _altezza, _profondita, _peso);
  	}

	public Aspirapolvere(double _prezzoAcquisto, double _larghezza, double _altezza, double _profondita, double _peso){
		super(_prezzoAcquisto, _larghezza, _altezza,  _profondita,  _peso);
	}

	public Aspirapolvere(double _prezzoAcquisto, double _prezzoVendita, double _larghezza, double _altezza, double _profondita, double _peso){
		super(_prezzoAcquisto, _prezzoVendita, _larghezza, _altezza,  _profondita,  _peso);
	}



}