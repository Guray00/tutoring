/*

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int M[100][100], n, k, i, j, x, cont;

  printf("Inserisci un numero x: ");
  scanf("%d", &x);
  
  // inserisco le informazioni riguardanti le righe
  printf("Inserisci il numero di righe: ");
  scanf("%d", &n);

  // inserisco le informazioni riguardanti le colonne
  printf("Inserisci il numero di colonne: ");
  scanf("%d", &k);

  // carico la matrice
  for(i=0; i<n; i++){
    for(j=0; j<k; j++){
      printf("Inserisci il valore [%d][%d]: ", i,j);
      scanf("%d", &M[i][j]);
    }
  }

  
  for(i=0; i<n; i++){
    // conti da 0
    cont=0;
    
    for(j=0; j<k; j++){

      // se il valore è minore
      if(M[i][j]<x){
        cont++;
      }
    }

    // mi dici per questa riga quanti elementi sono < x
    printf("Nella righa %d: %d\n", i, cont);
  }
  
  
	return 0;
}