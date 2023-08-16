#include <stdio.h>
#include <stdlib.h>

void CaricaMatrice(int M[][100], int N, int K){
  int i, j;
  for(i=0; i<N; i++){
    for(j=0; j<K; j++){
      printf("Inserisci il [%d][%d] elemento della matrice: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }
}

// funzione che dice per una specifica riga quanti 
// elementi sono minori di x
int numero_elementi_riga(int M[][100], int N, int K, int R, int x){
  int j, cont=0;

  // sto scorrendo le colonne della riga che mi interessa
  for(j=0; j < K; j++){
    if(M[R][j] < x){
      cont++;
    }
  }
  
  return cont;
}

int main(){
  int x, N, K, M[100][100], cont, i;

  printf("Inserisci il valore di x: ");
  scanf("%d", &x);

  printf("Inserisci il numero di righe: ");
  scanf("%d", &N);
  
  printf("Inserisci il numero di colonne: ");
  scanf("%d", &K);

  CaricaMatrice(M, N, K);

  // scorriamo tutte le righe della nostra matrice
	for(i=0; i<N; i++){
    // per ogni riga, calcolo il numero di elmenti minori di x
    cont = numero_elementi_riga(M, N, K, i, x);
    printf("Riga[%d]: %d\n", i, cont);
  }
    
  return 0;
}