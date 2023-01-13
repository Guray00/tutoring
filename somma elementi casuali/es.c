/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define q 70 + 1
#define start -50
#define MAX 25

int main(){

  int n, i, somma;
  somma = 0;

  int vett[MAX];
  
  // serve per generare numeri sempre diversi
  srand(time(NULL));

  do {
    printf("Inserisci quanti numeri vuoi inserire: ");
    scanf("%d", &n);
  } while(n < 0 || n > MAX);

  
  // genero un numero casuale
  // rand() % n => 0...(70-1) - 50
  int r = (rand() % q) + start;

  for(i=0; i<n; i++)
    {
      vett[i] = (rand() % q) + start;
    }

  int k = (rand() % (21)) -5;
  
  // sommiamo gli elementi che rispettano la condizione
  for(i=0; i<n; i++)
    {
      if((vett[i] * i) % k == 0)
      {
        somma = somma + vett[i];
      }
    }

  // stampare a schermo il vettore

  for (i = 0; i < n; i++){
    printf("%d ", vett[i]);
  }

  printf("\nk vale %d\n", k);

  printf("La somma vale %d", somma);
  
	return 0;
}