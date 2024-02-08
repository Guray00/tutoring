public class Biblioteca {
  private Libro[] libri;
  private int limite;

  // variabile che conta quanti libri
  // sono già stati messi nella biblioteca
  private int cont;

  // costruttore senza parametri
  public Biblioteca(){
    limite = 100;
    libri = new Libro[limite];
    cont = 0;
  }

  // passi solo il limite
  public Biblioteca(int limite){
    this.limite = limite;
    libri = new Libro[limite];
    cont = 0;
  }

  // sia libri che il limite
  /*
  public Biblioteca(Libro[] libri, int limite){
    this.libri = libri;
    this.limite = limite;
  }*/

  public void aggiungiLibro(Libro libro){
    if(cont<limite){
      libri[cont] = libro;
      cont = cont + 1;
    }else{
      System.out.println("Libro non aggiunto");
    }
  }

  public void visualizzaCatalogo(){
    System.out.println("Il catalogo contiene " + cont + " libri:");
    
    // per ogni libro nel catalogo
    for(int i=0; i < cont; i++){
      // stampo le informazioni del libro
      System.out.println("- titolo: " + libri[i].getTitolo() + " Autore: " + libri[i].getAutore());
    }
    
  }
}