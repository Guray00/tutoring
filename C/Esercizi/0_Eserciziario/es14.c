/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
14. Scrivere un algoritmo che, letti in input due numeri interi, verifichi se il primo è multiplo del secondo.
*/

#include <stdio.h>

int main(){ 
	int a;
  int b;
  printf ("inserisci due valori ");
  scanf ("%d %d", &a, &b);
	
	// se non da resto allora il primo è multiplo
  if (a%b==0){
    printf ("i due numeri sono multipi");
  }

	// in tutti gli altri casi...
  else {
    printf ("i due numeri non sono multipli");
  }
  
	return 0;
}


