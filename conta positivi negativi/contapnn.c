#include <stdio.h>
#include <stdlib.h>

int main(){

  int N;

  printf("inserire il valore di N: ");
  scanf("%d", &N);

  int numeripositivi, numerinegativi, numerinulli;

  numeripositivi = 0;
  numerinegativi = 0;
  numerinulli    = 0;
  
  int numero;
  for (int i=0; i<N; i=i+1)
  {
    // chiedere di inserire il numero
    printf("inserire un numero: ");

    // lo inserisci
    scanf("%d", &numero);

    // devo valutare se è positivo, negativo o nullo
    if (numero>0)
    {
      numeripositivi = numeripositivi + 1;   
    }
    else if (numero<0)
    {
      numerinegativi = numerinegativi+1;
    }
    else
    {
      numerinulli = numerinulli+1;
    }     
  }

  // diciamo i risultati
  printf("sono stati inseriti %d numeri positivi\n", numeripositivi);
  printf("sono stati inseriti %d numeri negativi\n", numerinegativi);
  printf("sono stati inseriti %d numeri nulli\n", numerinulli);
  
	return 0;
}