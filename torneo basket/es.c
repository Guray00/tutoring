#include <stdio.h>
#include <stdlib.h>

#define RIGHE 5
#define COLONNE 5

// funzione che carica dei valori nella matrice
void caricaMatrice(int M[][COLONNE]){
  int i, j;
  
  for(i=0; i<RIGHE; i++){
    for(j=0; j<COLONNE; j++){
      printf("Inserisci il valore [%d][%d] della matrice: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }
}

// funzione che dato un giocatore ti dice il max punteggio
int maxPunteggio(int M[][COLONNE], int R){
  int i, j;

  // prendiamo il primo valore come massimo per evitare
  // che ci siano casi in cui lo zero non sia presente
  int max=M[R][0];
  
  for(j=0; j<COLONNE; j++){
   if(M[R][j] > max){
     max = M[R][j];
   }
  }
  
  return max;
}

// funzione che restituisce l'indice del minimo
int posGiocatoreScarso(int M[][COLONNE],int C){
  int i, pos = 0;
  
  for(i=0; i<RIGHE; i++){
    if(M[i][C] < M[pos][C]){
      pos = i;
    }
  }
  
  return pos;
}

// funzione che restituisce la media di un giocatore
float mediaGiocatore(int M[][COLONNE],int R){
  int j;
  float  media = 0;
  
  for(j=0; j<COLONNE; j++){
    media = media + M[R][j];
  }
  media = media / COLONNE;
  return media;
}

int main(){

  int M[RIGHE][COLONNE], i, max, min, j, posmedia;
  float media, mediamax = 0;
  
  // chiediamo di inserire i valori nel vettore
  caricaMatrice(M);
  printf("\n");

  // stampare per ogni giocatore il massimo
  for(i=0; i<RIGHE; i++){
    max = maxPunteggio(M, i);
    printf("Il punteggio massimo del giocatore %d e' %d\n", i, max);
  }

  printf("\n");

  for(j = 0; j < COLONNE; j++){
    min = posGiocatoreScarso(M, j);
    printf("Parita %d -> giocatore %d è il peggiore (%d)\n", j, min, M[min][j]);
  }

  mediamax = 0; // mediaGiocatore(M, 0);
  for(i = 0; i < RIGHE; i++){
    // calcolo la media del giocatore che guardo
    media = mediaGiocatore(M, i);
    if(media > mediamax){
     mediamax = media;
     posmedia = i;
    }
  }

  printf("\nMassima media: %.2f del giocatore %d\n", mediamax, posmedia);
  
	return 0;
}