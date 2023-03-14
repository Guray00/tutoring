#include <stdio.h>

int somma(int n1, int n2){
  if (n2 == 0){
    return n1;    
  }
  else {
    return 1 + somma(n1, n2-1); 
  }
}

int main(){
  int n1, n2;

  printf("Inserire il primo numero: ");
  scanf("%d", &n1);

  printf("Inserire il secondo numero: ");
  scanf("%d", &n2);

  int risultato = somma(n1, n2);
  printf("%d\n", risultato);

  return 0;
}
