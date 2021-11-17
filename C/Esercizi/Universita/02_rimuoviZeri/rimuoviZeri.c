/*
Scrivere la funzione C che riceve in ingresso un array 
di interi A e la sua dimensione N, ed opera nel modo 
seguente: 
-  Conta il numero M di valori di A diversi da zero;

- Rimuove da A gli elementi con valore zero e rialloca
  l’array A con dimensione uguale al numero dei soli 
  elementi diversi da 0. L’array A così riallocato 
  deve essere visibile dalla funzione chiamante.
    (suggerimento: copiare prima i valori di A diversi 
    da zero in un vettore di appoggio V);

- Restituisce la nuova dimensione di A come valore di ritorno.
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

int funzione(int** A, int N){

    // conto il numero di elementi non zero
    int dim = 0;
    for (int i = 0; i < N; i++){
        if((*A)[i] != 0){
            dim++;
        }       
    }

    // creo il nuovo vettore dinamico
    int* V = (int*) malloc(sizeof(int)*dim);

    int cont = 0;
    for (int i = 0; i < N; i++){
        if((*A)[i] != 0){
            V[cont] = (*A)[i];
            cont++;
        }       
    }

    // libero la memoria precedente
    free(*A);

    // dico al puntatore di puntare al nuovo array
    *A = V;

    // restituisco la nuova dimensione
    return dim;
}

int main(){

    // per comodità creo un vettore per salvare i valori
    int dim = 8;
    int V[8] = {1,2,0,0,3,4,0,5};

    // la funzione però non può ricevere un vettore 
    // perchè l'esercizio vuole che questa ne modifichi 
    // completamente i valori (anche in termini di dimensione)
    int* A = (int*) malloc(sizeof(int)*dim);

    // inserisco i valori
    for (int i=0; i<dim; i++){
        A[i] = V[i];
    }
    
    int size = funzione(&A, 8);
    printArray(A, size);
	return 0;
}