// dato un array scambiare gli elementi di posizione
// pari con gli elementi di posizione dispari

#include <stdio.h>
#include <stdlib.h>

// utility to print an array
void printArray(int* v, int n){
	printf("[");
  
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
  
  printf(" ]\n");
}


void scambia(int v[], int n){
  int tmp;

  for (int i = 0; i < n; i= i+2){
    tmp    = v[i+1]; // gli dico che guardo quello in pos dopo
    v[i+1] = v[i];
    v[i]   = tmp; 
  }
}


int main(){

  int dimensione;
  printf("Quanto è grande il vettore? ");
  scanf("%d", &dimensione);
  
  // creiamo il vettore
  int v[dimensione];

  for(int i=0; i < dimensione; i=i+1){
     printf("Inserisci un numero: ");
     scanf("%d", &v[i]);
  }

  printArray(v, dimensione);
  scambia(v, dimensione);
  printArray(v, dimensione);
  
	return 0;

}