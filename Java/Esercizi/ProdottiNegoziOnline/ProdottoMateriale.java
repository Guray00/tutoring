/*
• larghezza – dimensione in centimetri della larghezza
• altezza – dimensione in centimetri della altezza
• profondita – dimensione in centimetri della profondità 
• peso – dimensione in chilogrammi del peso

*/


public abstract class ProdottoMateriale extends ProdottoGenerico {
	protected double larghezza;
	protected double altezza;
	protected double profondita;
	protected double peso;

  	public ProdottoMateriale(double prezzoAcquisto, double prezzoVendita, int iva, String descrizione, double larghezza, double altezza, double profondita, double pesoouble larghezza, double altezza, double profondita, double peso){
		  // DA FINIRE      super(prezzoAcquisto, prezzoVendita, iva, descrizione);
      if (descrizione.equals("")){
			descrizione = "prodotto digitale";
		  }
      this.larghezza = larghezza;
		  this.altezza = altezza;
		  this.profondita = profondita;
		  this.peso = peso;
  	}


	public ProdottoMateriale(double pa, double l, double a, double pr, double p){
		super(pa);

		this.descrizione = "prodotto materiale";
		this.larghezza = l;
		this.altezza = a;
		this.profondita = pr;
		this.peso = p;
	}

	public ProdottoMateriale(double pa, double pv, double l, double a, double pr, double p){
		super(pa, pv);
		
		this.descrizione = "prodotto materiale";
		this.larghezza = l;
		this.altezza = a;
		this.profondita = pr;
		this.peso = p;
	}


	public void setLarghezza(double larghezza){
		this.larghezza = larghezza;
	}

	public double getLarghezza(){
		return this.larghezza;
	}

	public void setAltezza(double altezza){
		this.altezza = altezza;
	}

	public double getAltezza(){
		return this.altezza;
	}

	public void setProfondita(double p){
		this.profondita = p;
	}

	public double getProfondita(){
		return this.profondita;
	}
	
	public void setPeso(double p){
		this.peso = p;
	}

	public double getPeso(){
		return this.peso;
	}

	public double volume(){
		return larghezza * altezza * profondita;
	}

	public double superficieCmq(){
		return 2*larghezza*profondita + 4*larghezza*altezza;
	}

	public double superficieMq(){
		return superficieCmq()/(100*100);
	}

	public String toString(){
		return super.toString() + "\nAltezza: " + this.altezza + "\nLarghezza: "+this.larghezza + "\nProfondita: " + this.profondita + "\nPeso: " + this.peso + "\nVolume: " + this.volume() + "\nSuperficie in cmq: "+ this.superficieCmq() + "\nSuperficie in mq:" + this.superficieMq();
	}
}

/*
### Metodi concreti
- get e set per tutte e tre le proprietà
- ...volume() - metodo che calcola e restituisce il volume in litri del prodotto 
- ...superficieCmq() - metodo che calcola e restituisce la superficie del prodotto in centimetri quadrati 
- ...superficieMq() - metodo che calcola e restituisce la superficie del prodotto in metri quadrati 
- costruttore – implementare tanti costruttori quanti previsti nella classe padre e aggiungere a tutti i parametri specifici della classe ProdottoMateriale. Anche in questi costruttori il parametro “descrizione” non deve essere mai valorizzato con 
una stringa vuota.
- override del metodo toString() in modo che restituisca le informazioni complete del prodotto material
*/