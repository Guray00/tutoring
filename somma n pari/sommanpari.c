#include <stdio.h>

int sommaPari(int n){
  // chiedo di inserire il numero
  int val;
  printf("Inserisci un numero: ");
  scanf("%d", &val);
  
  // caso base
  if (n==1){
    if (val%2==0){
      return val;
    } 
    
    else {
      return 0;
    }
  
    // passo induttivo
  } else {
    if (val%2==0){
      return val + sommaPari(n-1);
    } else {
      return 0 + sommaPari(n-1);
    }
  }
}

int main(){
  int n;
  printf("Quanti numeri vuoi inserire? ");
  scanf("%d", &n);
  int risultato = sommaPari(n);
  printf("La somma dei soli numeri pari vale: %d", risultato);
  
  return 0;
}