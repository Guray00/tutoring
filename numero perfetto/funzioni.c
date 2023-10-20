#include <stdio.h>
#include <stdlib.h>

// funzione che verifica se un numero è perfetto
int perfetto(int);

int main(){
  int num, res;

  printf("inserisci un valore: ");
  scanf("%d", &num);

  res=perfetto(num);

  if(res==1){
    printf("il numero e' perfetto");
  }

  else{
    printf("il numero non e' perfetto");
  }

	return 0;
}

int perfetto(int num){
  int i, somma=0;

  for(i=1; i<=num/2; i++){
    if(num%i == 0){
      somma = somma + i;
    }
  }

  if(somma==num){
    return 1;
  }
  else{
    return 0;
  }
}