#include <stdio.h>
 
int main(){
  int v[5], somma=0, i, j;
  float media;

  // carichiamo il vettore con i valori inseriti
  for(i=0; i<5; i++){
    do{
      printf("inserisci un numero: ");
      scanf("%d",&v[i]);

      if(v[i]<1 || v[i]>80){
        printf("Attenzione! Inserisci un numero compreso tra 1 e 80\n\n");
      }
      
    }while(v[i]<1 || v[i]>80);
  }


  // calcolare la media degli elementi
  for(i=0; i<5; i++){
    somma= somma + v[i];
  }

  media = (float) somma/5;
  
  printf("\nLa media vale %.2f\n\n", media);

  // per ogni valore del vettore
  for(i=0; i<5; i++){
    for(j=0; j<v[i]; j++){
      printf("*");
    }
    printf("\n");
  }
	
    
    
  return 0;
}