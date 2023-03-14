#include <stdio.h>

// Funzione sommaPari, che richiede all'utente di inserire un numero e somma i numeri pari
int sommaPari(){
  int val;
  printf("Inserisci un numero: ");
  scanf("%d", &val);

  // Caso base, il numero è dispari
  if (val % 2 != 0){
    return 0;
  }

  // Caso induttivo, il numero è pari e va sommato
  else {
    return val + sommaPari();
  }
}

int main(){
  int risultato = sommaPari();
  printf("La somma dei numeri pari inseriti vale: %d\n", risultato);
  return 0;
}
