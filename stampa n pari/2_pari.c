#include <stdio.h>
#include <stdlib.h>


int main(){
  int N;

  printf("inserire il valore di N: ");
  scanf("%d", &N);

  for (int i = 0; i<N; i = i+2)
    {
      printf("%d ", i);
    }
	return 0;

}