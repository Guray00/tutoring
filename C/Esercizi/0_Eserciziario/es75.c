
/*
75. Scrivere un algoritmo che, presi in input N valori interi (N > 0), calcoli quanti valori sono multipli di un numero scelto dall'utente.
*/

#include <stdio.h>

int main(){
  int n;
  int b;
	
  printf ("Quanti valori che vuoi inserire? ");
  scanf ("%d", &n);
  
	printf ("\nDi quale numero cerchi i multipli? ");
  scanf ("%d", &b);
  
	// contiamo i multipli di b
	int m=0;
  
	for (int i=0; i<n; i++){
    printf ("\ninserisci un numero: ");
    
		int a;
    scanf ("%d", &a);
    
		// se a è un multiplo di b
		if (a%b==0){
      m++;
    }
  }
  printf("\n\nI numeri multipli del numero che hai scelto sono: %d", m);
	return 0;
}