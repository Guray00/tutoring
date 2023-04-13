#include<stdio.h>

#define N 10
#define K 20

// CARICAMENTO MATRICE
void caricamento (int M[][K]){
	int i,j;
	float media;
    
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			printf("inserire elemento (%d,%d): ",i,j);
			scanf("%d", &M[i][j]);
		}
	}    
}

void stampa(int M[][K]){
  int i, j;

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      printf("%d ", M[i][j]);
    }
    
    printf("\n");
  }
}

//MEDIA elementi della matrice il cui doppio 
//risulta divisibili per N oppure minore di K
float mediadoppio (int M[][K]){
	int i,j, c=0;
	float somma=0, media;
  
	for(i=0;i<N;i++){
  	for(j=0;j<K;j++){
    	if( (M[i][j]*2)%N == 0 || M[i][j]*2 < K){
        // somma degli elementi che rispettano la condizione
    		somma = somma+M[i][j];  // M[N][K]  => 0...N-1    0...K-1 K
    		c++;
      }
    }
  }

  if (c == 0){
    return -1;
  }
  else {
    media = somma/c;
  }
  
  return media;
}

int main(){
	int M[N][K];
	caricamento(M);

	stampa(M);
	printf("la media il cui doppio risulta divisibili per N oppure minore di K è %f  ", mediadoppio(M));
  
	return 0;
}
