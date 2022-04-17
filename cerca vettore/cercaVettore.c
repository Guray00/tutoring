#include <stdio.h>
#include <stdlib.h>

/*

*/

int main(){
  int n;
  int appoggio;
  int valore;
  
  printf("Dimmi quanti n vuoi inserire? ");
  scanf("%d", &n);

  int v[n];

  for (int i = 0; i < n; i++){
    printf("Dimmi un numero: ");
    scanf("%d", &appoggio);
    v[i] = appoggio;
  }

  printf("Inserisci il valore da cercare: ");
  scanf("%d", &valore);


  int trovato = 0; // all'inizio dico che non l'ho trovato
  
  for (int i = 0; i < n; i++){
    if(valore == v[i]){
      trovato = 1;
    }
  }

  if(trovato == 1){
    printf("\nHo trovato il valore");
  }
    
  else {
    printf("\nNon l'ho trovato");
  }
  
	return 0;

}