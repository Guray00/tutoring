#include <stdio.h>
#include <stdlib.h>

// funzione che restiusca la differenza tra
// il valore massimo e il valore minimo
int diff(int v[], int n){
  int min = v[0];
  int max = v[0];

  for(int i = 0; i < n; i++){
    // se quello che guardo è minore
    // aggiorno il valore
    if(v[i] < min){
      min = v[i];
    }  

    // se quello che guardo è maggiore
    // aggiorno il valore
    if (v[i] > max){
      max = v[i];
    }
  }

  // so con esattezza chi è il minimo e chi è il massimo
  return max - min;
}


int main(){

  int dim;

  printf("Quanti valori vuoi inserire? ");
  scanf("%d", &dim);

  int v[dim];

  // abbiamo inserito i valori
  for (int i = 0; i < dim; i++){
    printf("Inserisci un valore: ");
    scanf("%d", &v[i]);
  }

  int risultato = diff(v, dim);
  printf("\nLa differenza vale: %d\n", risultato);
  
	return 0;

}