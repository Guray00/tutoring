/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf
*********************************************/

/*
9. Scrivere un algoritmo che, dato il prezzo di un prodotto, calcoli il prezzo scontato del 20%.
*/

#include <stdio.h>

int main(){ 
  float a;
  float b;
  printf ("inserire prezzo del prodotto");
  scanf ("%f", &a);
  b = a - (20*a)/100;
  printf ("prezzo scontato=%f", b);

	return 0;
}


