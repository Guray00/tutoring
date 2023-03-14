#include <stdio.h>

// int perchè voglio restituire un intero
int ncifre(int val){
  
  // caso base
  if(val/10 < 1){
    return 1;
  }
  
  // passo induttivo
  else{
    return 1 + ncifre(val/10);
  }
  
}

int main(){

  int val;
  
  printf("Inserisci un numero: ");
  scanf("%d", &val);
  
  printf("Ci sono %d cifre\n", ncifre(val));
  
  return 0;
}