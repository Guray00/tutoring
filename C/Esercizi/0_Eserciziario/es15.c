/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
16. Scrivere l'algoritmo che, dati due numeri, calcoli la somma se sono entrambi positivi, il prodotto
altrimenti.
*/

#include <stdio.h>

int main(){ 
  int a;
  int b;
  printf ("inserisci un numero");
  scanf ("%d", &a);

  if (a%2==0){
    b= 2 * a;
    printf ("doppio=%d", b);
  }
  else{
    b= 3 * a;
    printf ("triplo=%d", b);
  }
	return 0;
}


