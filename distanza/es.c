#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// sqrt ( (x1-x2)*(x1-x2) + (y1 - y2) * (y1 - y2) )

float calcolo_distanza(int, int, int, int);

int main(){

  int xA, xB, yA, yB;
  
  float distanza;

  printf("inserire la coordinata x del primo punto: ");
  scanf("%d", &xA);
	
  printf("inserire la coordinata x del secondo punto: ");
  scanf("%d", &xB);

  printf("inserire la coordinata y del primo punto: ");
  scanf("%d", &yA);

  printf("inserire la coordinata y del secondo punto: ");
  scanf("%d", &yB);

  distanza = calcolo_distanza(xA, xB, yA, yB);

  printf("la distanza tra i due punti e' di %f\n", distanza);
    
  return 0;

}

float calcolo_distanza(int xA, int xB, int yA, int yB)
{
  float distanza;

  distanza = sqrt( (xA-xB)*(xA-xB)+(yA-yB)*(yA-yB) );

  return distanza;

  }