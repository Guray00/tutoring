#include <stdio.h>
#include <stdlib.h>


// int perchè dobbiamo restituire 0 se non è intero, 1 altrimenti
int isIntero (int);


int main(){
 
  // dichiaro
  int N, i, n, conta;
  printf ("Quanti numeri vuoi inserire: ");
  scanf ("%d", &N);

  // inizio a contare a partire da 0
  conta = 0;
  
  // inserisco N numeri
  for (i=0;i<N;i++){
      printf("Inserisci un numero: ");
      scanf("%d", &n);

      if(isIntero(n) == 1){
        // contare che è un numero intero
        conta = conta + 1; // conta++ stessa cosa!!!!!
      }
  }

  // solo alla fine informiamo quanti numeri
  // interi sono stati inseriti
  printf("\nSono stati inseriti %d numeri interi", conta);

  return 0;
}

// int perchè dobbiamo restituire 0 se non è intero, 1 altrimenti
int isIntero(int n){
  if (n>0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
}