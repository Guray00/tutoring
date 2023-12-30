
public class DistributoreBiglietti {
 private int codice;
 private String nomeF;
 private int nBiglietti;
 private boolean stato;
 private double costo;
 
 //costruttore
  public DistributoreBiglietti(int codice, String nomeF, int nBiglietti, boolean funziona, double costo) {
  	// super();
  	this.codice = codice;
  	this.nomeF = nomeF;
  	this.nBiglietti = nBiglietti;
  	this.stato = funziona;
  	this.costo = costo;
  }
  
  public int getCodice() {
	  return codice;
  }
  
  public String getNome() {
	  return nomeF;
  }
  
  public int getNBiglietti() {
	  return nBiglietti;
  }
  
  public boolean getStato() {
	  return stato;
  }

	public void setFunziona() {
		this.stato = true;
    System.out.println("Il distributore funziona.");
	}

	public void setNonFunziona() {
		this.stato = false;
    System.out.println("Il distributore non funziona.");
	}
  public double getCosto() {
	  return costo;
  }
 
  public String toString() {
	  return ("codice: "+codice+"\nnome della fermata: "+nomeF+"\nnumero dei biglietti: "+nBiglietti+"\ncosto: "+costo+"\nfunziona: " + stato);
	  }


  // aggiungo come disponibili i biglietti specificati
  public void ricarica(int n) {
    nBiglietti = nBiglietti + n;
  }
  
  public String vendi(int n) {
    // caso di biglietti negativi
    if (n < 0){
      return ("Non è possibile comprare un numeri di biglietti negativo.\n");
    }
    
	  //controllare se ci sono abbastanza biglietti
	  //se ci sono tutti i biglietti richiesti stampare il prezzo totale
	  if(n <= nBiglietti) {
      nBiglietti = nBiglietti - n;  

      // se non ho più biglietti il distributore è fermo
	   return ("L'importo da pagare per "+n+" biglietti è di: "+(this.costo*n));
	  } else {
	   return "Il distributore non ha abbastanza biglietti";
	  }
  }

  // funzione che ripara il distributore
  public void setRipara() {
	  //controllare se il distributore dei iglietti fuziona
	  if(stato==true) {
		  System.out.println("Il distributore funziona, non serve ripararlo."); 
    }

    this.stato = true;
  }
}
