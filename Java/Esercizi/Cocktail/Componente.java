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

	public setNome(String n){
		this.nome = n;
	}

	public getNome(){
		return this.nome;
	}

	public setQuantita(int q){
		this.quantita = q;
	}

	public getQuantita(){
		return quantita;
	}

	public setCostoUnitario(int c){
		this.costoUnitario = c;
	}

	public getCostoUnitario(){
		return this.costoUnitario;
	}




}