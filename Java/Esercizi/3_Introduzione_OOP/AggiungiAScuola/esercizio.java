

public class esercizio{

	public static void main(String[] args){

		Scuola s = new Scuola("Alderighi");

    System.out.println("studenti prima: " + s.getNumeroStudenti());
    s.aggiungiStudenti(5);
    System.out.println("studenti dopo: " + s.getNumeroStudenti());
    s.aggiungiStudenti(5);
    System.out.println("studenti infine: " + s.getNumeroStudenti());
    s.setNome("Nuovo Nome");
    System.out.println(s.getNome());
  }
}