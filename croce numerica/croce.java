import java.util.Scanner;

public class croce {
    public static void  main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("input: ");

        Integer len = scanner.nextInt();

        for(int i = 1; i <= len; i++) {
            for(int j = 1; j <= len; j++) {
                if(i == j || i + j == len + 1) {
                    System.out.print(i + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }

    }
}
