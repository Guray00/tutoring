#include <stdio.h>
#include <stdlib.h>


int main(){

  // chiedere all'utente quale tabellina vogliamo fare
  int n;

  printf("Quale tabellina vorresti mostrare? ");
  scanf("%d", &n);

  /*
  // opzionale: verifico che n > 0;
  do{
    printf("Inserisci un numero: ");
    scanf("%d", &n);
  }while(n<0);
  */

  for (int i=1; i<=10; i=i+1)
    {
      int prodotto = n*i;
      printf("%d * %d = %d\n", n, i, prodotto);
    }
  
  
  return 0;

}