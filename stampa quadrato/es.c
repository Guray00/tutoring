#include <stdio.h>
#include <stdlib.h>

void quadrato(int);
void quadrato2(int);

int main(){
  int lato;
  
  printf("Inserisci il valore del lato: ");
  scanf("%d", &lato);
  
  printf("\n");
  quadrato(lato);
  printf("\n");
  quadrato2(lato);
  
	return 0;
}

void quadrato (int l){
  int i, j;
  
  // scorriamo le righe
  for(i=0; i<l; i++){
    for(j=0; j<l; j++){
      printf("* ");
    }
    
    printf("\n");
  }
  
}


void quadrato2 (int l){
  int i, j;
  
  // scorriamo le righe
  for(i=0; i<l; i++){
    
    for(j=0; j<l; j++){

      if(i==0 || j==0 || i == (l-1) || j == (l-1)){
        printf("* ");
      }

      else {
        printf("  ");
      }
      
      // printf("* ");
    }
    
    printf("\n");
  }
  
}


