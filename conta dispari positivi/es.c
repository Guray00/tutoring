#include <stdio.h>

int main(){

  // chiedo in input n
  int n, num, conta=0;
  printf("Quanti numeri vuoi inserire? ");
  scanf("%d", &n);
  
  // per ogni numero fino ad arrivare ad a n (e poi aggiornamo n)
  for(; n>0; n--){

    // chiedo di inserire il numero (num)
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    
    // se num è positivo e dispari:
    if(num%2==1 && num>0){
    
      // conto il numero
      conta++;
    }
  }  
  
  // stampiamo il totale dei numeri contati
  printf("Il totale dei numeri dispari positivi e': %d ",conta);
  return 0;
}