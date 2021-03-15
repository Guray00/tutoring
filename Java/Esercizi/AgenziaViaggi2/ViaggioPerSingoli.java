public class ViaggioPerSingoli extends Viaggio{

	public ViaggioPerSingoli(){
		super();
	}

	public ViaggioPerSingoli(String t, float c, ArrayList<Giorno> g){
		super(t, c, g);
	}

	public ViaggioPerSingoli(ViaggioPerSingoli c){
		super(c);
	}


	public float calcolaPrezzo(){
    	return costo + quotaFissa * giorni.size();
  	}
}