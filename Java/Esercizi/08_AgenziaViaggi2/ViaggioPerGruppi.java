public class ViaggioPerGruppi{
	private int min;
	private int max;

  public static float quotaGruppo = 10;

	public ViaggioPerGruppi(){
		super();
		min = -1;
		max = -1;
	}

	public ViaggioPerGruppi(String t, float c, ArrayList<Giorno> g, int min, int max){
		super(t, c, g);
    this.min = min;
    this.max = max;
	}

	public int getMin(){
		return this.min;
	}

	public int getMax(){
		return this.max;
	}

	public ViaggioPerGruppi(ViaggioPerGruppi o){
		super(o);
		this.min = o.min;
		this.max = o.max;
	}

  public float calcolaPrezzo(){
    return costo + (quotaFissa * giorni.size()) + quotaGruppo * max;
  }
}
