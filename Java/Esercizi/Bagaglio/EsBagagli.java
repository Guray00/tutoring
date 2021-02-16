import java.util.ArrayList;

public class EsBagagli {

        public static void main (String[] args){
            Bagaglio b1 = new Bagaglio(15, "Bagaglio 1");
            Bagaglio b2 = new Bagaglio(15, "Bagaglio 2");
            Bagaglio b3 = new Bagaglio(26, "Bagaglio 3");
            Bagaglio b4 = new Bagaglio(27, "Bagaglio 4");
            Bagaglio b5 = new Bagaglio(28, "Bagaglio 5");


            ArrayList<Bagaglio> bagagli = new ArrayList<Bagaglio>();
            Volo v = new Volo ("BA2490", bagagli);

            System.out.println("Supplemento: " + v.supplementi());
            System.out.println("====================");
            System.out.println(v.numeroBagagli(true));
            System.out.println();
            System.out.println();

        }
}
