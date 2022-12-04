#include <stdio.h>
#include <stdlib.h>


int main(){

  // input di un numero n
  int n;
  printf("Inserisci un numero: ");
  scanf("%d", &n);

  // per ogni N con N > 0:

  // (inizializzazione; condizione; passo)
  for(;n > 0;n-- ){   
    
    // if (N e' pari):
    if(n%2 == 0){
      
      // stampo 
      printf("%d ", n);
    }
  }
  
  return 0;
}