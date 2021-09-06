
/*
70. Scrivere un algoritmo che, presi in input due numeri interi N ed X (con N>0), visualizzi gli N numeri interi precedenti ad X in ordine crescente.
*/

#include <stdio.h>

int main(){

  int n;
  int x;

  printf ("inserisci due numeri interi");
  scanf ("%d %d", &n, &x);

	// scrivere in ordine crescente 3 numeri prima di -12

	// -15 -14 -13 
  for (int i= x-n; i<x; i++ ){
    printf ("\n%d", i);
  }
  printf ("\nsono i numeri ch precodono x");


	return 0;
}