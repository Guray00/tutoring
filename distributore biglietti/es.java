

public class es{

	public static void main(String[] args){


   DistributoreBiglietti distributore = new DistributoreBiglietti(785,"Barolo",100,true,2.70);
    
    do{
      System.out.println(distributore);
      System.out.println();
      // chiediamo quanti biglietti vuole comprare
      int n = InputReader.readInteger("Quanti biglietti vuoi comprare? ");
      System.out.println(distributore.vendi(n) + "\n");

      // chiediamo fino a quando non finiscono i biglietti
    } while(distributore.getNBiglietti() != 0);

    // i biglietti sono finiti
    int ricarica = InputReader.readInteger("Quanti biglietti vuoi ricaricare? ");
    distributore.ricarica(ricarica);

    System.out.println("\n" + distributore);
    distributore.setNonFunziona();
    System.out.println("\n" + distributore);
    
    
	}
  
}