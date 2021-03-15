import java.util.ArrayList;

public abstract class Viaggio {

	protected String titolo;
	protected float costo;
	protected ArrayList<Giorno> giorni;
  	public static float quotaFissa = 10;

  	public abstract float calcolaPrezzo();

	public Viaggio(){
		titolo = "";
		costo = -1;
		giorni = new ArrayList<Giorno>();
	}

	public Viaggio(String t, float c, ArrayList<Giorno> g){
		titolo = t;
		costo = c;
		giorni = g;
	}

	public Viaggio(Viaggio o){
		titolo = o.getTitolo();
		costo = o.getCosto();
		giorni = o.getGiorni();
	}

	public String getTitolo(){
		return this.titolo;
	}
	
	public float getCosto(){
		return this.costo;
	}

	public ArrayList<Giorno> getGiorni(){
		return this.giorni;
	}

	// Due oggetti di tipo Viaggio sono considerati uguali se hanno lo stesso titolo. 
	public boolean equals(Viaggio v){
		if (v.getTitolo().equals(this.titolo)){
			return true;
		}

		return false;
	}


	// l’aggiunta di un giorno ad un viaggio (se non presente);
  public boolean aggiungiGiorno(Giorno g){
    for(int i = 0; i < giorni.size(); i++){
      if(giorni.get(i).equal(g)){
        return false;
      }
    }
    giorni.add(g);
    return true;
  }

  public boolean rimozioneGiorno(Giorno g){
    for(int i = 0; i < giorni.size(); i++){
      if(giorni.get(i).equal(g)){
        giorni.remove(g);
        return true;
      }
    }
    return false;
  }
}