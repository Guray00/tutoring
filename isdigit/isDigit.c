#include <stdio.h>
#include <stdlib.h>



int isDigit(char a){

  // se il carattere è un numero
  if(a>='0' && a<='9'){
    // restituisco 1
    return 1;  
  }
  
  // in tutti gli altri casi
  else {
    // restituisco 0
    return 0;
  }

  
}

int main(){

  char carattere;
  printf("Inserisci il carattere da provare: ");
  scanf("%c", &carattere);
  
  printf("%d", isDigit(carattere));
    
	return 0;
}

