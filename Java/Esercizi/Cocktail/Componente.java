public class Componente{
	private String nome;
	private int quantita;
	private float costoUnitario;

	public Componente(){
    this.nome = "";
    this.quantita = 0;
    this.costoUnitario = 0;
  }

  public Componente(String nome, int quantita, float costoUnitario){
    this.nome = nome;
    this.quantita = quantita;
    this.costoUnitario = costoUnitario;
  }

  public Componente(Componente c){
    this.nome = c.nome;
    this.quantita = c.quantita;
    this.costoUnitario = c.costoUnitario;
  }

	public void setNome(String n){
		this.nome = n;
	}

	public String getNome(){
		return this.nome;
	}

	public void setQuantita(int q){
		this.quantita = q;
	}

	public int getQuantita(){
		return quantita;
	}

	public void setCostoUnitario(int c){
		this.costoUnitario = c;
	}

	public float getCostoUnitario(){
		return this.costoUnitario;
	}




}