import java.util.Scanner;

public class es{

	public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);

    // chiedo a schermo quante ore ha lavorato
    System.out.println("Quante ore ha lavorato l'idraulico?");
    
    // faccio inserire le ore
    double ore = scanner.nextDouble();
    
    // chiedo a schermo per il materiale
    System.out.println("Quanto ha speso in materiale?");
    
    // faccio inserire il materiale
    double materiale = scanner.nextDouble();
    
    // costo materiale + ore * 40
    double spesa = materiale + (ore * 40);

    // se la spesa totale è maggiore o uguale a 100
    if (spesa >= 100) {
       // stampo a schermo la spesa
      System.out.println("La spesa totale è " + spesa + " euro");
    }

    // in tutti gli altri casi
    else {
       // stampo che la spesa è 100
      System.out.println("La spesa totale è 100 euro");
    }
    
	}
}