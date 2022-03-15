import java.util.*;
import java.lang.Math;

public class JavaApplication {
    private static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        String c;
        
        System.out.println("Inserisci un carattere");
        c = input.nextLine();
        if (c.compareTo("a") >= 0 && c.compareTo("z") <= 0) {
            System.out.println("Carattere minuscolo");
        } else {
            if (c.compareTo("A") >= 0 && c.compareTo("Z") <= 0) {
                System.out.println("Carattere maiuscolo");
            } else {
                System.out.println("Non è un carattere");
            }
        }
    }
}
