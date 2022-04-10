#include <stdio.h>
#include <stdlib.h>

/*
Scrivere un programma che consenta di calcolare, mediante unicamente moltiplicazioni (ed eventualmente somme) la potenza di un numero noti la base e l'esponente.
*/

int main(){
  int base, esponente;
  
  // inserisci la base
  printf("inserire il valore della base: ");
  scanf("%d", &base);
  
  // inserisci l'esponente
  printf("inserire il valore dell'esponente: ");
  scanf("%d", &esponente);

  // 1 => neutro della moltiplicazione
  int potenza = 1;

  // 2^3 => 2*2*2
  /*
      1*2
        2*2
          4*2 => 8
  */
  
  for (int i=0; i < esponente; i = i+1){
    // fare base*base esponente volte, 
    // salvando il risultato

    // la potenza, a ogni passaggio,
    // viene moltiplicata per la base
    // salvando il risultato in potenza
    potenza = potenza * base;
  }

  printf("La potenza vale: %d", potenza);
  
	return 0;

}