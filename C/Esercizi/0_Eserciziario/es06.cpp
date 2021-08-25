/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf
*********************************************/

/*
6. Scrivere l'algoritmo che, dati due numeri a e b (con a < b), calcoli l'ampiezza dell'intervallo (a, b) e il prodotto degli estremi
*/

#include <stdio.h>

int main(){ 
  int a;
  int b;
  int diff;
  int prod;

  printf ("inserisci rispettivamente i valori di a e b con b>a ");
  scanf ("%d %d", &a, &b);

  diff= b-a;
  prod= a*b;

  printf ("differenza=%d prodotto=%d", diff, prod);
	return 0;
}
