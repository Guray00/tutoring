#include <stdio.h>
#include <stdlib.h>
#define MAXN 25
#define LIM1 -50
#define LIM2 20


int main(){

	int vett[MAXN], n, i;

  // quantità di numeri da inserire
  do
    {
      printf("inserire il numero di elementi: ");
      scanf("%d", &n);
    }while(n<0 || n>MAXN);    

  // facciamo inserire n elementi nel vettore
  for(i=0; i<n; i++)
    {

      // inseriamo il numero e verifichiamo che sia tra [-50,20]
      do 
      {
        printf("inserire il %d elemento del vettore: ", i+1);
        scanf("%d", &vett[i]);
        
        if(vett[i]<LIM1 || vett[i]>LIM2)
        {
          printf("Hai sbagliato! Metti un numero tra -50 e +20\n");
        }
        
      } while(vett[i]<LIM1 || vett[i]>LIM2);
      
    }

  printf("I numeri positivi sono: ");
  for(i=0; i<n; i++)
    {
      if(vett[i]>0)
      {
        printf("%d ", vett[i]);
      }
    }

  // mostriamo di tutti i numeri solo quelli positivi

	return 0;
}