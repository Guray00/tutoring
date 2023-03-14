#include <stdio.h>

// Funzione fattoriale che calcola il fattoriale di un numero
int fattoriale(int n){
  if (n == 1){
    return 1;
  } else {
    return n * fattoriale(n - 1);
  }
}

// Funzione coefBin che calcola il coefficiente binomiale
int coefBin(int n, int k){
  int risultato = fattoriale(n) / (fattoriale(k) * fattoriale(n-k));
  return risultato;
}

// Funzione main
int main(){
  int val1, val2, ris;

  printf("Inserisci il primo numero: ");
  scanf("%d", &val1);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &val2);

  ris = coefBin(val1, val2);

  printf("Il risultato e': %d\n", ris);

  return 0;
}
