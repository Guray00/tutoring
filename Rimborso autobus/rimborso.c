#include <stdio.h>
#include <stdlib.h>


/*
15% di rimborso se:
  -> abita in provincia
  -> usa l'autobus
  -> è lontano almeno 20 km

10% di rimborso se:
  -> abita in provincia
  -> usa il treno
  -> è lontano almeno 20 km
*/

int main(){

  int provincia, autobus, treno, distanza;
  float abbonamento, rimborso;
  
  const int SCONTO_BUS   = 15;
  const int SCONTO_TRENO = 10;


  printf("Rispondi con 0 alle domande se la risposta è no, 1 altrimenti.\n");


  // facciamo le domande all'utente ==========
  printf("Quanto costa l'abbonamento: ");
  scanf("%f", &abbonamento);
  
  printf("Abiti in provincia? ");
  scanf("%d", &provincia);

  printf("Usi l'autobus? ");
  scanf("%d", &autobus);

  printf("Usi il treno? ");
  scanf("%d", &treno);

  printf("Quanto abiti distante? ");
  scanf("%d", &distanza);
  // =========================================
  
  // 15% di sconto se le condizioni sono rispettate
  if(provincia == 1 && autobus == 1 && distanza > 20){
    rimborso = abbonamento*SCONTO_BUS/100.0;
  }

  // se quella di sopra è falsa faccio un'altra prova
  else if (provincia == 1 && treno == 1 && distanza > 20){
    rimborso = abbonamento*SCONTO_TRENO/100.0;
  }

  // in tutti gli altri casi
  else {
    rimborso = 0;
  }
  
  printf("Hai diritto a uno rimborso di %f euro", rimborso);
  
	return 0;

}

/*
AND && =======

condizione1    condizione2    risultato
vero           vero           vero
vero           falso          falso
falso          vero           falso
falso          falso          falso

OR   || ======
condizione1    condizione2    risultato
vero           vero           vero
vero           falso          vero
falso          vero           vero
falso          falso          falso

*/
