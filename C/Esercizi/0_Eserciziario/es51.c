/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF, For
*********************************************/

/*
51. Scrivere un algoritmo che visualizza il quadrato dei numeri naturali compresi tra 2 a 20.
*/

#include <stdio.h>

int main(){

	for (int a=2; a<=20; a++){
    int A = a*a;
    printf("\n%d", A);
  }

	return 0;
}