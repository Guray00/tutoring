import java.util.GregorianCalendar;

public class ProdottoPezzo extends Prodotto {
  private int prezzo;

  public ProdottoPezzo(){
    super();
    this.prezzo = 0;
  }

  public ProdottoPezzo(String codice, String descrizione, GregorianCalendar dataDiScadenza, int prezzo){
    super(codice, descrizione, dataDiScadenza);
    this.prezzo = prezzo;
  }

  public ProdottoPezzo(ProdottoPezzo c){
    super(c);
    this.prezzo = c.prezzo;
  }

  public void setPrezzo(int p){
    this.prezzo = p;
  }

  public int getPrezzo(){
    return this.prezzo;
  }
}