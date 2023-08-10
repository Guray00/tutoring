#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int M[100][100], i, j, n, k, cont;
  float media, somma;

  // recupero il numero di righe
  do{
    printf("Inserisci il numero di righe della matrice: ");
    scanf("%d", &n);
    if(n <= 0){
      printf("Errore! N deve essere maggiore di 0\n\n");
    }
  }while(n<=0);
  
  // recupero il numero di colonne
  do {
    printf("Inserisci il numero di colonne della matrice: ");
    scanf("%d", &k);

    if(k <= 0){
      printf("Errore! K deve essere maggiore di 0\n\n");
    }
  } while(k <= 0);

  // scorriamo le righe della matrice
  for(i=0; i<n; i++){

    // scorriamo le colonne della matrice
    for(j=0; j<k; j++){
      printf("Inserisci il valore [%d][%d]: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }

  // dobbiamo cercare gli elementi pari della matrice
  somma = 0;
  cont = 0;
  
  // scorro le righe
  for(i=0; i < n; i++){
    // scorro le colonne
    for(j=0; j<k; j++){
      
      // se il numero è pari
      if(M[i][j]%2==0){
        somma = somma + M[i][j];
        cont = cont + 1;
      }
    }
  }

  if(cont>0){
    media = somma/cont;
  }
  else {
    media = 0;
  }
  
  printf("La media dei numeri pari vale %.2f\n", media);

    
	return 0;
}