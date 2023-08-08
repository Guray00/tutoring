#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, V[100], k, nvolte=0;

  // inserimento dimensione
  printf("Quanti numeri vuoi inserire: ");
  scanf("%d", &n);

  // riempiamo il vettore
  for(i=0; i<n; i++){
    scanf("%d", &V[i]);
  }

  // inseriamo il valore da cercare
  printf("Inserisci il numero k che vuoi cercare: ");
  scanf("%d", &k);

  // cerco l'elemento
  for(i=0; i<n; i++){
    if(k == V[i]){
      nvolte=nvolte+1;
    }
  }
  
  if(nvolte>0){
    printf("Il numero compare %d volte nel vettore", nvolte);
  }
  else{
    printf("Mi dispiace, il numero %d non è presente", k);
  }
  
	return 0;
}