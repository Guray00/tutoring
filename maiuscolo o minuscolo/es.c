// versione con la funzione

#include <stdio.h>
#include <stdlib.h>


void verifica(char c){

  // è minuscola se è compresa tra 97 e 122
  if( c >= 'a' && c<='z'){
    printf("E' un carattere minuscolo");
  }

  // maiuscolo se è compreso tra 65 e 90 
  else if (c >= 'A' && c <= 'Z'){
    printf("E' un carattere maiuscolo");
  }

  else{
    printf("Non è un carattere");
  }
}


int main(){
	char c;

	printf("Inserisci un carattere: ");
	scanf("%c", &c);

	verifica(c);
	return 0;
}

/*

AND => &&
cond1   cond2  risultato
vero    vero   vero
falso   falso  falso
falso   vero   falso
vero    falso  falso

OR => ||
cond1   cond2  risultato
vero    falso  vero
falso   vero   vero
vero    vero   vero
falso   falso  falso
*/