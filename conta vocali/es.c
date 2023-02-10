#include <stdio.h>
#include <stdlib.h>

// Il programma chiede di inserire una parola
// e calcola il numero di vocali presenti nella parola.
int main(){

  // Dichiariamo le variabili che useremo nel programma
  int N, i, cont;
  char c;

  // Inizializziamo la variabile contatore a 0
  cont = 0;

  // Chiediamo all'utente quante lettere ci sono nella parola
  printf("Quante lettere ci sono? ");
  scanf("%d", &N);

  // Chiediamo all'utente di inserire la parola
  printf("Inserisci la parola: ");
  for(i = 0; i <= N; i++){
    // Prendiamo in input ogni singola lettera
    scanf("%c", &c);

    // Se la lettera è una vocale, incrementiamo il contatore di 1
    if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u'){
      cont = cont + 1;
    }
  }

  // Stampiamo il risultato finale, ovvero il numero di vocali presenti nella parola
  printf("Il numero di vocali e': %d", cont);

  return 0;
}
