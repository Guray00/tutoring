#include <stdio.h>
#include <stdlib.h>


// funzione che restituisca la posizione
// in cui si trova il valore passimo 
int trovaMax( int vettore[], int dim ){

  // max indica la posizione del valore massimo
  int max = 0;
  
  for (int i = 0; i < dim; i++){

    // aggiorno il valore di max salvando solo
    // l'indice del valore massimo
    if(vettore[i] > vettore[max]){
      max = i;
    }
    
  }

  // qua abbiamo controllato tutto il vettore
  // e abbiamo salvato in max la posione di quello
  // massimo
  return max;
}


int main(){

	int dim;

  printf("Inserire la dimensione del vettore: ");
  scanf("%d", &dim);

  int vettore[dim];

  // abbiamo inserito gli elementi del vettore
  for(int i = 0; i < dim; i++){
    printf("Inserire il numero: ");
    scanf("%d", &vettore[i]);
  }

  int pos_max = trovaMax(vettore, dim);

  printf("L'elemento massimo è in posizione %d", pos_max);  
  
	return 0;

}