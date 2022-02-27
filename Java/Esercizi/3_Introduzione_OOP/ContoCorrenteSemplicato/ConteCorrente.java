class ContoCorrente{
  private String proprietario;
  private double quantita;

  
  public ContoCorrente (String p, double q){
    proprietario = p;
    quantita = q;
    
  }
  // metodi SET ============================
  public void setProprietario(String p){
    proprietario = p;
  }

  public void setQuantita(double q){
    quantita = q;
  }
  // =======================================

  // metodi GET ============================
  public String getProprietario(){
    return proprietario;
  }

  public double getQuantita(){
    return quantita;
  }
  // =======================================
  
  
  public boolean prelievo (double p){
      if( (quantita - p) > 0){
        quantita = quantita - p;
        return true;
      }

      return false;
  }

  
  public void deposito (double p){
    quantita = quantita+ p;
  }
 
}