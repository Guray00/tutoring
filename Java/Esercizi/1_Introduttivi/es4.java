/*
Supponiamo di dover dare un resto x euro, usando solo monete da:

- 1, 2 euro
- 50, 20, 10, 5,2,1

Scrivee un programma che:
	- dichiari e inizializzi una variabile per il resto
 	- calcoli il numero massimo di monete per ciascun tipo in modo da usare il minor numero possibile di monete per dare il resto
	- Per ogni tipo di moneta il numero di monete usate
*/

class es1 {

	// funzione che indica dove parte il programma
	public static void main(String[] args){
    
		double importo = 586; // centesimi
    int monete_2_euro = (int)(importo / 200);
		importo = importo % 200;

		int monete_1_euro = (int)(importo / 100);
		importo = importo % 100;

    int monete_50_cent = (int)(importo / 50);
    importo = importo % 50;

		int monete_20_cent = (int)(importo / 20);
    importo = importo % 20;

		int monete_10_cent = (int)(importo / 10);
    importo = importo % 10;

		int monete_5_cent = (int)(importo / 5);
    importo = importo % 5;

		int monete_2_cent = (int)(importo / 2);
    importo = importo % 2;

		int monete_1_cent = (int)(importo / 1);
    importo = importo % 1;

		// stampe delle monete utilizzate
		System.out.println("Monete da 2 euro: "+monete_2_euro);
		System.out.println("Monete da 1 euro: "+monete_1_euro);
		System.out.println("Monete da 50 cent: "+monete_50_cent);
		System.out.println("Monete da 20 cent: "+monete_20_cent);
		System.out.println("Monete da 10 cent: "+monete_10_cent);
		System.out.println("Monete da  5 cent: "+monete_5_cent);
		System.out.println("Monete da  2 cent: "+monete_2_cent);
		System.out.println("Monete da  1 cent: "+monete_1_cent);

		// .... 
  
	}		
}