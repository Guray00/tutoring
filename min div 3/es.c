#include<stdio.h>

#define N 2
#define K 2

// funzione che riempe la matrice
void caricamento (int M[][K]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			printf("inserire elemento (%d,%d): ",i,j);
			scanf("%d", &M[i][j]);
		}
	}    
}

int  minriga(int M[][K], int R){
  int j, min = 0;
  
  for(j=0; j<K; j++){

    // se il numero è divisibile per 3
  	if (M[R][j]%3 == 0 && (min == 0 || M[R][j] < min)){
      min = M[R][j];
    }
    
  }

  // ritorna 0 se non ci sono %3 sulla riga, altrimenti il min
  return min;
}

void scorririghe(int M[][K]){
  int i;
  
  for(i=0; i<N; i++){

    int min = minriga(M, i);

    // se ho qualcosa di diverso da zero ho il divisore
    if (min != 0){
      printf("Il min di riga %d vale %d\n", i, min);
    }
       	
  }	
}



void stampa(int M[][K]){
	int i,j;
  
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
	     printf("%d",M[i][K]);
	   }
    
	   printf("\n");
  }
}


int main(){
	
	int M[N][K];
	caricamento(M);
	
	scorririghe(M);

return 0;
}
