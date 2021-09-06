
/*
71. Scrivere un algoritmo che, presi in input N valori interi (N > 0), calcoli la somma dei numeri positivi e la somma dei valori assoluti dei numeri negativi.
*/

#include <stdio.h>

int main(){

 
	int n;
	printf ("Quanti numeri vuoi inserire? ");
	scanf("%d", &n);

	int sp = 0; // somma dei positivi
	int sn = 0; // somma dei negativi


	// inizializzazione;	condizione; iterazione
  for (int i=0; i < n; i++){

		printf("\nInserisci un numero: ");

		int tmp;
		scanf("%d", &tmp);
		
		// se il numero è positivo
		if (tmp>0){
      
			// sommare il numero ai numeri positivi (sp)
			sp = sp + tmp;
    }
    else {
      sn= sn + (tmp*(-1));
    }

  }

	printf("\n\nLa somma dei numeri positivi è: %d", sp);
	printf("\nLa somma del valore assoluto dei numeri negativi è: %d", sn);

	return 0;
}