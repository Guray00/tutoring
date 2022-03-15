#include <stdio.h>
#include <stdlib.h>

/*
4. Calcolare l'acconto di imposta: se il saldo di imposta è negativo non si deve pagare nulla, se è positivo si deve versare il 98% dell'importo come acconto. Se l'acconto calcolato è inferiore a 50 euro non si versa nulla.


noi abbiamo il saldo d'imposta
 -> se il saldo è negativo, non si paga => acconto = 0
 -> se il saldo è positivo
      -> saldo >= 50: versiamo il 98% dell'importo
      -> saldo <  50: non paghiamo nulla.
*/

int main(){

  // creaimo la variabile  per contenere il saldo
  int saldo;
  float acconto;
  const int PERCENTUALE = 98;

  // chiediamo all'utente di inserire il saldo
  printf("inserire il valore del saldo: ");
  scanf("%d", &saldo);
 
  // se il saldo è < 0 => acconto = 0
  if (saldo<0){
    acconto = 0;
  }

  // se siamo qua, il saldo è positivo
  else {
    if (saldo<50)
    {
      acconto=0;
    }
    // se il saldo è maggiore o uguale a 50
    else{
      // 100.0 effettua la divisione per float
      acconto = (saldo*PERCENTUALE)/100.0;
    }
  }
  

  printf("L'acconto finale e' %f", acconto);
	return 0;  
}