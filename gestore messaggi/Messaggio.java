/*
- testo (stringa)
- mittente (stringa)
- destinatario (stringa)
- data (LocalTime / stringa)
*/

public class Messaggio {
  private String testo;
  private String mittente;
  private String destinatario;
  private String data;

  // costruttore di default
  public Messaggio(){
    testo = "";
    mittente = "";
    destinatario = "";
    data = "";
  }

  // costruttori con parametri
  public Messaggio(String testo, String mittente, String destinatario, String data){
    this.testo = testo;
    this.mittente = mittente;
    this.destinatario = destinatario;
    this.data = data;
  }

  // modifica il testo
  public void setTesto(String testo){
    this.testo = testo;
  }

  // restituisce il testo
  public String getTesto(){
    return this.testo;
  }

  
  public void setMittente(String mittente){
    this.mittente = mittente;
  }

  public String getMittente(){
    return this.mittente;
  }


  public void setDestinatario(String d){
    destinatario = d;
  }

  public String getDestinatario(){
    return destinatario;
  }


  public void setData(String data){
    this.data = data;
  }

  public String getData(){
    return this.data;
  }

  // [data] [mittente] => [destinatario]: [testo]
  public void print(){
    System.out.println("["+data+"] ["+mittente+"] => ["+destinatario+"]: "+testo);
  }
}