#include <stdio.h>
#include <stdlib.h>


int main(){

  int N, A;

  printf("inserire il valore di N: ");
  scanf("%d", &N);

  // chiedo il numero rispetto al quale devo
  // cercare i multipli
  printf("inserire il valore di A: ");
  scanf("%d", &A);

  for (int i = A+1; i<N; i++)
    {
      if (i%A == 0)
      {
        printf("%d ", i);
      }
    }
	
    
    
  return 0;

}