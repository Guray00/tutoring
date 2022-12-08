#include <stdio.h>
#include <stdlib.h>

int main(){
  //  dichiaro 2 variabili int 'k' e 'h'
  int k, h, h1, h2, i, conta=0;
  
  //  chiedo all'utente di inserire i valori delle 2 variabili
  printf("Inserisci il valore dell'altezza: ");
  scanf("%d", &h);
  
  printf("Inserisci il valore in chilometri: ");
  scanf("%d", &k);

  // copio l'altezza iniziale
  h1 = h;
  h2 = h;
  
  //  scorro i da 0 a k(escluso) a passi di 1
  for(i=0; i<k; i++){
    // divido l'altezza per 2
    h1 /= 2; 
  }

  // voglio sapere dopo quanti km l'altezza si annulla
  // si annulla quando h = 0
  //                1        2        3        4             5
  // 20 => 20/2 => 10 / 2 => 5 / 2 => 2 => 2 / 2 => 1 / 2 => 0 
  while(h2 != 0){
    h2/=2;
    conta++;
  }
    
  // stampo a schermo l'altezza finale dell'onda
  printf("L'altezza finale dell'onda e': %d\n", h1);
  printf("L'altezza si azzera dopo: %d km\n", conta);
  
  
  return 0;
}