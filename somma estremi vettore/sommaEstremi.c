#include <stdio.h>
#include <stdlib.h>


int main(){
  int dim;
  int val;
  

  printf("Inserisci la dimensione del vettore: ");
  scanf("%d", &dim);

  int v[dim];
  for (int i = 0; i < dim; i++){
    printf("Inserisci il valore: ");
    scanf("%d", &val);
    v[i] = val;

    /*
     0 1 2 3 v[i] => v[0...3]
    */
  }

  int risultato = v[0] + v[dim-1];
  printf("La somma degli estremi vale: %d", risultato);

	
	return 0;

}