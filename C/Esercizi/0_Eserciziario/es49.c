/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF, For
*********************************************/

/*
49. Scrivere un algoritmo che visualizza i numeri naturali dispari da 3 a 21.
*/

#include <stdio.h>

int main(){

  for(int a=3; a<=21; a++){
    if(a%2 != 0){
      printf ("\n%d", a);
    }
  }

	return 0;
}