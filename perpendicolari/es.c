/*
Scrivere un programma faccia inserire all'utente i coefficienti angolari m1 e m2 (solo loro) di due rette espresse nella forma y = mx + q.

Valutare la loro perpendicolarità e mostrare a schermo il risultato.

**Nota**: due rette sono dette perpendicolari quando il prodotto tra i due coefficienti angolari è pari a -1.

**bonus1**: realizzare il programma con una funzione.

**bonus2**: restituire se le due rette sono parallele.

## Esempio

```plaintext
inserisci i due coefficienti angolari: 2 3
Le due rette non sono perpendicolari
```
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float m1, m2;

  // prendiamo in input i valori
  printf("inserisci i due coefficienti angolari: ");
  scanf("%f %f",&m1, &m2);

  if(m1*m2 == -1){
    printf("le due rette sono perpendicolari");
  }
	else {
    printf("Le due rette non sono perpendicolari");
  }
  
  return 0;
}