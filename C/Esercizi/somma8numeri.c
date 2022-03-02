#include <stdio.h>
#include <stdlib.h>


int main(){

  float media;
  int somma = 0;
  int vett[8];
  int i;

  // int vett[] = {1, 2, 3, 4, 5, 6, 7, 8};

  // inizializzazione; condizione; incremento
  for(i=0; i<=7; i++){
    printf("Inserisci un numero:\n");
    scanf("%d", &vett[i]);
    somma = somma + vett[i];
  }
  
  printf("La somma vale %d\n", somma);
  media = somma/8.0;
  printf("La media vale %f", media);
  
	return 0;

}