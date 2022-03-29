#include <stdio.h>
#include <stdlib.h>

/*
Caso estremo: 
‘Fondi insufficienti!’ => non abbiamo abbastanza soldi

Alla fine: 
addebitare automaticamente un costo di 10,00€

Alla fine ancora di più:
visualizzare il saldo aggiornato
*/

int main(){

	// char tipooperazione, float saldoiniziale, importotransazione
  char tipooperazione;
  float saldoiniziale, importotransazione, saldoaggiornato;
  //printf e scanf di tutte le variabili
  
  printf("insereire il tipo di operazione: ");
  scanf("%c", &tipooperazione);
  
  printf("insereire il saldo iniziale: ");
  scanf("%f", &saldoiniziale);
  
  printf("insereire l'importo della transazione: ");
  scanf("%f", &importotransazione);

  // deposito
  if (tipooperazione== 'd')
  {
    saldoaggiornato = saldoiniziale+importotransazione;
  }

  // spesa
  else if (tipooperazione== 'a' || tipooperazione== 's')
  {
    // controllare se ho soldi
    if(saldoiniziale > importotransazione){
      // prelievo dei soldi
      saldoaggiornato = saldoiniziale-importotransazione;
    }

    else {
      printf("Fondi insufficienti!");
    }
    
  }

  // se hai messo altro
  else {
    printf("Hai sbagliato a inserire");
  }

  // addebito 10 euro di spesa
  saldoaggiornato = saldoaggiornato - 10;

  // visualizzare il saldo aggiornato
  printf("Il saldo aggiornato e' %f", saldoaggiornato);
  
	return 0;

}