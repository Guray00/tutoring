#include <stdio.h>
#include <stdbool.h>

int fibonacci(int n){
  if(n==1 || n==2){
    return 1;
  }
  else if (n <= 0){
    return -1;
  }
  else{
    int risultato = fibonacci(n-1) + fibonacci(n-2);
    return risultato;
  }
}

bool verifica(int n, int i){
  int a = fibonacci(i); // i-esimo elemento della serie di fib
  
  if(a == n){
    return true;
  }
  else if(a > n){
    return false;
  }
  else{
    // "trasportare" fino al main il risultato
    return verifica(n, i+1);
  }
}

  int main(){
  int val;
  printf("Inserisci un numero: ");
  scanf("%d", &val);
  
  if (verifica(val, 1) == true){
    printf("Fa parte\n");
  }
  else{
    printf("Non fa parte\n");
  }
  
  return 0;
}