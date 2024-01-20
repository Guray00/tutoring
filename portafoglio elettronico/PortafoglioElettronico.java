public class PortafoglioElettronico {
  private String codicePIN;
  private boolean attivo;
  private double budgetMassimo;
  private double creditoResiduo;
  private  double spesaTotale;

  public PortafoglioElettronico(String codicePIN, double budgetMassimo) {
    super();
    this.codicePIN = codicePIN;
    this.budgetMassimo  = budgetMassimo;
    this.creditoResiduo = budgetMassimo;
    this.attivo = false;
    this.spesaTotale = 0;
  }

  public String getCodicePIN(){ return codicePIN;}
  public boolean getAttivo()  {return attivo;}
  public double getBudgetMassimo() {return budgetMassimo;}
  public double getCreditoResiduo(){ return creditoResiduo;}
  public double getSpesaTotale()   {return spesaTotale;}

  public void attiva() {
    attivo = true;
  }

  public void disattiva() {
    attivo=false;
  }


  public boolean acquista(String codicePIN, double prezzo) {
    //controllo se this.codicePIN è uguale a quello inserito e se il prezzo è <= al credito residuo
    if(this.codicePIN == codicePIN && prezzo <= this.creditoResiduo && attivo == true) {
      creditoResiduo = creditoResiduo - prezzo;
      return true;
    }else {
    return false;
    }
  }

  public double ricarica(double nRicarica) {
    // se il credito residuo non sfora
    if(creditoResiduo+nRicarica <= budgetMassimo){
      creditoResiduo = creditoResiduo + nRicarica;
    } 
    // se il credito invece sfora
    else {
      creditoResiduo = budgetMassimo;
    }

    return creditoResiduo;
  }

  public boolean verificaAcquisto(double prezzoUnitario, int quantita) {
    if(quantita*prezzoUnitario <= this.creditoResiduo) {
      return true;
    }
    else {
      return false;
    }
  }
}
