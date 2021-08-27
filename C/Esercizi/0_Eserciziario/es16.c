/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
16. Scrivere l'algoritmo che, dati due numeri, calcoli la somma se sono entrambi positivi, il prodotto altrimenti.
*/

#include <stdio.h>

int main(){ 
  int a;
  int b;
  int c;
	
  printf ("inserisci due numeri");
  
	scanf ("%d %d", &a, &b);
  if (a>0 && b>0){
    c= a + b;
    printf ("somma=%d", c);
  }
  else {
    c = a * b;
    printf ("prodotto=%d", c);
  }
	return 0;
}


