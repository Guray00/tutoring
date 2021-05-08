
public abstract class ProdottoGenerico {
  protected double prezzoAcquisto;
  protected double prezzoVendita;
  protected static int iva;
  protected String descrizione;

  public ProdottoGenerico(){
    this.prezzoAcquisto = 0;
    this.prezzoVendita = 0;
    this.descrizione = "prodotto generico";
  }
  
  public ProdottoGenerico(double prezzoAcquisto, double prezzoVendita, int iva, String descrizione){
    this.prezzoAcquisto = prezzoAcquisto;
    this.prezzoVendita = prezzoVendita;
    this.iva = iva;
    this.descrizione = descrizione;

	if (descrizione.equals("")){
			descrizione = "prodotto generico";
	}
  }

  public ProdottoGenerico(ProdottoGenerico c){
    this.prezzoAcquisto = c.prezzoAcquisto;
    this.prezzoVendita = c.prezzoVendita;
    this.iva = c.iva;
    this.descrizione = c.descrizione;
  }

  public ProdottoGenerico(double pa){
	  this.prezzoAcquisto = pa;
	  this.prezzoVendita = 0;
	  this.descrizione = "prodotto generico";
  }

  public ProdottoGenerico(double pa, double pv){
	  this.prezzoAcquisto = pa;
	  this.prezzoVendita = pv;
	  this.descrizione = "prodotto generico";
  }

	public void setPrezzoAcquisto(double p){this.prezzoAcquisto = p;}
	public double getPrezzoAcquisto(){return this.prezzoAcquisto;}
	
	public void setPrezzoVendita(double p){this.prezzoVendita = p;}
	public double getPrezzoVendita(){return this.prezzoVendita;}
	
	public void setIva(int p){this.iva = p;}
	public int getIva(){return this.iva;}

	public void setDescrizione(String p){this.descrizione = p;}
	public String getDescrizione(){return this.descrizione;}

	public double incasso(){
		return prezzoVendita - prezzoAcquisto + (((prezzoVendita - prezzoAcquisto) / 100) * iva);
	}

	public double incasso(double sconto){
		return incasso() - sconto;
	}

	public double ricavo(){
		return prezzoVendita - prezzoAcquisto;
	}
  
	public double ricavo(double sconto){
		return ricavo() - sconto;
	}

  public double calcolaIva(double prezzo){
    return ((prezzo / 100) * this.iva);
  }

  public String toString(){
    return ("Prodotto: "+ this.descrizione + "\nPrezzo d'acquisto: " + this.prezzoAcquisto + " euro + " + calcolaIva(this.prezzoAcquisto) + " di iva al " + iva + "%" + "\nPrezzo di vendita: " + this.prezzoVendita + " euro + " + calcolaIva(this.prezzoVendita) + " di cui iva al " + iva + "%" + "\nSconto applicato alla vendita: 0%" + "\nIncasso: " + incasso() + " di cui " + (calcolaIva(prezzoVendita)- calcolaIva(prezzoAcquisto)) + " a debito iva." + "\nRicavo netto: " + ricavo());
  }

}
