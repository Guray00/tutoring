#include <stdio.h>
#include <stdlib.h>
#include <float.h>
/*

*/

// utility to print an array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}


/*
Cosa prende la funzione?
- V  -> puntatore float
- N  -> dimensione dell'array
- L  -> doppio puntatore struct list
- L1 -> doppio puntatore a struct list
- M  -> puntatore a float
*/

struct list {
  float value;
  struct list* next;
};


// inizializza la lista
void init(struct list** ptr){
  *ptr=NULL;
}

// funzione risolutiva
void funct(struct list **L, struct list **L1, float *M, int N, float *V){

  // se il vettore è vuoto esce
  if (N <= 0) return;
  
  // inizializziamo la lista
  struct list *tmp;
  
  // troviamo la mediana
  if(N%2 == 0){
    *M=(V[N/2]+V[N/2-1])/2;
  }
  else {
    *M = V[N/2];
  }

  // inizializziamo nella lista nuova
  init(L1);

  // scorriamo la lista
  while ( *L != NULL ){

    // controlliamo se è minore della mediana
    if((*L)->value < *M){
      tmp=*L;
      *L=(*L)->next;

      // facciamo puntare tmp alla fine del vettore (null)
      tmp->next = *L1;

      // aggiorniamo la cella finale mettendoci quella nuova
      *L1 = tmp;

      // serve a puntare all'ultimo elemento
      L1 = &((*L1)->next);
    }

    else {
      L = &((*L)->next);
    }
  }
  
  
}



int main(){

  float V [] = {1, 2, 3, 4, 5, 6, 7, 8};

  struct list L;
  struct list L1;
  float M;
  
  return 0;
}
