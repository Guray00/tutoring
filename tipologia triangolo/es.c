#include <stdio.h>
#include <stdlib.h>

void triangolo(int, int ,int);

int main(){

  int l1, l2, l3;

  printf("Inserisci il primo lato: ");
  scanf("%d", &l1);
  
  printf("Inserisci il secondo lato: ");
  scanf("%d", &l2);
  
  printf("Inserisci il terzo lato: ");
  scanf("%d", &l3);

  triangolo (l1, l2, l3);
  
	return 0;
}

void triangolo(int l1, int l2, int l3){

  if (l1 == l2 && l2 == l3){
    printf("equilatero");
    
  }
  else if( (l1==l2 && l2!=l3) || (l2 == l3 && l1 != l2) || (l1 == l3 && l3 != l2)  ){
    printf("isoscele");
    
  }

  else{
    printf("scaleno");
  }
  
}