// variante con funzioni

#include <stdio.h>
#include <stdlib.h>

int sommaestremi(int dim, int v[]){
  int x = v[0] + v[dim-1];
  return x;
}

void inserimento(int v[], int dim){
  for (int i = 0; i < dim; i++){
    printf("Inserisci il valore: ");
    scanf("%d", &v[i]);
  }
}


int main(){
  int dim;
  
  printf("Inserisci la dimensione del vettore: ");
  scanf("%d", &dim);

  int v[dim];

  // inserimento
  inserimento(v, dim);

  int risultato = sommaestremi(dim, v);
  printf("La somma degli estremi vale: %d", risultato);

	return 0;

}