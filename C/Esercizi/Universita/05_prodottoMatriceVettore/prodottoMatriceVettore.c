// CONTROLLARE, CASO LIMITE NON RISPETTATO

#include <stdio.h>
#include <stdlib.h>

void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}


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

int funzione(int* A, int N, int M, int L, int* X, int** C){
    int n;
    int l;
    int m;
    
    // 3x2 ^ 2^1
    if(M==L){
        *C=(int*)malloc(sizeof(int)*N);

        for(n=0; n<N; n++){
                (*C)[n]=0;
                for(l=0; l<L; l++)
                    (*C)[n]+=A[n*M+l]*X[l];
        }

        return N;
    }
    
    else if(N==L){
        *C=(int*)malloc(sizeof(int)*M);
        for(m=0; m<M; m++){
            (*C)[m]=0;
            for(l=0; l<L; l++)
                (*C)[m]+=A[m*N+l]*X[l];
        }

        return M;
    }
    else{
        *C=(int*)malloc(sizeof(int)*(N*M));
        for(n=0; n<N; n++){
            for(m=0; m<M; m++)
                (*C)[n*M+m]=A[n*M+m];
        }

        return N*M;
    }
}


int main(){
    int N,M,L;

    printf("inserire righe di A:");
    scanf("%d", &N);

    printf("\ninserire colonne di A:");
    scanf("%d", &M);

    printf("\ninserire numero elementi di X:");
    scanf("%d", &L);

    int A[N*M];
    int X[L];
    int *C;
    
    for (int i = 0; i < N*M; i++){
        A[i] = i;
    }

    for (int i = 0; i < L; i++){
        X[i] = i;
    }
    printf("=== A ===\n");
    printMatrix(A, N, M);

    printf("\n=== X ===\n");
    printArray(X, L); 

    //printf("\n=== DIMENSIONE ===\n");
   // printf("\nC[%d*%d]", N,1);

    int size = funzione(A, N, M, L, X, &C);
    printf("\n=== C ===\n");

    if (size == (N*M))
        printMatrix(C, N, M);
    
    else
        printArray(C, size); 

}