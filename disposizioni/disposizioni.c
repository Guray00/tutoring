#include <stdio.h>

// Funzione fattoriale che calcola il fattoriale di un numero
int fattoriale(int n){
  if (n <= 1){
    return 1;
  } else {
    return n * fattoriale(n - 1);
  }
}

// Funzione disposizioni che calcola il numero di disposizioni
int disposizioni(int n, int k){
  int risultato = fattoriale(n) / fattoriale(n-k);
  return risultato;
}

// Funzione main
int main(){
  int val1, val2, ris;

  printf("Inserisci il numero degli elementi: ");
  scanf("%d", &val1);

  printf("Inserisci il numero dei posti: ");
  scanf("%d", &val2);

  ris = disposizioni(val1, val2);

  printf("Il risultato e': %d\n", ris);

  return 0;
}
