#include <stdio.h>
#include <stdlib.h>


int main(){

	// creare le variabili
  int mese, giorno;

  printf("inserire il mese: ");
  scanf("%d", &mese);

  if (mese==1 || mese==2)
    printf("il mese è in inverno");
  
  else if (mese==4 || mese == 5)
    printf("il mese è in primavera");

  else if (mese==7 || mese == 8)
    printf("il mese è in estate");

  else if (mese==10 || mese == 11)
    printf("il mese è in autunno");

  else if (mese==3){
    printf("inserire il giorno: ");
    scanf("%d", &giorno);
    
    if (giorno >= 21) {
      printf("il mese è in primavera");
    }
      
    else {
      printf("il mese è in inverno");
    }
  }

  else if (mese==6)
  {
    printf("inserire il giorno: ");
    scanf("%d", &giorno);
    
    if (giorno>=21)
    {
      printf("il mese è in estate");
    }
    else
      printf("il mese è in primavera");
  }
  else if (mese==9)
  {
    printf("inserire il giorno: ");
    scanf("%d", &giorno);
    
    if (giorno>=21)
    {
      printf("il mese è in autunno");
    }
    else
      printf("il mese è in estate");
  }
  
  else if (mese==12)
  {
    printf("inserire il giorno: ");
    scanf("%d", &giorno);
    
    if (giorno>=21)
    {
      printf("il mese è in inverno");
    }
    else
      printf("il mese è in autunno");
  }
  
  return 0;
}