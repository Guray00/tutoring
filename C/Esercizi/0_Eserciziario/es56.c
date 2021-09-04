/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF, For
*********************************************/

/*
56. Scrivere un algoritmo che visualizza tutti i numeri naturali inferiori al valore assoluto di un
numero scelto dall'utente.
*/

#include <stdio.h>

int main(){

  int a;
  printf ("inserisci un valore ");
  scanf ("%d", &a);
  
	if (a<0){
    a= a*(-1);
  }
  for (int i = 0; i<a; i++){
    printf ("\n%d", i);
  }


	return 0;
}