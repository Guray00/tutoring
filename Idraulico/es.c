#include <stdio.h>
#include <stdlib.h>


/*
6. Un idraulico chiede € 40,00 per un'ora di lavoro, più il costo del materiale, con un minimo di € 100,00 per ogni lavoro. Scrivere un programma che, dati in input il costo del materiale e il numero di ore lavorative, determini la spesa totale, facendola ammontare al limite minimo quando previsto.

nota: se idraulico lavora un'ora e spende 20 euro di materiale si conta 
100 euro.

costo idraulico -> 40 euro l'ora
costo del materiale -> inserisce l'utente
numero di ore lavorative -> inserisce l'utente

calcolare la spesa totale sapendo che come minimo spendiamo 100 euro
*/

int main(){

  float costomateriale, ore, spesatotale;
  const int COSTOORA = 40.0;
  const int COSTOMINIMO = 100.0;

  printf("inserire il costo del materiale: ");
  scanf("%f", &costomateriale);

  printf("inserire il numero di ore: ");
  scanf("%f", &ore);

  spesatotale = ore*COSTOORA+costomateriale;

  // se la spesa totale è minore del costo minimo => 
  // spesatotale = costominimo
	if (spesatotale <= COSTOMINIMO)
  {
    spesatotale = COSTOMINIMO;
  }

  printf("la spesa totale è %f\n", spesatotale);
  
  return 0;
}