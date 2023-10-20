import java.util.Scanner;

public class semplificareFrazioni {

    public static int mcd(Integer n1, Integer n2){
        if(n2 == 0) return n1;
        return mcd(n2, n1%n2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Numeratore: ");
        int numeratore = scanner.nextInt();

        System.out.print("Denominatore: ");
        int denominatore = scanner.nextInt();

        Integer mcd = mcd(numeratore, denominatore);

        if (mcd != 1){
            numeratore /= mcd;
            denominatore /= mcd;
            System.out.println(numeratore + "/" + denominatore);
        }else {
            System.out.format("Frazione %d/%d già ai minimi termini", numeratore, denominatore);
        }
    }
}