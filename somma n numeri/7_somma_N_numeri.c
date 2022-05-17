#include <stdio.h>
#include <stdlib.h>


int main(){

  int N;

  printf("inserire il valore di N: ");
  scanf("%d", &N);

  int somma = 0;

  for (int i = 0; i<N; i++)
    { 
      int numero;

      // chiedo il numero di cui voglio fare la somma
      printf("inserire un numero: ");
      scanf("%d", &numero);

      somma = somma + numero;
    }

  printf("la somma è di %d ", somma);

	return 0;
}