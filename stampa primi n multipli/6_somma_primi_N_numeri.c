#include <stdio.h>
#include <stdlib.h>


int main(){
  int N;

  printf("inserire il valore di N: ");
  scanf("%d", &N);

  int somma = 0;

  for (int i = 0; i<N; i++)
    {
      somma = somma + i;
    }

  printf("La somma vale: %d", somma);
  
	return 0;
}