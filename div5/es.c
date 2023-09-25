/*
Leggi un numero e scrivilo a video solo se tale numero è divisibile per 5.
*/

#include <stdio.h>
#include <stdlib.h>

void divisibile5(int);

int main(){
  int num;

  printf("inserisci un valore: ");
  scanf("%d",&num);

  divisibile5(num);

	return 0;
}

void divisibile5(int num2){
  if(num2%5==0){
    printf("%d",num2);
  }
  
}