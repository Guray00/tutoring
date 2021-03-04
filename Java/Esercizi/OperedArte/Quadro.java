public class Quadro extends Opera {
	private float base;
	private float altezza;

	public Quadro(){
		super();
		base = -1;
		altezza = -1;
	}

	public Quadro(String titolo, String artista, int quotazione, float base, float altezza){
		super(titolo, artista, quotazione);
		this.altezza = altezza;
		this.base = base;
	}

	public Quadro (Quadro o){
		super(o);
		this.base = o.base;
		this.altezza = o.altezza;
	}

	public float getIngombro(){
		return base*altezza;
	}
}