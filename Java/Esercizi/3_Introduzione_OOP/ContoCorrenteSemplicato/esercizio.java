/*

definire la classe conto corrente con i campi:
- proprietari
- quantità

e tutti i metodi get e set, costruttore e metodi
per fare il versamento e il prelievo

*/


public class esercizio{

	public static void main(String[] args){

		ContoCorrente c = new ContoCorrente("Pippo", 5);

    System.out.println(c.getQuantita());
    c.prelievo(6);
    System.out.println(c.getQuantita());
    c.prelievo(4);
    System.out.println(c.getQuantita());
    c.deposito(10);
    System.out.println(c.getQuantita());
    
	}
}