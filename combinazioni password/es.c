#include <stdio.h>
#include <stdlib.h>

unsigned long fattoriale(int);

double combinazione(int, int);

int main() {
  
  int n, k;
  double tot;
  
  printf("Inserisci il numero di simboli dell'alfabeto: ");
  scanf("%d", &n);
  printf("Inserisci la lunghezza della password: ");
  scanf("%d", &k);

  tot=combinazione(n, k);

  printf("%2.lf", tot);

  return 0;
}

// funzione che calcola il fattoriale
unsigned long fattoriale(int n1){

  unsigned long risultato = 1;
  
  for(int i=1; i<=n1; i++){
    risultato = risultato * i;
  }
  
  return risultato;
}

// (n+k-1)! / (k! * (n-1)!) 
double combinazione(int n2, int k2){
  double ris=0;

  // il float è necessario per forzare la divisione tra float e int
  ris = (double) fattoriale(n2+k2-1) / (fattoriale(k2) * fattoriale(n2-1)) ;
  return ris;
}