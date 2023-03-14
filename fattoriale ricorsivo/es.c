#include <stdio.h>
#include <stdlib.h>

int fattoriale(int n){

  // condizione di terminazione
  if(n == 1){  
    return 1;
  }

  // caso base
  else {
    // n! = n*(n-1)!
    return n*fattoriale(n-1);
  }

}

/*
fattoriale(4)
    |
    +-> 3 * fattoriale(3)
              |
              +-> 2 * fattoriale(2)  
                        |
                        +-> fattoriale(1)
                               |
                  ft(2)*1   <-+   1
                  |
      ft(3)*2   <-+    2
        |
   ...
*/

int main(){

  int n, risultato;

  printf("Inserisci un numero: ");
  scanf("%d", &n);

  risultato = fattoriale(n);
  printf("Il fattoriale vale: %d", risultato);

	return 0;
}