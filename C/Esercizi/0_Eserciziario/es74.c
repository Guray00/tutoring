
/*
74. Scrivere un algoritmo che, presi in input N valori interi (N > 0), calcoli quanti valori sono multipli di 3.
*/

#include <stdio.h>

int main(){
  int n;
  printf ("Quanti numeri vuoi inserire? ");
  scanf ("%d", &n);

	// salviamo il numero di multipli incontrati
  int m3=0;

	// chiediamo di inserire n numeri
  for (int i=0; i<n; i++){
    printf ("\ninserisci un numero: ");
    int a;
    scanf ("%d", &a);

		// per sapere se è multiplo di 3 basta vedere se
		// la divisione per 3 non da resto!
    if (a%3==0){
      m3++;
    }
  }
  printf ("i multipli di 3 inseriti sono: %d", m3);
	return 0;
}