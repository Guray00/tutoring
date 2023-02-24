#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, j, i;

  printf("inserisci un valore: ");
  scanf("%d",&n);

  // vogliamo stampare N righe
  // vogliamo stampare N asterischi per ogni riga

  // scorriamo le righe
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("* ");
          
        }
      printf("\n");
    }
  

  
  return 0;
}