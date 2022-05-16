#include <stdio.h>
#include <stdlib.h>

// asterisco perchè li sto passando per riferimento
void equilibratore(int *x, int *y){
  // esempi:
  //   6 2 => 4 4
  //   5 2 => 4 3

  int somma = *x + *y;
  *x = somma / 2;
  *y = somma - *x;
}


int main(){
  int x, y;
  printf("inserire valore di x e y:\n ");
  scanf("%d", &x);
  scanf("%d", &y);
  
  equilibratore (&x, &y);
  printf("i valori di x e y sono: %d, %d\n", x, y);

  return 0;
}

