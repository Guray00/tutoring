#include <stdio.h>
#include <stdlib.h>


int main(){
  int numero, numeroprecedente, totalenumeri;

  // inseriamo il primo numero, che non può
  // in alcun modo essere una ripetizione del precedente
  printf("inserire un numero: ");
  scanf("%d", &numero);

  // il primo numero è sicuramente corretto
  totalenumeri = 1;
  
  do 
    {
      numeroprecedente = numero;
      printf("inserire un numero: ");
      scanf("%d", &numero);
      if(numero != numeroprecedente)
      {
        totalenumeri = totalenumeri+1;
      }
      
    }while(!(numero == numeroprecedente));

  printf("%d e' il totale dei numeri", totalenumeri);
  
  
	return 0;
}