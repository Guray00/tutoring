#include <stdio.h>
#include <stdlib.h>

void caricaMatrice(int M[][100], int N, int K){
  int i, j;
  for(i=0; i<N; i++){
    for(j=0; j<K; j++){
      printf("Inserisci il [%d][%d] elemento della matrice: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }
}

void stampaMatrice(int M[][100], int N, int K){
  int i, j;
  
  for(i=0; i<N; i++){
    for(j=0; j<K; j++){
      printf("%d ", M[i][j]);
    }
    
    printf("\n");
  }
}

void modificaPari(int M[][100], int i, int j){
  if (j%2 == 0){
    M[i][j]=2;
  } else {
    M[i][j]=1;
  }
}

void modificaDispari(int M[][100], int i, int j){
  if (j%2 == 0){
    M[i][j]=1;
  } else {
    M[i][j]=2;
  }
}

// sostituisce i valori nella matrice
void scacchiera(int M[][100], int N, int K){
  int i, j;

  // scorri tutte le righe
  for(i=0; i<N; i++){

    // scorri tutte le colonne
    for(j=0; j<K; j++){

      // se siamo in una riga dispari
      if(i%2!=0){
        modificaDispari(M, i, j);
      }

      // se siamo in una riga pari ci comportiamo al contrario
      else {
        modificaPari(M, i, j);
      }
    }
  }
}

int main(){
  int N, K, M[100][100], cont, i;


  printf("Inserisci il numero di righe: ");
  scanf("%d", &N);
  
  printf("Inserisci il numero di colonne: ");
  scanf("%d", &K);

  caricaMatrice(M, N, K);
  stampaMatrice(M, N, K); 
  scacchiera(M, N, K);
  printf("\n");
  stampaMatrice(M, N, K);
  
  return 0;
}