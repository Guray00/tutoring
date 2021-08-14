
public abstract class ProdottoDigitale extends ProdottoGenerico {
	protected int dimensione;
	protected String processoreRichiesto;
	protected String ramRichiesta;

	public ProdottoDigitale(){
		super();
		this.dimensione = 0;
		this.processoreRichiesto = "";
		this.ramRichiesta = "";
	}
  
	public ProdottoDigitale(double prezzoAcquisto, double prezzoVendita, int iva, String descrizione, int dimensione, String processoreRichiesto, String ramRichiesta){
		super(prezzoAcquisto, prezzoVendita, iva, descrizione);

		if (descrizione.equals("")){
			descrizione = "prodotto digitale";
		}

		this.dimensione = dimensione;
		this.processoreRichiesto = processoreRichiesto;
		this.ramRichiesta = ramRichiesta;
	}

	public ProdottoDigitale(double prezzoAcquisto, int dimensione, String processoreRichiesto, String ramRichiesta){
		super(prezzoAcquisto);

		this.descrizione = "prodotto digitale";
		this.dimensione = dimensione;
		this.processoreRichiesto = processoreRichiesto;
		this.ramRichiesta = ramRichiesta;
	}

	public ProdottoDigitale(double prezzoAcquisto, double prezzoVendita, int dimensione, String processoreRichiesto, String ramRichiesta){
		super(prezzoAcquisto, prezzoVendita);

		this.descrizione = "prodotto digitale";
		this.dimensione = dimensione;
		this.processoreRichiesto = processoreRichiesto;
		this.ramRichiesta = ramRichiesta;
	}

	public ProdottoDigitale(ProdottoDigitale c){
		super(c);
		this.dimensione = c.dimensione;
		this.processoreRichiesto = c.processoreRichiesto;
		this.ramRichiesta = c.ramRichiesta;
	}

	public void setDimensione(int dimensione){
		this.dimensione = dimensione;
	}

	public int getDimensione(){return this.dimensione;}


	public void setRamRichiesta(String r){this.ramRichiesta = r;}
	public String getRamRichiesta(){return this.ramRichiesta;}

	public void setProcessoreRichiesto(String r){this.processoreRichiesto = r;}
	public String getProcessoreRichiesto(){return this.processoreRichiesto;}

	public String toString(){

		return super.toString() + "\nDimensione: " + this.dimensione + "\nProcessore richiesto: "+this.processoreRichiesto + "\nRam richiesta: " + this.ramRichiesta;
	}
}

