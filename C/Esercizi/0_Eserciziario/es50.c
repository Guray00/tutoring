/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF, For
*********************************************/

/*
50. Scrivere un algoritmo che visualizza in ordine decrescente i numeri pari positivi inferiori a 50.
*/

#include <stdio.h>

int main(){

  for(int a=50; a>=0; a--){
    if (a%2==0){
      printf ("\n%d", a);
    }
  }

	return 0;
}