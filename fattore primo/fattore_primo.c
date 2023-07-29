#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, j, fp;
  
  printf("Inserisci un numero n: ");
  scanf("%d", &n);

  for(i=1; i<n; i++){

    // se i è un divisore
    if(n%i==0){

      int primo=1;
      // verificare se il numero i è anche primo
      for(j=2; j<i; j++){
        if(i%j==0){
          primo = 0;
          break;
        }
      }

      // adesso dobbiamo verificare se effettivamente è primo
      if(primo == 1){
        // in questo caso abbiamo trovato che i è sia un 
        // numero primo, sia un divore di n
        fp = i;
      }
      
    }

  }
  
  printf("Il fattore primo più grande di %d e' %d\n", n, fp);
  
  return 0;
}