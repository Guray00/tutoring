
/*
76. Scrivere un algoritmo che prenda in input dei valori numerici finché l'utente inserisce il valore 0 e calcolarne la media.
*/

#include <stdio.h>

int main(){
	
	// il valore dell'utente, ll impostiamo a -1 per essere != 0
	// ed entrare nel while
  float vu = -1;

	// variabile in cui salviamo la media
  float m=0;

	// contiamo il numero dei valori inseriti
  float nv=0;

  while (vu!=0){
		printf ("inserisci un valore: ");
		scanf ("%f", &vu); 
  	
    m=m+vu;
		if(vu != 0) {
			nv++;
		}
  }
	
	m = m / nv;
  printf ("\nLa media è: %f", m);

	return 0;
}