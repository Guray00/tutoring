#include <stdio.h>
#include <stdlib.h>



// garage => 3

// g => 0

// facciamo una funzione che restituisce 
//   0 => se non è una vocale
//   1 => se è una vocali
int contaVocali(char c){
  // a e i o u
  if(c == 'a' || c=='e' || c=='i' || c=='o'|| c=='u')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main(){
  int N, i, ris, cont;
  char tmp;

  cont = 0;
  
  printf("Quante lettere ci sono?");
  scanf("%d", &N);

  /*
  https://stackoverflow.com/questions/13542055/how-to-do-scanf-for-single-char-in-c
  */

  printf("Inserisci la parola:");
  for(i = 0; i <= N; i++){
    scanf("%c", &tmp);
    ris = contaVocali(tmp);
    cont = cont + ris;
  }
  

  printf("Il numero di vocali e': %d", cont);
  
  
  return 0;
}