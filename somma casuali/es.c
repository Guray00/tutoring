#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int NUM, i, somma;

  somma = 0;
  
  // ci serve per rendere l'estrazione casuale
  srand(time(NULL));

  for(i=0;i<10;i++)
    {
      
      NUM = rand()%(50-20 + 1) + 20;
      printf("%d ", NUM);
      somma = somma + NUM;
    }

  printf("\nLa somma vale: %d", somma);
  
	return 0;
}