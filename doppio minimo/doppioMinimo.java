import java.lang.reflect.Array;
import java.util.Scanner;

public class doppioMinimo {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer min1 = 0;
        Integer min2 = 0;

        System.out.println("Inserisci un numero alla volta, quando vuoi terminare digita 0");

        //prendo il primo numero inserito come riferimento, sarà il mio primo minimo
        min1 = scanner.nextInt();

        while (true) {
            Integer temp = scanner.nextInt();
            if (temp == 0) {
                break;
            }
            if (temp < min1) {
                min2 = min1;
                min1 = temp;
            } else if (temp < min2) {
                min2 = temp;
            }
        }
        System.out.println(min1 + " " + min2);




    }  // fine main()
}
