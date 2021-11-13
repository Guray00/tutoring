#include <stdio.h>
#include <stdlib.h>

/*
Scrivere la funzione C che riceve in ingresso un array di interi A di dimensione N, un intero limit ed un numero di ripetizioni M (M>0 e divisore di N) e restituisce tra i parametri formali un array di interi V ottenuto nel modo seguente: M elementi consecutivi di A sono sommati e se il valore della somma è minore di limit è
scritto in V; altrimenti in V è scritto il valore 0. La funzione deve anche restituire tra i parametri formali il numero di valori (size) copiati in V. 
*/

// funzione per mostrare a schermo un array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}

void funzione(int *A, int N, int limit, int M, int **V, int *dim){
	
	// trovare la dimensione del vettore v
	*dim = N/M;

	// allochiamo nell'heap V
  *V=(int*)malloc(sizeof(int)*(*dim));
	int contatore = 0;

	// mi serve un ciclo dentro l'altro, quello esterno
  for(int i=0; i<N; i+=M){
    
		int somma = 0;
    for(int j = i; j < M+i; j++){
			somma+=A[j];
		}

		if(somma > limit){
			somma = 0;
		}

		(*V)[contatore] = somma;
    contatore++;

		//printf("somma vale: %d\n", somma);
  }
  

	
	// vogliamo prendere da V "M cose alla volta" e sommarle

	// se la somma è minore di limit, aggiungiamo nel vettore, sennò aggiungiamo 0
  
}

int main(){
	//          0  1  2  3  4
	int A[6] = {5, 1, 3, 1, 1, 1};
	int limit = 5;
	int *V; 
	int dim;
	funzione(A, 6, limit, 2, &V, &dim);
	printArray(V, dim);

	return 0;
}