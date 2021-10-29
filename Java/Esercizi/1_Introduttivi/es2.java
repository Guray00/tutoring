/*
Assumendo che un anno sia costituito da 365 giorni, scrivere
un programma che:

- dichiari e inizializzi una variabile per il numero di minuti e 
  due per i numeri di anni e giorni;

- stampi il numero totale di secondi, di minuti e giorni.
*/



class es2 {

	// funzione che indica dove parte il programma
	public static void main(String[] args){


		// creiamo 3 variabili
  	int m = 30;
	 	int a = 3;
		int g = 12;

		// calcolo il numero totale di anni giorni e minuti
		int output_g = 365*a + g + (m / (60*24));  
		int output_m = output_g * 24 * 60;
		int output_s = output_m * 60;

		// mostro a schermo il risultato		
    System.out.println("giorni: "+output_g);  
    System.out.println("minuti: "+output_m);  
    System.out.println("secondi: "+output_s);  

	}		
}