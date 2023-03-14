#include <stdio.h>

// funzione ricorsiva per il calcolo del MCD (massimo comune divisore) tra due numeri interi
// la funzione restituisce un intero
// n1 e n2 sono i due numeri di cui si vuole calcolare il MCD, tali che n1 >= n2
int mcd(int n1, int n2){

  // caso base => condizione di uscita => termine
  // se n1 e n2 sono uguali, allora il MCD è proprio n1 (o n2)
  if (n1 == n2){
    return n1; // (o n2)
  }

  // passo induttivo => in tutti gli altri casi
  if (n1 > n2){
    // se n1 è maggiore di n2, sottraiamo n2 a n1 e richiamiamo la funzione passando i nuovi valori
    // altrimenti, sottraiamo n1 a n2 e richiamiamo la funzione passando i nuovi valori
    return mcd(n1 - n2, n2);
  }

  else {
    return mcd(n2 -n1, n1);
  }
  
}

// funzione per il calcolo del mcm (minimo comune multiplo) tra due numeri interi
// la funzione restituisce un intero
// n1 e n2 sono i due numeri di cui si vuole calcolare il mcm
int mcm(int n1, int n2){
  // il mcm si calcola come il prodotto tra n1 e n2 diviso il MCD tra n1 e n2
  return n1*n2/mcd(n1, n2);
}

// funzione principale
int main(){

  int n1, n2;

  // richiesta dei due numeri da parte dell'utente
  printf("Inserisci il primo numero: ");
  scanf("%d", &n1);
  
  printf("Inserisci il secondo numero: ");
  scanf("%d", &n2);

  // calcolo del MCD tra i due numeri
  int risultato  = mcd(n1, n2);
  printf("%d\n", risultato);

  // calcolo del mcm tra i due numeri
  int risultato2 = mcm(n1, n2);
    printf("%d\n", risultato2);
  
	return 0;
}
