#include <stdio.h>
#include <stdlib.h>



int main(){
  int N;

  printf("inserire il valore N: ");
  scanf("%d", &N);

  // 13 11
  for (int i = N-1; i>=0; i = i-1)
    {
      // se è pari lo stampo
      if (i%2 == 0)
      {
        printf("%d ", i);
      }
    }

    
	return 0;
}