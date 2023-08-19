#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, min, min2, cont = 0;
  
  // non so quanti numeri dovrò inserire
  do{
    printf("inserisci un numero: ");
    scanf("%d", &n);

    // se ho messo lo zero, vai avanti
    if(n == 0){
      // interrompe il ciclo
      break;
    }   

    // se è la prima volta che inserisco il numero,
    // allora devo inizializzare i valori di min e min2
    // per renderli significativi
    if(cont == 0){
      min = n;
      min2 = n;
      
      // evitiamo di rientrare
      cont++;
    }
    
    // se n è più piccolo di entrambi
    if(n<min && n < min2){
      min2 = min;
      min=n;
    }

    // se è solo più piccolo di min2
    else if (n < min2){
      min2 = n;
    }
    
  } while(n!=0);

  printf("i due minimi sono: %d %d", min, min2);
  
	return 0;
}