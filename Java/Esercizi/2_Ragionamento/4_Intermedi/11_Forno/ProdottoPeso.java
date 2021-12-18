public class ProdottoPeso extends ProdottoForno{
  private float prezzoAlKg;
  private float pesoAlKg;
  private float iva;

  public String toString(){
    String info = super.toString();
	info += ( "\nprezzoAlKg: " + prezzoAlKg + "\npesoAlKg: " + pesoAlKg + "\niva: " + iva );
	return info;
  }
  
  public float prezzoFinale(){
    return (prezzoAlKg * pesoAlKg + (((prezzoAlKg * pesoAlKg) * iva) / 100));
  }

  public ProdottoPeso(){
    super();
    this.prezzoAlKg = 0;
	this.pesoAlKg = 0;
    this.iva = 0;
  }

  public ProdottoPeso(String codice, String nome, int giorniDurata, float prezzoAlKg, float pesoAlKg, float iva){
    super(codice, nome, giorniDurata);
    this.prezzoAlKg = prezzoAlKg;
	  this.pesoAlKg = pesoAlKg;
    this.iva = iva;
  }

  public ProdottoPeso(ProdottoPeso c){
    super(c);
    this.prezzoAlKg = c.prezzoAlKg;
	  this.pesoAlKg = c.pesoAlKg;
    this.iva = c.iva;
  }

  public float getIva(){
	  return this.iva;
  }

  public float getPesoAlKg(){
	  return this.pesoAlKg;
  }

  public float getPrezzoAlKg(){
	  return this.prezzoAlKg;
  }
}