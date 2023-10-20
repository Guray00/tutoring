import java.util.Scanner;

public class cesare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Input: ");

        String input = scanner.nextLine();

        //le stringhe in java sono immutabili, quindi dobbiamo necessariamente crearne una nuova che rimpiremo mano a mano
        String output = "";

        for (int i = 0; i < input.length(); i++) {
            if (!Character.isLetter(input.charAt(i)) ){
                //se non è una è una lettera
                output += input.charAt(i);
                continue;
            }else {
                //ricavo il nuovo carattere
                int newChar = input.charAt(i) + 3;
                output += (char) newChar;
            }
        }
        System.out.println(output);
    }
}
