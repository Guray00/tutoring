public class ProdottoPrezzo extends ProdottoForno{
  private float prezzo;
  private float iva;
  
  public String toString(){
    String info = "";
    return info=( "\nprezzo: " + prezzo + "\niva: " + iva );
  }

  public float prezzoFinale(){
    return (prezzo + ((prezzo * iva) / 100));
  }

  public ProdottoPrezzo(){
    super();
    this.prezzo = 0;
    this.iva = 0;
  }

  public ProdottoPrezzo(String codice, String nome, int giorniDurata, float prezzo, float iva){
    super(codice, nome, giorniDurata);
    this.prezzo = prezzo;
    this.iva = iva;
  }

  public ProdottoPrezzo(ProdottoPrezzo c){
    super(c);
    this.prezzo = c.prezzo;
    this.iva = c.iva;
  }
}