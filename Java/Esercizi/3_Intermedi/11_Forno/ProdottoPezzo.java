public class ProdottoPezzo extends ProdottoForno{
  private float prezzo;
  private float iva;
  
  public String toString(){
    String info = super.toString();
    info+=( "\nprezzo: " + prezzo + "\niva: " + iva +"\n\n");
	return info;
  }

  public float prezzoFinale(){
    return (prezzo + ((prezzo * iva) / 100));
  }

  public ProdottoPezzo(){
    super();
    this.prezzo = 0;
    this.iva = 0;
  }

  public ProdottoPezzo(String codice, String nome, int giorniDurata, float prezzo, float iva){
    super(codice, nome, giorniDurata);
    this.prezzo = prezzo;
    this.iva = iva;
  }

  public ProdottoPezzo(ProdottoPezzo c){
    super(c);
    this.prezzo = c.prezzo;
    this.iva = c.iva;
  }
}