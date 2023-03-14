#include <stdio.h>

// calcola l'elemento della serie in posizione n
int fibonacci(int n) {
  // caso base 1
  if(n == 1 || n == 2) {
    return 1;
  }
  // caso base 2
  else if(n <= 0) {
    return -1;
  }
  // passo induttivo
  else {
    int risultato = fibonacci(n-1) + fibonacci(n-2);
    return risultato;
  }
}

int main() {
  int val;
  printf("Inserisci quanti numeri della sequenza vuoi mostrare: ");
  scanf("%d", &val);
  printf("[ ");
  for(int i = 1; i <= val; i++) {
    int ris = fibonacci(i);
    printf("%d ", ris);
  }
  printf("]\n");
  return 0;
}
