#include <stdio.h>

int main(){
 int V[10], i, somma, ndisp;

  // facciamo inserire gli elementi
  for(i=0; i<10; i++){
    printf("Inserisci il %d-esimo elemento del vettore: ", i);
    scanf("\n%d", &V[i]);
  }

  // calcolare la somma degli elementi dispari
  somma=0;
  for(i=0; i<10; i++){
    if(V[i]%2!=0){
      somma=somma+V[i];
    }
  }

  // contiamo quanti sono i numeri maggiori di somma
  ndisp=0;
  for(i=0; i<10; i++){
    if(somma<V[i]){
      ndisp = ndisp + 1;
    }
  }
  
  printf("La quantita vale: %d\n", ndisp);
    
	return 0;
}