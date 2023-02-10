#include <stdio.h>
#include <stdlib.h>

int main(){
  int a=0, b=0, min=0, MCD=1, tmp;

  // chiedo di inserire i due numeri
  printf("Inserisci due valori 'a' e 'b': ");
  scanf("%d %d", &a, &b);
  
  if(a<=b){
    min = a;
  }
  
  else{
    min = b;
  }
  
  for(tmp=1; tmp <= min; tmp++){
    if(b%tmp==0 && a%tmp==0){
      MCD = tmp;
    }
  }
  
  printf("l'MCD tra a e b e': %d\n", MCD);
  return 0;
}