#include <stdio.h>
#include <stdlib.h>

/*
scrivere un algoritmo che consenta di calcolare la media dati n numeri inseriti dall'utente
*/

int main(){

  // quanti numeri vuoi inserire?
  int n;

  // chiedere per n volte un numero
  printf("inserire il valore di n: ");
  scanf("%d", &n);

  float media;
  float somma = 0;

  /*
  1 2 3 4

  0 + 1 
      1 + 2
          3 + 3
              6 + 4 
                  10
  */
  
  // media = la somma di tutti diviso n
  for (int i=0; i<n; i = i+1){
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // somma di tot numeri passati
    somma = somma + numero;
  }

  media = somma/n;  
  printf("\nLa media risultante e': %f", media);
	return 0;

}