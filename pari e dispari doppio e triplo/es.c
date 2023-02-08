#include <stdio.h>
#include <stdlib.h>

int main(){

  // definiamo num per il numero da inserire
  int NUM, ris;
  
  // facciamo inserire il numero
  printf("inserisci un valore: ");
  scanf("%d", &NUM);
  
  // se il numero è pari
  if(NUM%2==0)
  {
    // esegui l'azione di moltiplicazione 
    ris=NUM*2;
  }
  // altrimenti
  else
  {
    // moltiplico per tre
    ris=NUM*3;
  }

  // mostriamo a schermo il risultato
  printf("il valore finale e': %d", ris);

	return 0;
}