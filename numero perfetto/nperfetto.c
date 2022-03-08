#include <stdio.h>
#include <stdlib.h>


int main(){

  int n, i;
  int somma = 0;
  printf("Inserisci il numero:\n");
  scanf("%d", &n);

  for(i=1; i <= n-1; i=i+1){
    if(n%i == 0){
      somma = somma + i;
    } 
  }

  if(somma == n){
    printf("Il numero e' perfetto");
  } else{
    printf("Il numero non e' perfetto");
  }
	
	return 0;

}
