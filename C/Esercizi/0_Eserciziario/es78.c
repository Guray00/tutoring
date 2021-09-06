
/*
78. Scrivere un algoritmo che calcoli l'età media di una classe di 20 alunni.
*/

#include <stdio.h>

int main(){
  float m=0;
  for (int i=0; i<20; i++){
    printf ("\nInserisci l'età di un alunno: ");
		
    float anni;
    scanf ("%f", &anni);

		// controllo per essere sicuri di inserire solo valori positivi
    while(anni<0){
      printf("\nHai sbagliato! Metti un valore positivo: ");
			scanf ("%f", &anni);
    }

    m=m+anni;

  }
  m=m/20;
  printf ("\nL'età media della classe è: %f", m);
	return 0;
}