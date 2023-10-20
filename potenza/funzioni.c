#include <stdio.h>
#include <stdlib.h>

int potenza(int, int);

int main(){
  int base, esponente, ris;

  // inserimento della base
  printf("inserisci la base: ");
  scanf("%d", &base);

  // inserimento dell'esponente
  printf("Inserisci l'esponente: ");
  scanf("%d", &esponente);

  ris=potenza(base, esponente);
  printf("il risultato e' %d",ris);

	return 0;
}

// funzione che calcola la potenza
int potenza(int base, int esponente){
  int i, ris;
  ris=1;
  
  for(i=0; i<esponente; i++){
    ris=base*ris;
  }

  return ris;
}