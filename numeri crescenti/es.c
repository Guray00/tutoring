#include <stdio.h>
#include <limits.h>

int main(){

  // dichiarazione delle variabili
  int numero, numeroprecedente, totalenumeri;

   /*
  1 2 4 3
  condizione: che il numero che viene inserito
  sia minore del numero precedente
  */

  // il primo paragone lo faccio con il numero
  // più piccolo in assoluto
  numero = INT_MIN;
  totalenumeri = 0;
  
  do
    {
      // il numero che ho inserito adesso sarà il prossimo vecchio
      numeroprecedente = numero;
      printf("Inserisci un numero: ");
      scanf("%d", &numero);

      // se il numero crescente, lo conto
      if(numero>numeroprecedente)
      {
        totalenumeri = totalenumeri+1;
      }

    // finchè il numero è crescente
    } while(!(numero < numeroprecedente));

  printf("%d e' il totale dei numeri\n", totalenumeri);
  
  
 
  
	return 0;
}