#include <stdio.h>
#include <stdlib.h>
/*

*/
int main()
{
  int numeropersone;
  float prezzoapersona, importodapagare, costomedio, prezzo;
	  
  const float SCONTO1 = 0.05;
  const float SCONTO2 = 0.07;

  const int SOGLIA1 = 10;
  const int SOGLIA2 = 15;
  
  
  printf("inserire il numero di persone che fanno parte della comitiva: ");	
  scanf("%d", &numeropersone);

  printf("inserire il prezzo per ogni persona: ");
  scanf("%f", &prezzoapersona);

  if (numeropersone>0 && prezzoapersona > 0){
    if (numeropersone<=SOGLIA1)
    {
      importodapagare = numeropersone*prezzoapersona;
    }
  
    else if (numeropersone>SOGLIA1 && numeropersone<=SOGLIA2)
    {
      prezzo = numeropersone*prezzoapersona;
      importodapagare =  prezzo - prezzo*SCONTO1;
    }
  
    else if (numeropersone>SOGLIA2)
    {
        prezzo = numeropersone*prezzoapersona;
        importodapagare =  prezzo - prezzo*SCONTO2;
    }
  
    costomedio = importodapagare/numeropersone;
  
    printf("l'importo totale da pagare sara %f\n", importodapagare);
    printf("il costo medio sara %f\n", costomedio);
  }

  else {
    printf("Errore, i dati non possono essere negativi");
  }
  
    
    return 0;
}
