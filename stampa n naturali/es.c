#include <stdio.h>
#include <stdlib.h>


int main(){

  int n;
  printf("Quanti numeri vuoi vedere? ");
  scanf("%d", &n);
  
  for(int i = 0; i<=n; i = i+1)
  {
    printf("%d\n", i);
  }
  
	return 0;

}