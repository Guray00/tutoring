#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// passo un carattere e verifico se è una vocale
int isVocale(char c){
  // 0 => non è una vocale
  // 1 => è una vocale
  int i;

  // vettore delle vocali
  char s[] = {'a', 'e', 'i', 'o', 'u'};

  // scorro tutti gli elementi vedendo se lo trovo
  for(i=0; i<5; i++){

    // ho trovato il l'elemento
    if(c == s[i]){
      // non ha senso continuare a cercare!
      // restituisco 1 per segnalare che l'ho trovato
      return 1;
    }
  }

  // se arrivo qua non ho trovato nel vettore, dunque
  // non è una vocale!
  return 0;
}

int main(){
  int i, n = 0, len, max = 0;
  char s[100];

  printf("Inserisci una stringa: ");
  fgets(s, sizeof(s), stdin);

  len = strlen(s);

  // max = 3
  // ciao mondo zvc

  // scorro tutti i caratteri
  for(i=0; i<len; i++){

    // se vedo una vocale, la conto
    if(isVocale(s[i]) == 1 ){
      n++;
    }

    // è una nuova parola!
    else if(s[i] == ' ' || s[i] == '\0'|| s[i] == '\r' || s[i] == '\n'){
      if (max < n){
        max = n;
      }

      // visto che è iniziata una nuova parola,
      // devo riniziare a contare
      n = 0;
    }
  }


  printf("Il massimo numero di vocali e' %d\n", max);
    
	return 0;
}