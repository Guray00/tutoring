import java.time.LocalDate;



public class Movimento {
  public double importo;
	public LocalDate data;
	public String tipologia;
	
	public Movimento(double importo, LocalDate data, String tipologia){
		//System.out.println("Stai creando il movimento!");
		this.importo = importo;
		this.data = data;
		this.tipologia = tipologia;
	}


	public void print(){
		System.out.println("[ importo: "+ this.importo + ", data: " + this.data + ", tipologia: " + this.tipologia +" ]");
	}


}