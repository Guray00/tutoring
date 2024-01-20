/*
Scrivere una classe Rettangolo con un costruttore per larghezza e altezza. Costruire poi un metodo calcolaArea() che consente di calcolare l'area del rettangolo e un metodo print che mostri a schermo le sue caratteristiche.
*/

public class es{

	public static void main(String[] args){

    Rettangolo r1 = new Rettangolo(3, 2.4);
    System.out.println(r1);

    r1.setBase(123);
    System.out.println(r1.getBase());


	}
}