#include <stdio.h>
#include <stdlib.h>

int main(){
  int numerochiamate;
  float importototale, costomedio;

  printf("inserire il numero delle chiamate: ");
  scanf("%d", &numerochiamate);

  if (numerochiamate<=80)
  {
    importototale = 5;
  }

  else if (numerochiamate>80 && numerochiamate<=140)
  {
    importototale = 5+(numerochiamate-80)*0.10;
  }

  else if (numerochiamate>140)
  {
    importototale = 5+60*0.10+(numerochiamate-140)*0.07;
  }

  costomedio = importototale/numerochiamate;
  
  printf("il costo totale viene %f\n", importototale);
  printf("il costo medio viene %f\n", costomedio);
	
  return 0;
}