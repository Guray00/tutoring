public class Scultura extends Opera {
	private float base;
	private float altezza;
	private float profondita;

	public Scultura(){
		super();
		base = -1;
		altezza = -1;
		profondita = -1;
	}

	public Scultura(String titolo, String artista, int quotazione, float base, float altezza, float profondita){
		super(titolo, artista, quotazione);
		this.altezza = altezza;
		this.base = base;
		this.profondita = profondita;
	}

	public Scultura (Scultura o){
		super(o);
		this.base = o.base;
		this.altezza = o.altezza;
		this.profondita = o.profondita;
	}

	public float getIngombro(){
		return base*altezza*profondita;
	}
}