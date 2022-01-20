public class Moto extends Veicolo{
	
  	private static int count = 0;

	public Moto(){
		super();
	}

	public Moto(String m, String m2, int c, int p){
		super(m,m2,c,p);
	}

	public Moto(Moto o){
		super(o);
	}

	/* per le moto sarà un progressivo (diverso da quello delle auto) preceduto dalla lettera M (es.M1, M2 ecc.)*/
	public void generaMatricola(){
		count++;
		this.matricola = "M" + count;
	}
}