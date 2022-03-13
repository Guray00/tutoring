import java.util.*;
import java.lang.Math;

public class JavaApplication {
    private static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int base, altezza, area;
        
        System.out.println("Inserisci la base");
        base = input.nextInt();
        System.out.println("Inserisci l'altezza");
        altezza = input.nextInt();
        area = base * altezza;
        System.out.println("L'area del rettangolo vale " + area);
    }
}
