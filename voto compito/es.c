#include <stdio.h>
#include <stdlib.h>

/*
> 8 => ottimo
  8 => distinto
  7 => buono
  6 => sufficiente
  5 => insufficiente
<=4 => gravemente insufficiente
*/

int main(){

	int voto;

  printf("inserire il voto: ");
  scanf("%d", &voto);

  // se il voto è maggiore di 8 è ottimo
  if (voto>8)
  {
    printf("il voto è ottimo %d", voto);
  }
    
  // se il voto è uguale a 8 è distinto
  else if (voto==8)
  {
    printf("il voto è distint o%d", voto);
  }
  // se il voto è uguale a 7 è buono
  else if (voto==7)
  {
    printf("il voto è buono %d", voto);
  }
  // se il voto è uguale a 6 è sufficiente
  else if (voto==6)
  {
    printf("il voto è sufficiente %d", voto);
  }
  // se il voto è uguale a 5 è insufficiente
  else if (voto==5)
  {
    printf("il voto è insufficiente %d", voto);
  }
  // se il voto è uguale a 4 è gravemente insufficiente
  else
  {
    printf("il voto è gravemente insufficiente %d", voto);
  }
  return 0;
}