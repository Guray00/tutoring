#include <stdio.h>
#include <stdlib.h>
typedef unsigned boolean;
#define TRUE 1;
#define FALSE 0;

/*
Definire la funzione C che riceve in ingresso un array 
di interi A di dimensione N ed alloca e determina l'array H come
istogramma di A. L'istogramma deve avere un elemento per 
ogni valore distinto di A. Per un elemento di H in posizione i, 
la frequenza delle occorrenze del valore H[i] in A deve essere 
riportata in posizione i+1 
(es., per A={3,2,3,4,1,1,7,7,7}, risulta H={3,2,2,1,4,1,1,2,7,3}). 
L'array H deve essere restituito tra i parametri formali della 
funzione insieme al numero finale dei suoi valori. 
La funzione deve anche restituire come valore di ritorno, 
TRUE se la funzione termina correttamente, FALSE altrimenti.


A={3,2,3,4,1,1,7,7,7}




   N   N   N   N   N
H={3,2,2,1,4,1,1,2,7,3}



{1,1,1,1,1,1,1,2}
{1, 6, 2, 1}

*/

// utility to print an array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}



boolean funzione(int *A, int N, int **H, int* size){

    // allochiamo H con dimensione pari a 2N perchè è il peggiore
    // dei casi.
    *H = (int*)malloc(sizeof(int)*(2*N));
    if(*H == NULL)
        return FALSE;

    // cont tiene traccia di tutti gli elementi inseriti in H
    int cont = 0;

    // scorro A per inserire le cose in H
    for(int i=0; i<N; i++){

        // controllo se in H ho già fatto le verifiche relative
        // al numero A[i]
        boolean trovato = FALSE;
        for(int j=0; j<cont; j+=2){
            if(A[i] == (*H)[j]){
                trovato = TRUE;
            }
        }

      // entriamo in questo if se non abbiamo trovato A[i]
      // tra gli elementi di H
      if (trovato == 0){
          int contatore = 0;

          // scorriamo A per contare quante volte il numero
          // si ripete
          for(int j=0; j < N; j++){
              if (A[i] == A[j])
                contatore++;
          }

          (*H)[cont] = A[i];
          cont++;
          (*H)[cont] = contatore;
          cont++;
      }
    }

    *size = cont;

    return TRUE;
}


int main(){

    int A[] = {3,2,3,4,1,1,7,7,7};
    int N = 9;

    int *H;
    int size;
    
    boolean res = funzione(A, N, &H, &size);

    if (res == 1)
        printArray(H, size);

	return 0;

}