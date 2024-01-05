import java.util.Scanner;

public class es {
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      int dim;

      do{
        // chiedo all'utente quanto è grande il vettore
        System.out.print("Inserisci la dimensione del vettore: ");
        dim = scanner.nextInt();
      } while(dim<=0);

      // creo il vettore
      int[] vett = new int[dim];

      // prendiamo in ingresso i valori del vettore
      for (int i = 0; i < vett.length; i++) {
        System.out.print("Inserisci un valore: ");
        vett[i] = scanner.nextInt();
      }

      // stampre il contenuto del vettore
      for(int i = 0; i < vett.length; i++){
        System.out.print(vett[i] + " ");
      }
    }
}