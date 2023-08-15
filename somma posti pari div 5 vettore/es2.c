#include <stdio.h>
#define N 10

void caricamento (int V[]){
	int i;
	for(i=0;i<N;i++){
		printf("inserire elemento %d: ",i);
		scanf("%d", &V[i]);
	}
}

int somma_elementi_pari_divisibili_per_5(int v[]) {
  int somma = 0, i;

  for (i = 0; i < N; i+=2) { // Solo elementi di posto pari

    // controlllo se l'elemento è divisibile per 5
    if (v[i] % 5 == 0) {
      somma=somma+v[i];
    }
    
  }
  
  return somma;
}

int main() {
  
  int v[N]; 

  caricamento(v);
  int risultato = somma_elementi_pari_divisibili_per_5(v);
  
  printf("La somma degli elementi di posto pari e divisibili per 5 è: %d\n", risultato);

  return 0;
}