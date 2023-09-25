#include <stdio.h>
#include <stdlib.h>

// protipo della funzione
void ismaggiorenne(int);

int main(){
  int num;
  
  do {
    printf("inserisci l'eta': ");
    scanf("%d", &num);

    if(num<0){
      printf("errore! Inserisci un età valida!\n\n");
    }
    
  } while(num<0);
  
  ismaggiorenne(num);
  
	return 0;
}

void ismaggiorenne(int eta){
  
  if(eta<18){
    printf("minorenne");
  }

  else{
    printf("maggiorenne");
  }
}
