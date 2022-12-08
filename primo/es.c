#include <stdio.h>
#include <stdlib.h>

int main(){
  int controllo=0, n, i;
  
  printf("Inserisci un numero: ");
  scanf("%d", &n);
  
  for(i=2; i<= n/2; i++){
    if(n%i==0){
      controllo=1;
      break; // interrompe l'esecuzione del for
    }
  } 
  
  if(controllo==1){
    printf("Il numero che hai inserito non e' un numero primo");
  }
  
  else{
    printf("Il numero che hai inserito e' un numero primo");
  }
    
  return 0;
}