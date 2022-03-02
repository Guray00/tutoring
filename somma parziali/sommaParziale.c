#include <stdio.h>
#include <stdlib.h>


/*
Scrivere la funzione C che riceve in ingresso un array 
di interi A di dimensione N, un intero limit ed un numero 
di ripetizioni M (M>0 e divisore di N) 
e restituisce tra i parametri formali un array di interi V 
ottenuto nel modo seguente: 
- M elementi consecutivi di A sono sommati e se il valore 
  della somma è minore di limit è scritto in V; 
  
- altrimenti in V è scritto il valore 0. 
  
La funzione deve anche restituire tra i parametri formali 
il numero di valori (size) copiati in V. 
*/


// [1, 2, 3, 4] LIMIT 3   M = 2 => [3, 0] 



// funzione per mostrare a schermo un array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}


//             vettore dimensione    limite    "sottogruppo"
void funzione(int* A,    int N,     int limit, int M, int** V, int* size){
    int i = 0;
    int j=0;
    int t=0;
    // mi serve un vettore, per cui lo inizializzi 
    // quale è la dimensione? dimensione = N/M
    *size=N/M;
    *V=(int*)malloc(sizeof(int)*(*size));


    // scorriamo il vettore A a intervalli
    for(i=0; i<N; i+=M){
        
        int somma = 0;
        // scorro il sottogruppo 
        for(j=0; j<M; j++ ){
            // sommando
             somma+= A[i+j];
        }
            
        
    
        //controllo che la somma sia minore di limit, se lo è         
        if(somma<limit)
            // nel vettore V alla posizione del for grosso (il primo)
            (*V)[t]=somma;
        
        // altrimenti
        else  
            // scrivo zero alla posizione del for grosso nel vettore V
            (*V)[t]=0;

            
        // aggiorno il contatore
        t++;
    }
}


int main(){
	int A[6] = {5, 1, 3, 1, 1, 1};
	int limit = 5;
	int *V; 
	int dim;

	funzione(A, 6, limit, 2, &V, &dim);
	printArray(V, dim);

	return 0;
}