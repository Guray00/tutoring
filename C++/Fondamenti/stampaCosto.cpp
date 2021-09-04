#include <stdio.h>

/*
scrivere un programma che chiede il costo di un prodotto
a schermo e lo mostra
*/

int main(){ 
    
		// creiamo una variabile in cui salvare il valore
		int a;
		
		// stampiamo a schermo la richiesta del valore
	  printf("Inserisci il valore del prodotto ");
    scanf ("%d", &a); //richiediamo in input il valore
    
		// stampiamo a schermo il valore inserito
		printf ("%d", a);

		return 0;
}