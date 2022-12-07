/*

si scriva un programma che inverta le cifre di un numero
intero N usando una funzione apposita. A tal fine, si realizzi una verisone ricorsiva.

N = 4325
stampi: 5234
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int numero, int inverso){

  // caso base
  // restituisco il numero invertito che mi sono
  // calcolato in precedenza
  if (numero == 0){
    return inverso; 
  }

  // caso ricorsivo:
  // passo alla funzione numero/10 per indicare il prossimo gruppo
  // eseguo inverso*10 + numero%10 per aggiungere la nuova cifra al calcolo
  // la parte già calcolata viene spostata a sinistra grazie al "* 10"
  return fun(numero/10, inverso*10 + numero%10);
}


int main(){

  int x;
  printf("Inserisci un numero: ");
  scanf("%d", &x);
  
  printf("%d", fun(x, 0));
	return 0;
}