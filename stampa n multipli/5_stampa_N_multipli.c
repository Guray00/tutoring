#include <stdio.h>
#include <stdlib.h>


int main(){

  int numero, N;

  printf("inseire il valore del numero: ");
  scanf("%d", &numero);

  printf("inseire il valore di N: ");
  scanf("%d", &N);


  for (int i = 2; i<=N+1; i++){
    int prodotto = numero*i;
    printf("%d ", prodotto);
  }
  
	return 0;

}