// soluzione senza funzione

#include <stdio.h>
#include <stdlib.h>

int main(){

  char c;

  printf("Inserisci un carattere: ");
  scanf("%c", &c);

  // minuscolo 
  if(c >= 'a' && c<='z'){
    printf("E' minuscolo");
  }

  else if(c >= 'A' && c<='Z'){
    printf("E' maiuscolo");
  }

	return 0;
}