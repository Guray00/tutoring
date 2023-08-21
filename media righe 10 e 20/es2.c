#include <stdio.h>
 
// funzione che consente di caricare i valori in una matrice
void caricaMatrice(int M[][100], int N, int K){
  int i, j;
  
  for(i=0; i<N; i++){
    for(j=0; j<K; j++){
      printf("Inserisci il valore [%d][%d]: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }
}

// calcola la media di una riga R della matrice
float calcoloMedia(int M[][100], int K, int R){
  int j;
  float media=0;
  
  for(j=0; j<K; j++){
    media= media + M[R][j];
  }

  media = media / K;
  return media;
}

// stampa una riga specifica della matrice
void stampaRiga(int M[][100], int K, int R){
  int j;
  for(j=0; j<K; j++){
    printf("%d ", M[R][j]);
  }
  
  // vado a capo per evitare problemi di visualizzazione
  printf("\n");
}


// funzione che stampa una matrice
void stampaMatrice(int M[][100], int N, int K){
  int i, j;

  printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<K; j++){
      printf("%d ", M[i][j] );
    }
    printf("\n");
  }
}

int main(){

  int M[100][100], N, K, i, cont=0;
  float media;

  printf("Inserisci il numero di righe: ");
  scanf("%d", &N);
  
  printf("Inserisci il numero di colonne: ");
  scanf("%d", &K);

  caricaMatrice(M, N, K);
  stampaMatrice(M, N, K);
  printf("\n");

  // scorriamo le righe
  for(i=0; i<N; i++){
    // per ogni riga calcolo la media
    media = calcoloMedia(M, K, i);
    
    // se la media è compresa
    if(media<20 && media>10){
      printf("[riga %d: %.2f] ", i, media);
      stampaRiga(M, K, i);
      cont++;
    }
  
  }

  printf("\nIn totale le righe sono %d\n", cont);
	return 0;
}