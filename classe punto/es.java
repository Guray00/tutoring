public class es {

	public static void main(String[] args) {
    
		Punto p1 = new Punto();
		Punto p2 = new Punto(2, 2);

    p1.setX(1.0f);
    p1.setY(1.0f);

    System.out.println(p1);
    System.out.println(p2);

    double d = p1.distanza(p2);

    System.out.println("La distanza tra i valori vale " + d);
    
	}

}
