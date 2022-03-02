#include <stdio.h>


int main(){ 

		// creo delle variabili in cui salvare il valore che prendo in input
		int a;
		int b;

		// chiedo a schermo un numero da raddoppiare
		printf ("inserisci il numero che vuoi raddoppiare ");
		scanf ("%d", &a); // chiedo in input il numero da inserire
		
		b= a*2; // raddoppio il valore
		printf ("\n%d\n", b);
		

		return 0;
}