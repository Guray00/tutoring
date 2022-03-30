#include <stdio.h>
#include <stdlib.h>

int main(){

	int numerokwh;
  float impostabolletta, costomedio;

  printf("inserire il numero di kwh: ");
  scanf("%d", &numerokwh);

  if (numerokwh<=500)
  {
    impostabolletta = numerokwh*0.20;
  }

  else if (numerokwh>500 && numerokwh<=1000)
  {
    // 700 => 500*0.20 + 200*0.05
    impostabolletta = 500*0.20+(numerokwh-500)*0.05;
  }

  else if (numerokwh>1000)
  {
    impostabolletta = 500*0.20+500*0.05+(numerokwh-1000)*0.08;
  }

  costomedio = impostabolletta/numerokwh;
  
  printf("Il consumo mensile viene %f", impostabolletta);
  printf("Il costo medio viene %f", costomedio);

  return 0;

}