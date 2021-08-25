/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf
*********************************************/

/*
Scrivere l'algoritmo che, ricevuto in input un orario attraverso tre le sue tre componenti (ore,
minuti e secondi), ne calcoli il valore totale in secondi.
*/



#include <stdio.h>


int main(){ 

	// creo le variabili in cui salvare secondi, minuti ed ore
  int secondi;
  int minuti;
  int ore;
  printf ("inserisci rispettivamente ore, minuti e secondi" );
  scanf ("%d %d %d", &ore, &minuti, &secondi);
  ore= ore*60*60;
  minuti= minuti*60;
  secondi= ore+minuti+secondi;
	printf ("orario in secondi=%d", secondi);
		return 0;
}