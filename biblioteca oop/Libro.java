public class Libro {
  /*ATTRIBUTI*/
  private String titolo;
  private String autore;

  /*COSTRUTTORI*/
  public Libro(){
    titolo = "";
    autore = "";
  }

  // costruttore con parametri
  public Libro(String titolo, String autore){
    this.titolo = titolo;
    this.autore = autore;
  }
  
  /*getter*/
  public String getTitolo(){
    return this.titolo;
  }
  
  public String getAutore(){
    return this.autore;
  }

  /*getter*/
  public void setTitolo(String titolo){
    this.titolo = titolo;
  }

  public void setAutore(String a){
    autore = a;
  }

  
}