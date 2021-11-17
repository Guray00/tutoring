/*
Scrivere la funzione C che riceve in ingresso un array di valori 
interi V e la sua dimensione N, ed opera nel modo seguente: 
- Alloca e calcola un nuovo array di valori float W i cui elementi 
  sono dati dal rapporto tra due elementi consecutivi di V. L’ultimo 
  elemento di V è diviso per il primo; 
  
- Ritorna FALSE nel caso sia presente una divisione per 0, TRUE altrimenti;
- Restituisce tra i parametri formali l’array W. 

(Esempio: V= {4, 2, 2, 4, 6, 1}N = 6 --> 
W = {4/2, 2/2, 2/4, 4/6, 6/1, 1/4} = {2, 1.0, 0.5, 0.6666666, 6.0, 0.25}).
*/

#include <stdio.h>
#include <stdlib.h>
typedef unsigned int Boolean;
#define TRUE 1;
#define FALSE 0; 

void printArray(float* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %f", v[i]);
	printf(" ]\n");
}

Boolean funzione(float* V, int N, float** W){

    int i;
    float tmp;
    *W=(float*)malloc(sizeof(float)*N);

    for (i = 0; i < N; i++) {
        tmp = V[i];
        
        if (tmp == 0) {
            printf("impossibile dividere per 0");
            return FALSE;
        }

        else{
            (*W)[i]=V[i]/V[(i+1)%N];
            //printf("\n W[%d]=%f", i, (*W[i]);
        }
    }
    
    return TRUE;
}

int main(){
    int N = 5;
    float V[5] = {1, 5, 5, 6, 5};
    float *W;

    Boolean risposta = funzione(V, N, &W);

    if(risposta == 1)
        printArray(W, 5);
	
	return 0;

}