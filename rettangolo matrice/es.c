#include <stdio.h>
#include <stdlib.h>

// funzione che consente di caricare i valori in una matrice
void caricaMatrice(int M[][100], int N){
  int i, j;
  
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("Inserisci il valore [%d][%d]: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }
}

// funzione di appoggio che verifica se, dato N e le coordinate, se l'lemento è o meno sul bordo
int isBordo(int N,int i,int j){
  // 0 => non è sul bordo
  // 1 => è sul bordo

  // se è la prima/ultima riga o prima/ultima colonna
  if(i==0 || i==N-1 || j==0 || j==N-1){
    return 1;
  }
  
  return 0;
}

// realizza il rettangolo da mostrare
void bordiMatrice(int M[][100], int N){
  int i, j;
  
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){

      // se sono sul bordo...
      if(isBordo(N, i, j) == 1){
        M[i][j]=1;
      }
      else{
        M[i][j]=0;
      }
    }
  }
}


// funzione che stampa una matrice
void stampaMatrice(int M[][100], int N){
  int i, j;

  printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ", M[i][j] );
    }
    printf("\n");
  }
}

int main(){

  int M[100][100], N;

  printf("Inserisci il valore di N: ");
  scanf("%d", &N);

  caricaMatrice(M, N);
  stampaMatrice(M, N);

  bordiMatrice(M, N);
  stampaMatrice(M, N);
  
	return 0;
}