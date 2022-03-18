#include <stdio.h>
#include <stdlib.h>

/*
fare una funzione che dica se un numero è naturale o meno
-> se >= 0 => è naturale 
-> non è naturale
*/

int verificaNaturale(int num){
  if(num>0)
  {
    // quando è naturale ritorna 1
    return 1;
  }
    
  else
  {
    return 0;
  }
}

int main(){

  int N, i=0;
  int tmp, ris;
  
  // serve a contare  quanti naturali sono stati inseriti
  int cont = 0;
  
  // chiedo all'utente quanti numeri vuole inserire
  printf("Quanti numeri vuoi inserire? ");

  // gli facciamo inserire il numero
  scanf("%d", &N);
  for(i=0;i<N;i++)
    {
      printf("Inserisci il numero: ");
      scanf("%d", &tmp);
      ris = verificaNaturale(tmp); // restituisce 1 quando è naturale
      
      if(ris == 1){
        cont = cont+1;
      }

      //cont = cont + verificaNaturale(tmp);
    }
    
  printf("I numeri naturali inseriti sono %d", cont);
	return 0;
}