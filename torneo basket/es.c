#include<stdio.h>

#define N 2
#define K 3

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


float mediacond(int M[][K]){
	int i,j, c=0;
	float somma=0, media;
	 for(i=0;i<N;i++){
	 	for(j=0;j<K;j++){
	 		/*if( condizione){
               // somma degli elementi che rispettano la condizione
               somma = somma+M[i][j]; 
               c++;
               }*/
			} 				
       }	
media = somma/c;
return media;
}

// funzione che restituisce la migliore partita di un giocatore
int miglior_partita(int M[][K], int R){
  int max = 0;
  int j;

  // troviamo il massimo
  for (j=0; j < K; j++){
    if (M[R][j] > M[R][max]){
      max = j;
    }
  }
  
  return max;
}

int giocatore_piu_scarso(int M[][K], int C){

  int min = 0;
  int j;
  
  for (j = 0; j < N; j++){
    if (M[j][C] < M[min][C]){
      min = j;
    }
  }

  return min;
}

int main (){
 	int M[N][K], i;

  // carichiamo i valori
 	caricamento(M);
  printf("\nGiocatori:\n");

  // scorriamo i giocatori
 	for (i = 0; i < N; i++){
    printf("Giocatore %d, miglior partita: %d\n", i, miglior_partita(M, i));  
  }

  printf("\nPartite:\n");
  for (i = 0; i < K; i++){
    printf("Partita %d, più scarso: %d\n", i, giocatore_piu_scarso(M, i));  
  }
  
  return  0;
}