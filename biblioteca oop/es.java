

public class es{

	public static void main(String[] args){
    Libro l1 = new Libro("Divina Commedia", "Dante");
    Libro l2 = new Libro("I promessi sposi", "Manzoni");

    Biblioteca b = new Biblioteca(10);

    b.aggiungiLibro(l1);
    b.aggiungiLibro(l2);

    b.visualizzaCatalogo();
	}
}