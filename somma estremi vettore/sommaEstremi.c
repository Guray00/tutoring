#include <stdio.h>
#include <stdlib.h>

int main(){

  int V[100], n, i, risultato;

  // inseriamo la dimensione del vettore e veerifichiamo
  // che rispetti tutti i requisiti
  do{
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);

    if(n > 100 || n%2 != 0){
      printf("Hai sbagliato! La dimensione deve essere < 100 e pari.\n\n");
    }
   
  } while(n>100 || n%2 != 0);

  // carichiamo il vettore  
  for(i=0; i<n; i++){
    printf("Inserisci il numero %d-iesimo: ", i);
    scanf("%d", &V[i]);
  }

  // 4 elementi => 0..3
  risultato = V[0] + V[n-1];
  printf("La somma tra %d + %d vale %d", V[0], V[n-1], risultato);

	return 0;
}