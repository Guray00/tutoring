#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
  char parola[100];
  int l, r, palindroma;

  printf("Inserire la frase: ");
  fgets(parola, sizeof(parola), stdin);

  l = 0;
  r = strlen(parola) - 2;

  // palindroma=0 => non è palindroma
  // palindroma=1 => è palindroma

  // all'inizio do per scontato che è palindroma,
  // poi se trovo almeno un carattere diverso ne 
  // deduco che non è palindroma e aggiorno la variabile
  palindroma = 1;

  // finchè l è a sinistra di r
  while(l<r){

    // fino a quando r guarda uno spazio
    if(parola[r] == ' '){
      // ignoralo, vai avanti
      r--;
      continue;
    }

    // stesso problema a sinistra
    if(parola[l] == ' '){
      l++;
      continue;
    }
    
    // se trovo una lettera che non combacia
    if(parola[l] != parola[r]){
      
      // ricordiamo che la frase non è palindroma
      palindroma=0;
      
      // dobbiamo smettere di cercare perchè tanto
      // so già che non è palindroma
      break;
    }

      
    // aggiorniamo gli indici per guardare
    // la prossima coppia di letter
    l++;
    r--;
  }

  // se è palindroma
  if(palindroma==1){
    // stampo che la frase è palindroma
    printf("La frase e' palindroma");
  }
  else {
    printf("La frase non e' palindroma");
  }
   
 
  return 0;
}