#include <stdio.h>
#define N 3
#define K 2


void caricamento(int M [][K]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			printf("inserire elemento (%d,%d): ",i,j);
			scanf("%d", &M[i][j]);
		}
	}
}

// trova quante volte un elemento è presente nella matrice
int trova_elemento(int D[][K], int x){

  int i, j, c=0;

  for (i = 0; i < N; i++){
    for (j = 0; j < K; j++){

      // controllo se l'elemento che sto guardando nella matrice
      // è uguale all'elemento che dovevo cercare
      if (D[i][j] == x){
        printf("[%d][%d] con valore %d\n", i,j, x);
        c++;
      }
    }
  }

  return c;
}


int conta_elementi(int M[][K], int B[][K]){
	int i,j,c=0;

	for(i=0; i<N; i++){
		for(j=0;j<K; j++){
      c =  c + trova_elemento(B, M[i][j]);
		}
	}
  
	return c;
}


int main (){
	
	int M[N][K];
	int B[N][K];
	
	caricamento(M);
	caricamento(B);

  int conta = conta_elementi(M, B);
	
	printf ("\nElementi uguali: %d\n",conta);
	
}	