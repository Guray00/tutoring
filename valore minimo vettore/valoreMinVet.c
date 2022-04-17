#include <stdio.h>
#include <stdlib.h>

/*
Dato un vettore trovare il minimo elemento, utilizzando
una funzione che restiusca il valore minimo
*/


int valoreMinimo(int v[], int dim){
  
  int minimo = v[0];
  
  for(int i = 0; i < dim; i++){
    if(v[i] < minimo){
      minimo = v[i];
    }
  }

  return minimo;
}


int main(){

  int dim;
  int val;
  
  printf("Quanti elementi vuoi inserire?");
  scanf("%d", &dim);

  int v[dim];

  // inserimento dei valori
  for (int i = 0; i < dim; i++){
    printf("Dammi i valori");
    scanf("%d", &val);
    v[i] = val;
  }

  int valore_minimo = valoreMinimo(v, dim);
  printf("Il valore più piccolo e': %d", valore_minimo);
  
	return 0;

}