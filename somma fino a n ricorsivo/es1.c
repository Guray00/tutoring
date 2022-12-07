#include <stdio.h>
#include <stdlib.h>

// la funzione ricorsiva
int ric(int x){

  // caso base
  if (x == 0){
    return 0;
  }
  
  //step ricorsivo
  int valore = ric(x - 1);

  // prendiamo il valore che ci stanno
  // restituendo e lo devo sommare a 
  // quello precedente
  return valore + x;
}


int main(){

  int x;
  printf("Inserisci un numero: ");

  scanf("%d", &x);
  printf("Il risultato vale %d", ric(x));
  

	return 0;
  
}