#include <stdio.h>
#include <stdlib.h>

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
*/

typedef unsigned int boolean;
#define TRUE 1;
#define FALSE 0;

// utility to print an array
void printArray(float* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %f", v[i]);
	printf(" ]\n");
}

boolean funzione(int* A, int N, int M, float** V){
    *V = (float*)malloc(sizeof(float)*(N*M));

    if(A[0] == 0) return FALSE;

    // trova il minimo
    int min = A[0];
    for (int i=1; i < N*M; i++){
        if(A[i] == 0) return FALSE;

        if (A[i] < min)
            min = A[i];
    }

    for (int i=0; i < (N*M); i++){
        (*V)[i] = ((float) A[i]/ (float) min);
    }


    return TRUE;
}

int main(){

    int  A[][4] = { 1, 2, 3, 4, 
                    4, 5, 6, 7,
                    8, 9, 10, 11};

    float* V;
    boolean res = funzione(*A, 3, 4, &V);

    if (res == 1)
        printArray(V, 12);
	return 0;

}