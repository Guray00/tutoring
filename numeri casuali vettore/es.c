#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CENTO 100


int main(){
  int vett[CENTO];
  int vett2[CENTO];
  
  int i, n;

  // inseriamo la dimensione del vettore
  printf("Quanti numeri vuoi generare? ");
  scanf("%d", &n);

  // serve per generare numeri casuali
  srand(time(0));

  // riempiamo il vettore con n elementi
  for(i=0;i<n;i++){
    vett[i] = rand() % (10) + 1;
  }

  for(i=0;i<n;i++){
    vett2[i]=vett[i]*vett[i];
  }

  // stampa il vettore originale
  printf("vettore originale: [ ");
  for(i=0;i<n;i++){
    printf("%2d ", vett[i]);
  }
  printf("]\n");

  //s
  printf("vettore quadrati:  [ ");
  for(i=0;i<n;i++){
    printf("%2d ", vett2[i]);
  }
  printf("]\n");
  
	return 0;
}