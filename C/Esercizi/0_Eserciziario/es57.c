
/*
57. Scrivere un algoritmo che visualizza in ordine crescente tutti i numeri naturali compresi tra due numeri scelti dall'utente (estremi inclusi).
*/

#include <stdio.h>

int main(){

  int inizio;
  int fine;
	
  printf ("inserisci l'inizio dell'intervallo: ");
  scanf ("%d", &inizio); 
  printf ("\ninserisci la fine dell'intervallo: ");
  scanf ("%d", &fine);
  
  for (int i=inizio; i<=fine; i++){
    printf ("\n%d", i);
  }


	return 0;
}