#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(){

  int vett[MAX];
  int vett2[MAX];
  int i;

  for(i=0; i<MAX; i++)
    {
      printf("inserire l'elemento: ");
      scanf("%d", &vett[i]);
    }

  // stampare a schermo il contenuto del primo vettore
  printf("\nVettore1: ");
	for(i=0; i<MAX; i++)
    {
      printf("%d ", vett[i]);
    }

  // vett:  1, 2, 3, 4, 5
  // vett2: 1, 2, 3, 4, 5
  
  // copia il contenuto di vettore in vettore2
  for(i=0; i<MAX; i++)
    {
      vett2[i] = vett[i];
    }
 

  printf("\nVettore2: ");

  for(i=0; i<MAX; i++)
    {
      printf("%d ", vett2[i]);
    }
    
  return 0;
}