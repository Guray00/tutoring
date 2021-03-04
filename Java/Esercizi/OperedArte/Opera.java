public abstract class Opera{

	private String titolo;
	private String artista;
	private int quotazione;

	// costruttore di default
	public Opera(){
		titolo = "";
		artista = "";
		quotazione = -1;
	}

	// costruttore con parametri
	public Opera(String t, String a, int q){
		titolo = t;
		artista = a;
		quotazione = q;
	}

	// costruttore di copia
	public Opera(Opere o){
		titolo = o.titolo;
		artista = o.artista;
		quotazione = o.quotazione;
	}

	public int getCosto(){
		return this.quotazione;
	}

	public String getArtista(){
		return artista;
	}

	// dovrà essere implementata nelle classi derivate
	public abstract float getIngombro();

	public String toString(){
		String tmp = "Titolo: "+titolo+" Artista: "+artista+ " Quotazione: "+quotazione;
		return tmp;
	}
}