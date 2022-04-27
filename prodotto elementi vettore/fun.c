#include <stdio.h>
#include <stdlib.h>

int prodotto(int v[], int n){

  int prodotto = 1;
  for (int i = 0; i < n; i++){  
    prodotto = v[i] * prodotto;
  }
  
  return prodotto;
}



int main(){

  // inizializziamo
  int n;

  // quanti elementi sono presenti nel vettore? -> n
  printf("Quanti elementi vuoi inserire? ");

  // lo chiediamo
  scanf("%d", &n);

  // costruiamo un vettore grande n
  int v[n];
  
  // inseriamo uno ad uno gli elementi
  // dentro il nostro vettore

  //0....n
  for (int i = 0; i < n; i++){
    // chiedere il numero da inserire
    printf("Inserisci il numero: ");

    int pippo;
    
    // metterlo nel vettore
    scanf("%d", &pippo);
    v[i] = pippo;
  }

  /*for (int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }*/

  int prd = prodotto(v, n);
  printf("Il risultato e': %d", prd);
  
	return 0;

}