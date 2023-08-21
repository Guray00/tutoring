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

int maxMin(int M[][100], int N, int *max, int *min){
  int i;

  *max = M[0][0];
  *min = M[0][0];
  
  for(i=0; i<N; i++){

    // se la cella è maggiore del massimo
    if(M[i][i] > *max){
      *max = M[i][i];
    }
    if(M[i][i] < *min){
      *min = M[i][i];
    }
  }

}

int main(){
  int M[100][100], N, max, min;

  // prendo in unput il valore della dimensione
  printf("Inserisci il numero di righe e di colonne: ");
  scanf("%d", &N);
  
  caricaMatrice(M, N);
  stampaMatrice(M, N);

  // chiama la funzione che mi recupera il max e il min
  maxMin(M, N, &max, &min);

  // stampo a schermo il risultato
  printf("\nIl valore massimo vale %d e il minimo %d\n", max, min);
  return 0;
}