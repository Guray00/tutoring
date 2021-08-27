/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf
*********************************************/

/*
8. Scrivere un algoritmo che, date le età di tre persone, calcoli l’età media.
*/

#include <stdio.h>

int main(){ 
	float a;
  float b;
  float c;
  printf ("inserisci l'età delle tre persone");
  scanf ("%f %f %f", &a, &b, &c);
  
	float media;
  media = (a+b+c)/3;

  printf ("media=%f", media);
	return 0;
}


