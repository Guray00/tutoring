#include <stdio.h>

int main(){
  
  // a(int): primo valore ricevuto dall'utente
  // n(int): secondo valore ricevuto dall'utente
  // i(int): scorre il ciclo for
  // num(int): Numero da verificare inserito dall'utente
  // multipli(int)
  int a, n, i, num, multipli=0;

  // chiedo di inserire i numeri da verificare
  printf("Inserisci il valore di a: ");
  scanf("%d", &a);

  // chiedo quanti numeri voglio verificare
  printf("Quanri numeri vuoi provare? ");
  scanf("%d", &n);


  // ripetiamo con i che va da 0 a n:
  for(i=0; i<n; i++){
    // chiediamo di inserire un numero
    printf("inserisci un numero: ");

    // prendiamo in input il numero => num
    scanf("%d", &num);

    // se il resto della divisione tra num e a è 0 allora:
    if(num%a==0){
      multipli++;
      // incremento i multipli di 1, perchè ne ho trovato uno nuovo
    }
    
  }
  
  printf("I mutipli di a sono %d", multipli);
	return 0;
}