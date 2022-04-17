#include <stdio.h>
#include <stdlib.h>


int main(){
  int N, A, somma;

  somma = 0;
  
  printf("inserire il valore di N: ");
  scanf("%d", &N);

  printf("inserire il valore di A: ");
  scanf("%d", &A);
  
  for (int i=0; i<N; i=i+1)
    {
      int numero;

      printf("inserire il numero: ");
      scanf("%d", &numero);

      if (numero%A == 0){
        // lo contiamo!
        somma = somma + 1;
      }
      
    }
	return 0;
}