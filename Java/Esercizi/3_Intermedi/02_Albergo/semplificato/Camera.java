// numero, tipologia (stringa), occupata (bool)

public class Camera{
  private int numero;
  private String tipologia;
  private boolean occupato;	


	Camera(){
		numero = -1;
		tipologia = null;
		occupato = false;
	}

	Camera(int numero, String tipologia, boolean occupato){
		this.numero = numero;
		this.tipologia = tipologia;
		this.occupato = occupato;
	}


	public void setNumero(int n){
		this.numero = n;
	}

	public int getNumero(){
		return this.numero;
	}

	public void setTipologia(String t){
		this.tipologia = t;
	}


	public String getTipologia(){
		return this.tipologia;
	}

	public void setOccupato(boolean o){
		occupato = o;
	}

	public boolean getOccupato(){
		return occupato;
	}


}