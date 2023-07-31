import java.util.GregorianCalendar;

public class es {

    public static void main(String[] args){
        ProdottoPezzo p1 = new ProdottoPezzo("p1", "numero uno", new GregorianCalendar(2020,10,12), 5);
        ProdottoPeso  p2 = new ProdottoPeso("p2", "numero due", new GregorianCalendar(2020,11,12), 2, 3);
        ProdottoPezzo p3 = new ProdottoPezzo("p1", "numero tre", new GregorianCalendar(2020,10,12), 5);

        System.out.println(">> Equals check");
        System.out.println(p1.equals(p2) + " // false");
        System.out.println(p1.equals(p1) + " // true");
        System.out.println(p1.equals(p3) + " // true, falso positivo");

        Prodotti p = new Prodotti();

        p.aggiungi(p1);
        p.aggiungi(p2);
        p.aggiungi(p3);

        System.out.println(">> check prodotti");
        System.out.println(p.getPeso());
        System.out.println(p.getPrezzo());
        System.out.println();

        System.out.println("-> viene rimosso p1");
        p.rimuovi(p1);
        System.out.println(p.getPrezzo());

        System.out.println("-> si cerca p2");
        System.out.println(p.prodottoRicerca(p2));

        System.out.println(">> test scadenze");

        Prodotti scaduti = p.prodottiScadutiAl(new GregorianCalendar(2020, 9, 12));

        for (int i = 0; i < scaduti.getPrezzo().size(); i++){
            System.out.println(scaduti.getPrezzo().get(i).getCodice());
        }

    }
}