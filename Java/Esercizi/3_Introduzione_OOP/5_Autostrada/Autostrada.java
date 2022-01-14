
import java.util.ArrayList;

public class Autostrada {

  private ArrayList<Casello> caselli;
  private String tipo_veicolo;
  private int casello_veicolo;

  public Autostrada(){
    caselli = new ArrayList<Casello>();
    tipo_veicolo = null;
    casello_veicolo = -1;
  }

  // (dati di un casello) => 
  public boolean aggiungiCasello(String t, double d){

    if (d < 0){
      return false;
    }          

    Casello tmp = new Casello(caselli.size(), t, d);
    caselli.add(tmp);
    
    return true;
  }

  
  public boolean ingresso(int casello, String tipo){
    //tipo = tipo.toLowerCase();
    
    if (casello < 0 || casello > caselli.size() || (tipo != "A" && tipo != "B" && tipo != "C") || casello_veicolo != -1){
      return false;
    }

    tipo_veicolo=tipo;
    casello_veicolo = casello;
    
    return true;
    
  }

  public double uscita(int casello){

    if(casello < casello_veicolo || casello > caselli.size() || casello_veicolo == -1){

      return -1;
    }
    double importo = 0;

    for (int i = casello_veicolo+1; i <= casello; i++){

      double tariffa = 1;
      Casello attuale = caselli.get(i);

      // selezioniamo la tariffa corretta
      if (attuale.getTipo() == "pianura" && tipo_veicolo == "A"){
        tariffa = 0.09862;
      }

      else if (attuale.getTipo() == "pianura" && tipo_veicolo == "B"){
        tariffa = 0.14864;
      }

      else if (attuale.getTipo() == "pianura" && tipo_veicolo == "C"){
        tariffa = 0.017530;
      }

      else if (attuale.getTipo() == "montagna" && tipo_veicolo == "A"){
        tariffa = 0.11414;
      }

      else if (attuale.getTipo() == "montagna" && tipo_veicolo == "B"){
        tariffa = 0.17426;
      }

      else if (attuale.getTipo() == "montagna" && tipo_veicolo == "C"){
        tariffa = 0.20629;
      }

      importo += tariffa*(attuale.getDistanza()); 
    }

    return importo;
  }
  
}