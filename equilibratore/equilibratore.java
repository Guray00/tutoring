import java.util.Scanner;

public class equilibratore{
    
    public static void main(String[] args) {
    
        //per prendere in ingresso i due numeri
        Scanner scanner = new Scanner(System.in);

        System.out.println("Inserisci il primo numero: ");
        Integer n1 = scanner.nextInt();

        System.out.println("Inserisci il secondo numero: ");
        Integer n2 = scanner.nextInt();

        Integer sum = n1 + n2;

        n1 = sum / 2;
        n2 = sum - n1;

        System.out.println("I due numeri sono stati equilibrati a " + n1 + " e " + n2);

    }

}
