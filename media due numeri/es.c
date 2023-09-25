#include <stdio.h>
#include <stdlib.h>

float medio(int, int);

int main(){
  int num1, num2;
  float ris;
  
	printf("inserisci il primo numero: ");
  scanf("%d",&num1);
  
 	printf("inserisci il secondo numero: ");
  scanf("%d",&num2);

  ris=medio(num1, num2);
  printf("la media vale: %f",ris);
  
	return 0;
}


float medio(int num1, int num2){
  float ris;
  
  if(num1!=num2){
    ris= (num1+num2)/2.0f;
    return ris;
  }
  else{
    return num1;
  }
}