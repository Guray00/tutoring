#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, len, n=0;
  char s[100];  

  // prendiamo in input la stringa
  printf("Inserisci una stringa: ");
  fgets(s, sizeof(s), stdin);
  
  // mi memorizzo la lunghezza della stringa
  len = strlen(s) - 1;

  // scorriamo tutti i caratteri
  for(i=0; i<len; i++){

    // voglio controllare che il carattere che guardo
    // non sia uno spazio
    if(s[i] != ' '){
      n++;
    }
  }
  
  printf("Sono presenti %d caratteri\n", n);
	return 0;
}