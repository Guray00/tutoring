/*
dato un array, stampare a schermo la media
*/


public class Esercizio{

	public static void main(String[] args){

        // voglio fare la somma dei primi 10 numeri
        int a[] = {1, 6, 4, 12, 4};


        float risultato = 0;
        for (int i = 0; i < a.length; i++){
            risultato = risultato + a[i];
        }

        risultato = risultato/a.length;

        System.out.println(risultato);
 	}
}