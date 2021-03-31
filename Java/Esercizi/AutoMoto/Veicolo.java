
// LA CLASSE E' ASTRATTA!
public abstract class Veicolo{
  	protected String marca;
  	protected String modello;
  	protected int cilindrata;
  	protected String matricola;
  	protected int potenza;

    public abstract void generaMatricola();

    public String toString(){
      return "Marca: " + marca + "\tModello: " + modello + "\tCilindrata: " + cilindrata + "\tMatricola: " + matricola + "\tPotenza: " + potenza;
    }

  	public Veicolo(){
    	this.marca = "";
    	this.modello = "";
    	this.cilindrata = -1;
    	this.matricola = "";
      this.potenza = -1;
  	}

	public Veicolo(String modello, String marca, int cilindrata, int potenza){
		this.marca = marca;
    	this.modello = modello;
    	this.cilindrata = cilindrata;
    	this.matricola = "";
    	this.potenza = potenza;
	}


	public Veicolo(Veicolo o){
		this.marca = o.marca;
		this.modello = o.modello;
		this.cilindrata = o.cilindrata;
		this.matricola = o.matricola;
		this.potenza = o.potenza;
	}

	public String getMatricola(){
		return this.matricola;
	}

	public void setMatricola(String m){
		this.matricola = m;
	}


}