public abstract class ProdottoForno{
  protected String codice;
  protected String nome;
  protected int giorniDurata;

  public abstract float prezzoFinale();

	public String toString(){
    	return  "Codice: " + codice + "\nnome: " + nome + "\nGiorniDurata: " + giorniDurata;
  	}


  public ProdottoForno(){
    this.codice = "";
    this.nome = "";
    this.giorniDurata = 0;
  }

  public ProdottoForno(String codice, String nome, int giorniDurata){
    this.codice = codice;
    this.nome = nome;
    this.giorniDurata = giorniDurata;
  }
  
  public ProdottoForno(ProdottoForno c){
    this.codice = c.codice;
    this.nome = c.nome;
    this.giorniDurata = c.giorniDurata;
  }


	public String getCodice(){
		return codice;
	}

	public String getNome(){
		return nome;
	}

	public int getGiorniDurata(){
		return giorniDurata;
	}

	
	public void setCodice(String c){
		codice = c;
	}

	public void setNome(String s){
		nome = s;
	}

	public void setGiorniDurata(int g){
		giorniDurata = g;
	}
}