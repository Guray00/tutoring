#include <stdio.h>
#define N 3
#define K 3


void caricamento(int M[][K]){
	int i,j;
  
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			do{
			  printf("inserire elemento (%d,%d): ",i,j);
				scanf("%d", &M[i][j]);

        // controllo sul fatto che deve essere positivo
				if(M[i][j]<=0){
					printf("errore, inserisci un valore positivo!\n");
				}
        
      } while (M[i][j]<=0);
		}
	}
}

float media_righe(int M [][K], int R){
	int j;
	float somma=0, media;

  // scorro le colonne
	for (j=0; j<K; j++){
		somma = somma + M[R][j];
	}

	media=somma/K;
	return media;
}


// funzione che stampa la riga R-esima
void stampa_riga(int M[][K], int R){
  int j;

  // scorro le righe
  printf("Riga numero %d: ", R);
  for (j = 0; j < K; j++){
    printf("%d ", M[R][j]);
  }

  printf("\n");
}

int conta_righe(int M [][K]){
	int i,c=0;

  // per ogni riga
	for(i=0;i<N;i++){

    // troviamo la media per la riga i-esimo
    int media = media_righe(M, i);

    // se rispetta la condizione
		if(media > 10 && media < 20){
      stampa_riga(M, i);
			c++;
		}
	}		
  
	return c;
}

int main (){

  // creo la matrice
	int M[N][K], i;

  // carica la matrice
	caricamento(M);


  for (i = 0; i < N; i++){
	 printf("media righe = %f\n", media_righe(M,i));
  }
  printf("\n");
  
  // stampa le righe
  int conta = conta_righe(M);
  printf("\n");
  
	printf ("Rispettano la condizione %d righe\n", conta);
	
	return 0;
	
}