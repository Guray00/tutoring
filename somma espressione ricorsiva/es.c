#include <stdio.h>
#include <stdlib.h>

double f(double a, int n){

  // caso base
  /* n == 1 */
  if (n == 1){
    return a - (n/a);
  }
  
  // caso ricorsivo  
  return  f(a, n-1) + (a - n/a);
}


int main(){
  double a;
  int n;
  
  printf("Inserire il valore di a: ");
  scanf("%lf", &a);

  printf("Inserire il valore di n: ");
  scanf("%d", &n);
  
  printf("Il risultato vale %lf", f(a, n));

	return 0;
}