#include <stdio.h>
#include <stdlib.h>

int main(){
  float m1, m2;

  // prendiamo in input i valori
  printf("inserisci i due coefficienti angolari: ");
  scanf("%f %f",&m1, &m2);

  if(m1*m2 == -1){
    printf("le due rette sono perpendicolari");
  }
	else {
    printf("Le due rette non sono perpendicolari");
  }
  
  return 0;
}