#include <stdio.h>
#include <stdlib.h>



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

  int min = v[0];
  int max = v[0];

  for(int i = 0; i < dim; i++){
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

  int risultato = max - min;


  
  printf("\nLa differenza vale: %d\n", risultato);
  
	return 0;

}