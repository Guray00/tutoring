#include <stdio.h>
#include <stdlib.h>

#define CENTO 100

int main(){
  int n, i, pos=0;


  int vett[CENTO];
	
  printf("Inserisci la grandezza del vettore: ");
  scanf("%d", &n);

  // inserisco gli elementi nel vettore
  for(i=0; i<n; i++){
    printf("Inserisci un numero: ");
    scanf("%d", &vett[i]);
  }

  // diciamo che il primo valore è il massimo, temporaneamente
  int max = vett[0];

  // trovare il massimo all'interno del vettore
  for(i=0;i<n;i++){

    // se l'elemento che sto guarndando è più
    // grande del massimo
    if(vett[i]>max){
      max=vett[i];    
      pos=i;
    }
    
  }

  // stampo il vettore a schermo
  printf("\nvettore: [ ");
  for(i=0;i<n;i++){
    printf("%d ", vett[i]);
  }
  printf("]\n");
  
  printf("Il numero massimo e': %d\n", max);
  printf("Il numero massimo si trova in posizione: %d", pos);
  
  return 0;
}