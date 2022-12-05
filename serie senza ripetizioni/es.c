#include <stdio.h>
#include <stdlib.h>

int main(){

  // n(int): numero inserito dall'utente
  int n;
  // prec=0(int): memorizza il numero precedente
  int prec;
  // conta=0(int): conto i numeri prima della ripetizione
  int conta=0;
  // do { 
  do{
    // prec = n per ricordare il numero prima
    prec = n;
    
    // chiedo all'utente di inserire un numero
    printf("inserisci un numero: ");
 
    // leggo il numero inserito dall'utente
    scanf("%d", &n);

    // incremento conta di 1 
    conta++;
  // } while(verifico se prec è diverso da n);
  
  } while(prec!=n);

  // il programma termina sempre dopo una ripetizione,
  // quindi per sapere i numeri prima della ripetizione
  // basta sottrarre 2
  conta = conta - 2;
 
  // mostriamo a schermo quanti numeri sono stati contati
  printf("I numeri che sono stati contati sono: %d", conta);

  return 0;
}