/********************************************
LIVELLO: Facile
Scuola: Liceo, Secondo Anno
Conoscenza: Scanf, Printf, IF
*********************************************/

/*
17. Scrivere un algoritmo che, dato il prezzo di un prodotto, applichi uno sconto del 12% se il prezzo è inferiore a € 30.00, del 25% altrimenti.
*/

#include <stdio.h>

int main(){ 
  float a;
  float b;
  printf ("inserisci il valore del prodotto");
  scanf ("%f", &a);
  if (a<30.00){
    b = a - ( a * 12 ) / 100;
}
else{
  b = a - ( a * 25 ) / 100;
} 
printf ("%f", b);
	return 0;
}


