class Scuola {
  private String nome;
  private int numero_studenti;

  // se passo sia nome che numero studenti
  public Scuola (String nome, int numero_studenti){
    this.nome = nome;
    this.numero_studenti = numero_studenti;
  }

  // se passo solo il nome!
  public Scuola (String nome){
    this.nome = nome;
    this.numero_studenti = 0;
  }

  public String getNome(){
    return this.nome;
  }

  public int getNumeroStudenti(){
    return this.numero_studenti;
  }

  public void setNome(String n){
    nome = n;
  }

  public void setNumeroStudenti(int n){
    numero_studenti = n;
  }

  public void aggiungiStudenti(int n){
    numero_studenti += n;
  }
  
}