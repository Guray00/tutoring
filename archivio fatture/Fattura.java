/*
- numero fattura deve essere un progressivo per anno di riferimento es. 01/2021, 02/2021, etc..
-data fattura (LocalDataTime / string)
- importo della fattura (importo)
- cliente di riferimento
*/

/*
E' stato deciso di utilizzare una classe privata
di appoggio per gestire i vincoli sul numero della fattura
*/
class NumeroFattura {
  int anno;
  int numero;

  public NumeroFattura(int anno, int numero){
    this.anno = anno;
    this.numero = numero;
  }

  @Override
  public String toString(){
    return numero+"/"+anno;
  }
}

/*
classe che si occupa della gestione di una fattura
*/
public class Fattura {
  private NumeroFattura numero;
  private String data;
  private float importo;
  private Cliente cliente;

  // costruttore di default
  // nota: usiamo -1 per specificare che il dato non è significativo
  public Fattura(){
    numero = new NumeroFattura(-1, -1);
    data = "";
    importo = -1f;
    cliente = new Cliente();
  }

  // costruttore con parametri
  public Fattura(int numeroF, int anno, String data, float importo, Cliente cliente){
    numero = new NumeroFattura(numeroF, anno);
    this.data = data;
    this.importo = importo;
    this.cliente = cliente;
  }

  public NumeroFattura getNumero() {
		return numero;
	}
	public void setNumero(NumeroFattura numeroFattura) {
		this.numero = numeroFattura;
	}

	public String getData() {
		return data;
	}
	public void setData(String dataFattura) {
		this.data = dataFattura;
	}

	public Cliente getCliente() {
		return cliente;
	}
	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public float getImporto() {
		return importo;
	}
	public void setImporto(float importo) {
		this.importo = importo;
	}

  @Override
  public String toString(){
    return 
      "numero: "    + numero  + "\n" +
      "- data: "    + data    + "\n" +
      "- importo: " + importo + "\n" +
      "- cliente: " + cliente + "\n";
  }
}