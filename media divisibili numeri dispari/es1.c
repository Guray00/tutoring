#include <stdio.h>
#define N 10

void caricamento (int V[]){
	int i;
	for(i=0;i<N;i++){
		printf("inserire elemento %d: ",i);
		scanf("%d", & V[i]);
	}
}


// funzione che conta il numero di valori dispari
int contaDispari(int v[]) {
  int C1 = 0;
  for (int i = 0; i < N; i++) {
    if (v[i] % 2 != 0) {
      C1++;
    }
  }
  
  return C1;
}
    
float media(int V[]){
	int i,j, c=0;
	float somma=0, media;

  // recupero il numero di elementi dispari
  int C1 = contaDispari(V);
  
	for(i=0;i<N;i++){
    
    // controllo che sia divisibile per C1
	 	if(V[i] % C1 == 0){
			somma = somma+V[i]; 

      // conto il numero di elementi che rispettano
      // la condzione
			c++;
		}
  }

  // calcolo la media
  media = somma/c;
  
  return media;
}

int main(){
	
  int V[N];    
  caricamento(V);

    
  printf("La media degli elementi di V divisibili per la quantità di elementi dispari di V è: %f)", media(V));
       
       
  return 0;
}
    
	
