/*

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int V[10], k, i, prod, somma;

  // inseriamo il valore limite K
  printf("Inserisci il numero k: ");
  scanf("%d", &k);

  // carichiamo il contenuto del vettore
  for(i=0; i<10; i++){
    printf("Inserisci il valore %d-esimo del vettore: ", i);
    scanf("%d", &V[i]);
  }
  
  somma = 0;
  prod = 1;

  // scorro gli elementi del vettore
  for(i=0; i<10; i++){
    
    // verifico se l'elemento è dispari
    if(V[i]%2!=0){
      // lo considero alla somma totale
      somma = somma + V[i];
    }
  
    // se il valore è più piccolo di k
    if(V[i]<k){
      // calcolo il prodotto degli elementi
      prod=prod*V[i]; 
    }
  }

  printf("La somma dei numeri dispari vale %d\n", somma);
  printf("Il prodotto dei valori minori di %d vale %d\n", k, prod);
	return 0;
}