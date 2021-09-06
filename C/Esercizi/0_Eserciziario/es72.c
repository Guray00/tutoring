
/*
72. Scrivere un algoritmo che, presi in input N valori interi (N > 0), calcoli la somma dei numeri negativi e la media dei numeri positivi.
*/

#include <stdio.h>

int main(){

  int n;

  printf ("quanti numeri vuoi inserire? ");
  scanf ("%d", &n);

  int sn = 0;
  int mp = 0;
	int conta_positivi = 0;

  for (int i=0; i<n; i++){
    printf("inserisci un valore: ");
    int a;
    scanf ("%d", &a);

		// se è positivo calcolo la media, ciò viene fatto
		// salvando il numero di positivi incontrati e salvando
		// ogni volta la somma dei valori, in modo da ottenere poi 
		// media = somma / conta_positivi
    if (a>0){
      mp= mp+a;
			conta_positivi++;
    }
    else {
      sn=sn+a;
    }
  }

	mp = mp / conta_positivi;
  printf ("\nLa media dei numeri positivi è: %d", mp);
  printf ("\nLa somma dei numeri negativi è: %d", sn);

	return 0;
}