#include <stdio.h>
#include <stdlib.h>
typedef unsigned int boolean;
#define TRUE 1;
#define FALSE 0;
/*
Scrivere la funzione C che riceve in ingresso un array 
bidimensionale di valori interi A e le sue dimensioni (N
numero di righe, M numero di colonne), ed opera nel modo 
seguente:
- Calcola il minimo tra gli elementi di A;
- Alloca un array di valori float V i cui elementi sono assegnati
  con i valori di A, attraversata per colonne, divisi per il minimo;
- La funzione ritorna FALSE nel caso il minimo sia 0, TRUE altrimenti;
- Restituisce tra i parametri formali l’array V.

{ 1, 2, 3, 4, 
  4, 5, 6, 7,
  8, 9, 10, 11};
*/

boolean funz(int *A, int N, int M, float **V){
    int min=A[0];
    *V=(float*)malloc(sizeof(float)*(N*M));
    int contatore;

    for(int i=0; i<N*M; i++){
        if(A[i] < min)
            min=A[i];
        
        if(A[i]==0)
            return FALSE;
    }
    
    for(int m=0; m<M; m++){
      for(int n=0; n<N; n++){
        (*V)[contatore]= (float)A[n*M+m]/(float)min;
        contatore++;
      }
    }
    
    
    return TRUE;
    
    //V[] = A[n*M+m];

}


// utility to print an array
void printArray(float* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %f", v[i]);
	printf(" ]\n");
}


int main(){

    int  A[][4] = { 0, 1, 3, 4, 
                    4, 5, 6, 7,
                    8, 9, 10, 11};

    float* V;
    boolean res = funz(*A, 3, 4, &V);

    if (res == 1)
        printArray(V, 12);
	return 0;
}