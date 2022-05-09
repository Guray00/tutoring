#include <stdio.h>
#include <stdlib.h>


int main(){
  
  int N;

  printf("inserire il valore di N: ");
  scanf("%d", &N);

  int contapari = 0;
  int contadispari = 0;

  for (int i = 0; i<N; i++)
    {
      
      int numero;
      printf("inserire il valore di un numero: ");
      scanf("%d", &numero);

      if (numero%2 == 0)
      {
        contapari = contapari+1;
      }
        
      else
        {
        contadispari = contadispari+1;      
        }
    }

  printf("Pari totali: %d\n", contapari);
  printf("Dispari totali: %d\n", contadispari);
	return 0;
}