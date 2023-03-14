#include <stdio.h>

// Funzione somma, come nell'esempio precedente
int somma(int n1, int n2){  
  if (n2 == 0){
    return n1;    
  }
  else {
    return 1 + somma(n1, n2-1); 
  }
}

// Funzione prodotto, che utilizza la funzione somma per calcolare il prodotto tra n1 e n2
int prodotto(int n1, int n2){
  if (n2 == 0){
    return 0;
  }
  else {
    // Il prodotto tra n1 e n2 è uguale a n1 sommato a se stesso n2-1 volte
    // In questo modo, la funzione utilizza la somma come operazione di base per calcolare il prodotto
    return somma(n1, prodotto(n1, n2-1));
  }
}

int main(){
  int n1, n2;
  
  printf("Inserire il primo numero: ");
  scanf("%d", &n1);

  printf("Inserire il secondo numero: ");
  scanf("%d", &n2);

  int risultato = prodotto(n1, n2);
  printf("%d\n", risultato);
  
  return 0;
}
