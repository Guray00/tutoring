#include <stdio.h>
#include <stdlib.h>

// 0 => non è primo
// 1 => è primo
int primo(int n){

  int i; // i è il contatore, ovvero colui che conta
  
  // se un numero è divisibile solo per 1 e per se stesso, 
  // allora posso concludere che è primo

  // 4 => ho provato a dividerlo per 2 e 3, ma essendo
  // divisibile anche per 2 non è primo

  // parti da 2 a n-1 (n escluso)

  // for(inizializzazione; condizione; passo)
  for(i=2; i<n; i=i+1){

    // % => verfica il resto di una divisione
    // n % i == 0 => verificare che il resto tra n diviso i sia 0
    //               quindi un divisore

    // 4 => prendo il 4 e lo divido per 2, vedo che il resto
    //     è zero per cui è un divisore, ma allora non è primo!

    // se troviamo un numero che è divisore, allora non è primo!
    if(n%i==0){
      // non è primo!
      return 0;
    }
      
  }

  // significa che ho guardato tutti i numeri
  // ma se sono arrivato qua, il return 0 non è stato eseguito
  // visto che sono arrivato fino a qua sono convinto
  // che il numero è primo
  return 1; // 1 significa "vero"
}

int main(){
  int n, risultato;
  
  // chiedo di inserire un numero
  printf("inserisci un numero: ");
  
  // faccio inserire un numero
  scanf("%d",&n);
  
  // verifico se il numero è primo
  risultato = primo(n);

  // se risultato == 1
    // "E' primo"

  // altrimenti
    // non è primo
  
  if(risultato==1)
    printf("il risultato è un numero primo");
  else
    printf("Il risultato non è un numero primo");
	
  return 0;
}