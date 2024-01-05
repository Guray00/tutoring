import java.util.Scanner;

public class es {
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      int dim;

      int l1, l2;

      System.out.print("Inserisci il limite inferiore: ");
      l1 = scanner.nextInt();

      do{
        System.out.print("Inserisci il limite superiore: ");
        l2 = scanner.nextInt();

        if (l2 < l1){
        System.out.println("Errore! Il limite superiore deve essere maggiore del limite inferiore\n");
        }
      } while(l2 < l1);
     
      do{
        // chiedo all'utente quanto è grande il vettore
        System.out.print("Inserisci la dimensione del vettore: ");
        dim = scanner.nextInt();
      } while(dim<=0);

      // creo il vettore
      int[] vett = new int[dim];

      // prendiamo in ingresso i valori del vettore
      for (int i = 0; i < vett.length; i++) {

        // tra l1 e l2
        do {
          System.out.print("Inserisci un valore tra "+l1+" e "+l2+": ");
          vett[i] = scanner.nextInt();

          if(vett[i]<l1 || vett[i]>l2){
            System.out.println("Errore! Inserire un numero compreso tra i due limiti\n");
          }
        } while (vett[i]<l1 || vett[i]>l2);

      }

      // stampre il contenuto del vettore
      for(int i = 0; i < vett.length; i++){
        System.out.print(vett[i] + " ");
      }
    }
}