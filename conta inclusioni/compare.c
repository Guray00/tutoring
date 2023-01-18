#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(){

  int v[MAX] = {1, 2, 3, 4, 5, 20, 30, 40 , 50, 138};
  int b[MAX] = {1, 1, 2, 5, 5, 5, 6, 7, 8, 12};

  // per scorrere v
  int i;

  // iteratore per scorrere b
  int j;

  // contatore per vedere quante volte l'elemento è presente
  int c = 0;
  
  // scorriamo gli elementi di v
  for (i=0; i < MAX; i++){

    // per ogni numero del vettore v, ipotizziamo che non sia presente
    c = 0;
    
    // scorro gli elementi di b
    for (j = 0; j < MAX; j++){

      // se l'elemento i-esimo di v è uguale all'elemento
      // j-esimo di b, allora è contenuto
      if (v[i] == b[j]){

        // conto il numero
        c++; //c = c + 1;
      }
    }

    // se compare almeno una volta
    if(c > 0){
      printf("%d compare %d volte\n", v[i], c);
    }
    
  }

	return 0;
}