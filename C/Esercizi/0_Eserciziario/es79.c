
/*
79. Scrivere un algoritmo che calcoli la media di N voti di un alunno.
*/

#include <stdio.h>

int main(){
  float n;
  float m = 0;

  printf ("\nQuanti voti hai preso? ");
  scanf ("%f", &n);
	
  while (n<0){
    printf ("\nNo, hai sbagliato! Inserisci un valore positivo ");
    scanf ("%f", &n);
  }
	
  for (int i=0; i<n; i++){
    printf ("\nInserisci un voto: ");
    float v;
    scanf ("%f", &v);

    while (v<1 || v>10){
       printf ("\nNo, hai sbagliato! Inserisci un valore compreso tra 1 e 10 ");
        scanf ("%f", &v);
    }
    m=m+v;
  }
  m=m/n;
  printf ("\nLa media dei tuoi voti è: %f", m);
	return 0;
}