/*

*/

#include <stdio.h>
#include <stdlib.h>

// funzione di utility  per stampare gli array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}

// funzione di utility  per stampare le matrici
void printMatrix(int* v, int n, int m){
	printf("{\n");
	for (int i = 0; i < n; i++){
        printf("  [");
        for (int j = 0; j < m; j++){
            printf(" %d", v[i*m + j]);
        }
    printf(" ]\n");
    }	

	printf("}\n");
}

void funzione(int* A, int* B, int N, int M, int k, int** X){
    
    // allochiamo il vettore dinamico
    *X = (int*)malloc(sizeof(int)*M);
    if(*X == NULL){
        exit(1);
    }
    
    // assegnamo al vettore il valore del prodotto delle righe
    // trattando le matrici come array lineari
    for(int j = 0; j < M; j++){

        // usiamo M-j-1 per ritornarlo in ordine inverso
        (*X)[M-j-1] = (A[k*M + j]) * (B[k*M + j]);

    }
    
}


int main(){

    int A[2][3] = {1,2,3,4,5,6};
    int B[2][3] = {1,2,3,4,5,6};

    int* X;

    // A e B vanno passati deferenziati perchè li trattiamo
    // nella funzione come se fossero array a singola dimensione
    // e dunque lineari. Deferenziando, C sta facendo la 
    // conversione implicità da Array a Puntatore. 
    // invece X è effettivamente un puntatore, perciò ne stiamo
    // passando l'indirizzo.
    funzione(*A, *B, 2, 3, 1, &X);
    
    //printMatrix(*A, 2, 3);
    printArray(X, 3);
	return 0;
}



