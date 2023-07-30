#include<stdio.h>

#define N 2
#define K 5

// CARICAMENTO MATRICE
void caricamento (int M[][K]){
	int i,j;
  
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			printf("inserire elemento (%d,%d): ",i,j);
			scanf("%d", &M[i][j]);
		}
	}
}

int contaelementi(int M[][K]){
	int i,j, c=0, tmp=0;

  // scorre le righe
	for(i=0;i<N;i++){

    // per ogni nuova riga, rinizio a contare da zero
    tmp = 0;

    // scorre le colonne
		for(j=0;j<K;j++){

      // controlla se l'emento che sto verificando è pari
	  	if(M[i][j]%2 == 0){
	   	  tmp++; // conta il numero di elementi pari sulla riga attuale
      } 
    }

    // ci sono più di 3 elementi pari sulla riga?
    if(tmp > 3){
      // conto che la riga attuale effettivamente ha più di 3 elementi pari
      c++;
    }
  }

  // vogliamo ritornare il numero di righe
  return c;
}

// Calcolare la media dei numeri massimi di ogni riga
float mediamax(int M[][K]){
	int i,j, max;
	float somma=0, media;

  // scorriamo le righe
  for(i=0;i<N;i++){

    // scegliamo in modo arbitrario il primo elemento della riga come max
    max = M[i][0];

    // scorriamo le colonne
  	for(j=0;j<K;j++){

      // memorizziamo il nuovo massimo
    	if( M[i][j] > max){
    		max = M[i][j];
    	}
    }

    // adesso so quale è il numero massimo
    somma = somma + max;
  }
  
  media = somma / N;
  return media;
}    

//4	Per ogni colonna, stampare la media dei numeri dispari per ogni colonna
void mediadisp(int M[][K]){
	int i,j, c=0;
	float somma=0, media;

  // per ogni colonna
  for(j=0;j<K;j++){

    somma = 0;
    c = 0;
    
    // scorro le righe di quella colonna
  	for(i=0;i<N;i++){

      // cerchiamo i dispari sulla colonna
	    if(M[i][j]%2 != 0){
    		somma = somma+M[i][j];  
    		c++;
      } 
    }

    // qua ho finito di guardare tutta una colonna, posso
    // stampare a schermo il risultato
    if(c > 0){
      media = somma / c;
      printf("%d^ colonna ha come media %f\n", j+1, media);
    }
    else {
      printf("%d^ colonna non ha valori dispari\n", j+1);
    } 
  }
}    

// Per ogni colonna, calcolare la somma degli elementi compresi tra 10 e 20
void elementicompresi(int M[][K]){
  int i, j, somma = 0;

  
  // scorriamo le colonne
  for (j=0; j < K; j++){

    somma = 0;

    // scorriamo le righe
    for (i=0; i < N; i++){

      // se è compreso tra 10 e 20
      if(M[i][j] >= 10 && M[i][j] <= 20){
        somma = somma + M[i][j];
      }
    }
    
    // qua abbiamo finito di analizzare la colonna
    printf("%d^ colonna ha come somma %d\n", j+1, somma); 
  }
}


int main(){

  // dichiaro la matrice
  int M[N][K];                   
  
  // caricamento delle funzioni
  caricamento (M);
  printf("numero di righe con piu di 3 elementi pari: %d\n",contaelementi (M));
  
  printf("media numeri max righe: %f\n",mediamax(M));
  mediadisp(M);
  
  printf("\n===========\n");
  elementicompresi(M);
  
 return 0;
	
}  