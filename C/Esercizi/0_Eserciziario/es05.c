/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf
*********************************************/

/*
5. Scrivere un algoritmo che calcoli l'area di un trapezio, note le misure delle basi e dell'altezza.
*/


#include <stdio.h>

int main(){ 
  float B;
  float b;
  float h;
  float A;

  printf ("inserisci rispettivamente la lunghezza della base maggiore, base minore ed altezza ");
	
  scanf ("%f %f %f", &B, &b, &h);
	
  A= (B+b)*h/2;
  printf ("area=%f", A);
	return 0;
}