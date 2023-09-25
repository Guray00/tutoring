#include <stdio.h>
#include <stdlib.h>

void maggiore(int, int);

int main(){

  int num1, num2;
  
  printf("inserisci un valore: ");
  scanf("%d",&num1);
  printf("inserisci un valore: ");
  scanf("%d",&num2);

  maggiore(num1, num2);
	return 0;
}

void maggiore(int num1, int num2){

  if(num1>num2){
    printf("%d",num1);
    
  }

  else if(num1<num2){
    printf("%d",num2);
  }

  else{
    printf("i due numeri sono uguali");
  }
}