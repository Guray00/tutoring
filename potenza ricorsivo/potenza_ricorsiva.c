#include <stdio.h>

// Funzione somma, come nell'esempio precedente
int somma(int x, int y){
  if (y == 0){
    return x;
  }
  else {
    return 1 + somma(x, y - 1);
  }
}

// Funzione prodotto, che utilizza la funzione somma per calcolare il prodotto tra x e y
int prodotto(int x, int y){
  if (y == 0){
    return 0;
  }
  else {
    // Il prodotto tra x e y è uguale a x sommato a se stesso y-1 volte
    // In questo modo, la funzione utilizza la somma come operazione di base per calcolare il prodotto
    return somma(x, prodotto(x, y-1));
  }
}

// Funzione esponente, che utilizza la funzione prodotto per calcolare l'esponente
int esponente(int x, int y){
  // Caso base
  if (y == 0){
    return 1;
  }
  // Caso induttivo
  else {
    return prodotto(x, esponente(x, y-1));
  }
}

int main(){
  int n1, n2;
  
  printf("Inserire il primo numero: ");
  scanf("%d", &n1);

  printf("Inserire il secondo numero: ");
  scanf("%d", &n2);

  int risultato = esponente(n1, n2);
  printf("L'elevamento a potenza vale: %d\n", risultato);
  
  return 0;
}
