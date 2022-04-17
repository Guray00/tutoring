#include <stdio.h>
#include <stdlib.h>


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

  int prodotto = 1;

  for (int i = 0; i < n; i++){
    // [ 1 2 3 4 ]
    /*
    1 * 2 => 2
             2 * 3 => 6
                      6 * 4 => 24
   */
    
    prodotto = v[i] * prodotto;
  }

  printf("Il risultato e': %d", prodotto);
  
	return 0;

}