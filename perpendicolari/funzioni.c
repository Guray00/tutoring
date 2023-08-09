#include <stdio.h>
#include <stdlib.h>

int _perpendicolari_(int, int);

int main(){

  int m1, m2, perp;

  printf("inserire il primo coefficiente angolare: ");
  scanf("%d", &m1);

  printf("inserire il secondo coefficiente angolare: ");
  scanf("%d", &m2);

  perp = _perpendicolari_(m1, m2);

  // se le rette sono perpendicolari
  if(perp == 1){
    printf("le rette sono perpendicolari");
  }

  // se le rette non sono perpendicolari
  else{
    printf("le rette non sono perpendicolari");
  }

	 
  return 0;
}

int _perpendicolari_(int m1, int m2)
{
  // verifichiamo se le due rette sono perpendicolari
  if(m1*m2 == -1)
  {
    return 1;
  }
  
  else
  {
    return 0;
  }
}