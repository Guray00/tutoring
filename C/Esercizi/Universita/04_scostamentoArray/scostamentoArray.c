/*
Scrivere la funzione C che riceve in ingresso un array di interi A,
la sua dimensione N, un intero K, ed un intero LR e restituisce tra 
i parametri formali un array di interi V allocato all’interno 
della funzione. La funzione opera nel modo seguente:  
- I valori dell’array A sono inizialmente copiati in V;
- I valori dell’array V sono quindi soggetti a shift circolare 
  verso sinistra (se LR ha valore 0) o verso destra
- (se LR ha valore 1) di un numero di posizioni pari a K. 

(Esempio: A={1,2,3,4,5}, K=3, LR=1 -> V={3,4,5,1,2}).
*/

#include <stdio.h>
#include <stdlib.h>


void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}

void funzione(int* A, int N, int K, int LR, int** V){

    int count;
    int j;

    *V = (int*)malloc(sizeof(int)*N);

    if(LR==1) {
        for (count = 0; count < N; count++) {
            (*V)[count] = A[(count + K) % N];
        }
    }
    else if(LR==0){
        for (j = 0; j < N; j++) {
            (*V)[j] = A[(j + (N - K)) % N];
        }
    }
}

int main(){

    int N=5;
    int A[]={1,2,3,4,5};
    int K;
    int LR;
    int* V;
    
    printf("assegnare scostamento:");
    scanf("%d", &K);

    printf(" verso destra 0; verso sinistra 1:");
    scanf("%d", &LR);


    funzione(A, N, K, LR, &V);
    printArray(V, N);

    return 0;
}
