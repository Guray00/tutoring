public class Atleta {
  private boolean visitaMedica;
  private String squadra;

  // costruttore di default
  public Atleta(){
    visitaMedica = false;
    squadra = "";
  }

  // costruttore con i parametri
  public Atleta(boolean visitaMedica, String squadra){
    this.visitaMedica = visitaMedica;
    this.squadra = squadra;
  }

  // costruttore solo con la squadra
  public Atleta(String squadra){
    this.squadra = squadra;
    this.visitaMedica = false;
  }

  // metodo che assegna una squadra a un atleta
  public void assegnaSquadra(String squadra){
    this.squadra = squadra;
  }

  // imposta la visita dell'atleta a true
  public void effettuaVisita(){
    this.visitaMedica = true;
  }

  @Override
  public String toString(){
    String str = "- Squdra: " + squadra + "\n- Visita: "+ visitaMedica+"\n";
    return str;
  }
  
}