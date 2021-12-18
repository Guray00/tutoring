public class Auto extends Veicolo{
  private static int count = 0;

  	public Auto(){
		super();
	}

	public Auto(String m, String m2, int c, int p){
		super(m,m2,c,p);
	}

	public Auto(Auto o){
		super(o);
	}

  public void generaMatricola(){
    count++;
    this.matricola = "A" + count;
  }
}