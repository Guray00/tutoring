/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
12. Scrivere l'algoritmo che, letto in input un valore numerico, dica se è positivo o negativo.
*/

#include <stdio.h>

int main(){ 
  float a;
  
	printf ("inserisci un numero");
  scanf ("%f", &a);

  if (a<0){
    printf ("numero negativo");
  } 	

	else if (a==0){
    printf ("numero uguale a 0");
  }

  else {
    printf ("numero positivo");
  }
	
  
	return 0;
}


