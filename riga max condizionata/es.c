#include<stdio.h>

#define N 3 
#define K 4 

void caricamento_matrice(int M[][K]){
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<K; j++){
		  printf("inserire elemento(%d,%d): ", i,j);
			scanf("%d", &M[i][j]);
		}
	}
}	

void caricamento_vettore(int V[]){
	int i;
  
	for(i=0; i<N; i++){
		printf("inserire elemento(%d): ", i);
				scanf("%d",&V[i]);
	}
}
	
// trova valore max nel vettore //
int maxvettore (int V[]){
  int i, max;

  max = V[0];
  for (i=0;i<N;i++){ 
    if (V[i] > max) {
       max=V[i];
    } 
  }
  
  return max;
}

// media elementi pari e divisibili per max di V
float mediariga(int M[][K], int R, int max){
  int i,j, c=0;
  float somma=0, media;
  
  for(i=0;i<N;i++){
    if(M[R][j]%2 == 0 && M[R][j] % max == 0){
      
      // somma degli elementi che rispettano la condizione
      somma = somma + M[R][j]; 
      c++;
    }
  } 

  // dobbiamo controllare per evitare la divisone per 0
  if( c < 1){
    media = 0;
  }
  else {
    media = somma/c;
  }
  
  return media;
}

// indice della riga con massima media
int posmaxriga(int M[][K], int Vmax){
  int pos, max, i;
  
  // diamo un valore di esempio per iniziare a calcolare il massimo
  max = mediariga(M, 0, Vmax);
  pos = 0;
  
  for(i = 0; i < N; i++){
    int tmp = mediariga(M, i, Vmax);
    // printf("max vale: %d  vs   tmp vale: %d\n", max, tmp);

    if (tmp > max){
      max = tmp;
      
      // salvo indice della media maggiore
      pos = i;
    }
  }

  // ritorno l'indice della riga massima
  return pos;
}

int main (){
	int M[N][K];
	int V[N];
  int i, Vmax, pos /*,  max*/;

  caricamento_vettore(V);
  caricamento_matrice(M);

  // creo una variaible per salvare il valore massimo del vettore
  Vmax = maxvettore(V);
  // printf("massimo vale: %d\n", Vmax);

  pos = posmaxriga(M, Vmax);

  // diamo un valore di esempio per iniziare a calcolare il massimo
  /*max = mediariga(M, 0, Vmax);
  pos = 0;
  
  for(i = 0; i < N; i++){
    int tmp = mediariga(M, i, Vmax);
    // printf("max vale: %d  vs   tmp vale: %d\n", max, tmp);

    if (tmp > max){
      max = tmp;
      
      // salvo indice della media maggiore
      pos = i;
    }
  }*/
	
	printf("La riga con la media degli elementi pari e divisibili più grande è la riga %d\n", pos);
}