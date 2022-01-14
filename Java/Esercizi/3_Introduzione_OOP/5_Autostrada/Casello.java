
public class Casello {
	private int num;
	private String tipo;
	private double distanza;
  
	public Casello(int num, String tipo, double distanza) {
		this.num = num;
		this.tipo = tipo;
		this.distanza = distanza;
	}
  
	public int getNum() {
		return num;
	}
	public void setNum(int num) {
		this.num = num;
	}
	public String getTipo() {
		return tipo;
	}
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	public double getDistanza() {
		return distanza;
	}
	public void setDistanza(double distanza) {
		this.distanza = distanza;
	}
	public String toString () {
		return "\nCasello "+num+":\nTipo: "+tipo+"\nDistanza: "+distanza;
	}
}
