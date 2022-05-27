#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

  // abbiamo creato una matrice 10x10
  int matrice[10][10];

  // rendiamo la generazione casuale
  srand(time(NULL));

  // riempiamo il vettore
  for (int x = 0; x<10; x++){
    for(int y = 0; y <10; y++){

      int numero = rand()%10 + 0;
      matrice[x][y] = numero;
      
    }
  }

  // stampiamo a schermo tutto il contenuto della matrice
  for (int x = 0; x<10; x++){
    for (int y = 0; y<10; y++){
      printf("%d ", matrice[x][y]);
    }

    // alla fine di ogni riga vado a capo
    printf("\n");
  }

  // variabile che si occupa di contare
  // quanti zeri abbiamo individuato
  int zeri = 0;
  
  // cercho gli zero all'interno della matrice
  for (int x = 0; x<10; x++){
    for (int y = 0; y<10; y++){

      // se è zero...
      if(matrice[x][y] == 0){
        // conto che ho trovato zero
        zeri = zeri + 1;
      }
    }
  }

  printf("\nAbbiamo trovato %d zeri", zeri);

	return 0;

}