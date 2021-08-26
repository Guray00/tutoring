/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf
*********************************************/

/*
7. Scrivere l'algoritmo che, dati due numeri interi x e y, calcoli il risultato e il resto della divisione
intera tra x e y.
*/

#include <stdio.h>

int main(){ 
  float x;
  float y;
	
  float div;
  float resto;
	
  printf ("inserire rispettivamente i valori di x e y");
  scanf ("%f %f", &x, &y);
	
  div= x/y;
  resto= (int)x % (int)y;
  printf ("divisione=%f resto=%f", div, resto);
	return 0;
}


