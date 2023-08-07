#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b, c, max;
  
  // chiedo di inserire 3 numeri
  printf("inserisci tre numeri: ");
  scanf("%d %d %d", &a, &b, &c);


  // dobbiamo cercare il massimo di 3 numeri
  // 2 1 3

  // se a > b
  if(a > b){

    // se è maggiore, allora controllo se a > c
    if (a > c){
      max = a;
    }
    
    // altrimenti c è il massimo
    else{
      max = c;
    }
    
  }

  // se a < b
  else {
    
    // altrimenti, se è minore del secondo
    if(b>c){
      max = b;
    }
      
    else {
      max = c;
    }
  }

  // dobbiamo dire il risultato (stamapre)
  printf("il massimo è %d", max);
	return 0;
}
