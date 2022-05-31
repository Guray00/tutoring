#include <stdio.h>
#include <stdlib.h>


int main(){

	int numero, somma;
  somma = 0;
  
  do
    {
      printf("inserire un numero: ");
      scanf("%d", &numero);

      if(numero>0)
      {
        somma = somma+numero;
      }
      
    }while(!(numero<0));

  printf("la somma e' %d\n", somma);
  
	return 0;
}