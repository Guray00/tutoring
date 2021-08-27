/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
18. Scrivere l'algoritmo che, dati base e altezza di un triangolo, calcoli l'area se sono entrambi positivi, oppure stampi il messaggio "Valori di input errati".
*/

#include <stdio.h>

int main(){ 
	int b;
  int h;
  int A;
  
	printf ("inserisci rispettivamente la lunghezza della base e dell'altezza");
  
	scanf ("%d %d", &b, &h);
  
	if (h>0 && b>0){
    A= b * h / 2;
		printf ("Area=%d", A);
  }
	
  else {
    printf ("valori di input sbagliati");
  }

  
	
	return 0;
}


