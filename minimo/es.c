

#include <stdio.h>
#include <stdlib.h>

int calcolo_minimo(int, int);

int main(){

  int n1, n2, min;

  printf("inserire il primo numero: ");
  scanf("%d", &n1);

  printf("inserire il secondo numero: ");
  scanf("%d", &n2);

  min = calcolo_minimo(n1, n2);

  printf("il numero minimo e' %d\n", min);
  
  return 0;
}

int calcolo_minimo(int n1, int n2)
{
  if(n1>n2)
  {
    return n2;
  }

  else
  {
    return n1;
  }
}