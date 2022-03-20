#include <stdio.h>
#include <stdlib.h>

int main(){
  /*
  - se sono > 250 sto facendo  => 4 somme => 50*(0.50) + 100*(0.75) + 100*(1.20) + (x-250)*(1.50)
  - se tra 151 e 249           => 3 somme => 50*(0.50) + 100*(0.75) + (x-150)*(1.20)
  - se tra 51 e 150 faccio     => 2 somme => 50*(0.50) + (x-50)*(0.75)
  - se < 50 faccio             => 1 somma => x*(0.50)
  - se < 0 do errore
  */

  // creo le variabili
  int numerounita;
  float costofinale;

  // chido di inserire le unità di luce a schermo
  printf("inserire il numero di unita: ");
  scanf("%d", &numerounita);
  
  // se sono più di 250 pago tot  
  if (numerounita>250){
    costofinale = 50*(0.50) + 100*(0.75) + 100*(1.20) + (numerounita - 250)*(1.50);
  }

  else if (numerounita>=151 && numerounita<=249){
    costofinale = 50*(0.50) + 100*(0.75) + (numerounita - 150)*(1.20);
  } 

  else if (numerounita>=51 && numerounita<=151)
    costofinale = 50*(0.50) + (numerounita-50)*(0.75);

  else if (numerounita > 0 && numerounita <=50){
    costofinale = numerounita*(0.55);
  }

  else {
    costofinale = 0;
  }
  
  // Viene applicata infine una tassa aggiuntiva del 20% sul totale. 
  costofinale = costofinale + 0.2*costofinale;
  
  printf("IL prezzo finale e': %f", costofinale);
	
	return 0;
} 