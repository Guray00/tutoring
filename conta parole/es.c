#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, len, n=1;
  char s[100];

  // prendo in input la stringa
  printf("Inserisci una stringa: ");
  fgets(s, sizeof(s), stdin);

  // prendiamo la lunghezza della stringa
  // -1 per levare \n
  len = strlen(s) - 1;

  for(i=0; i<len; i++){

    if(s[i] == ' ' && s[i+1] != ' '  &&  s[i+1] != '\0' && s[i+1] != '\n'){
      n++;
    }
    
  } 

  printf("Il numero di parole e: %d\n", n);
  
	return 0;
}