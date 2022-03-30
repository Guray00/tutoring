#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  
  printf("Quale tabellina vorrestri mostrare? ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; i++){
    int prodotto = n*i;

    // \n per andare a capo, \t per allineare
    printf("%d * %d\t=  %d\n", n, i, prodotto);
  }
  
	return 0;

}