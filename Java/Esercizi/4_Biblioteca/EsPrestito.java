import java.util.GregorianCalendar;

public class EsPrestito {

    public static void main (String[] args){

        Prestito p1 = new Prestito("Libro1", "A", new GregorianCalendar(2020, 10, 22), null);
        Prestito p2 = new Prestito("Libro2", "B", new GregorianCalendar(2020, 11, 22), null);
        Prestito p3 = new Prestito("Libro3", "C", new GregorianCalendar(2020, 12, 22), null);

        Biblioteca b = new Biblioteca("Biblioteca di Firenze");

    }

}

