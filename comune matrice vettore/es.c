#include <stdio.h>
#define N 3
#define K 3


void caricamento_matrice(int M [][K]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			printf("inserire elemento (%d,%d): ",i,j);
			scanf("%d", &M[i][j]);
		}
	}
}

void caricamento_vettore(int V[]){
	int i;
	for(i=0;i<N;i++){
		printf("inserire elemento %d: ",i);
		scanf("%d", &V[i]);
	}
}


int MAX_matrice(int M[][K]){
	int i,j;
	int MAX= M[0][0];
  
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			if( M[i][j] > MAX){
				MAX = M[i][j];
			}
		}
	}
  
  return MAX;	
}

int MIN_matrice(int M[][K]){
	int i,j;
	int MIN= M[0][0];
  
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			if(M[i][j]< MIN){
				MIN = M [i][j];
			}
		}
	}
  
  return MIN;	
}

int MAX_vettore(int V[]){
	int i;
	int MAX=V[0];
  
	for(i=0;i<N;i++){
		if(V[i]>MAX){
				MAX= V[i];
		}
	}

  return MAX;	
}

int MIN_vettore(int V[]){
	int i;
	int MIN=V[0];
  
	for(i=0;i<N;i++){
		if(V[i] < MIN){
			MIN = V[i];
		}
	}

  return MIN;	
}

int conta_elementi(int M[][K], int V[N]){
	int i,j,x,c=0;

  // scorro il vettore
  for(x = 0; x < N; x++){

    // per ogni elemento del vettore devo scorrere la matrice

    // scorro le righe
    for(i=0; i<N; i++){

      // scorro le colonne
	 	 for(j=0; j<K; j++){

       // controllo se l'elemento che guardo è contenuto
       // in una qualche riga della matrice
	 	   if(M[i][j] == V[x]){

         // stampo l'informazione
         printf("[%d][%d] con valore %d\n", i, j, V[x]);
         
         // conto il numero
	 	     c++;
	 	   }
	 	 }
	 } 
  }
	 
	return c;
}



int main (){
	
	int M[N][K];
	int V[N];
	
	caricamento_matrice(M);
	caricamento_vettore(V);

  int conta = conta_elementi(M, V);
	
	printf ("MAX matrice = %d\n", MAX_matrice(M));
	printf ("MIN matrice = %d\n", MIN_matrice(M));
	printf ("MAX vettore = %d\n", MAX_vettore(V));
	printf ("MIN vettore = %d\n", MIN_vettore(V));
	printf ("numero elementi di V contenuti in M = %d\n", conta);
	
	return 0;
}