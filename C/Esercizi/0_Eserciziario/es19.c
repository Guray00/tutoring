/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
19. Scrivere l'algoritmo che, presi in input gli estremi a e b di un intervallo e un valore x, visualizzi il messaggio "Il valore è interno all'intervallo" se a ≤ x ≤ b altrimenti "Il valore è esterno all'intervallo".
*/

#include <stdio.h>

int main(){ 
	int a;
  int b;
  int x;
	
  printf ("inserire gli estremi dell'intervallo");
  scanf ("%d %d", &a, &b);

	printf ("inserire il valore x");
  scanf ("%d", &x);
	
	// per essere all'interno dell'intervallo deve essere 
	// più piccolo del valore massimo e più grande del valore
	// minimo

  if (x <= b && x >= a){
    printf ("Il valore è interno all'intervallo");
  }
	
  else {
    printf ("Il valore è esterno all'intervallo");
  }
  
	
	return 0;
}


