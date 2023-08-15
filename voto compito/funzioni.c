#include <stdio.h>

// funzione che stampa un voto
void voto(int n){
  if(n == 10){printf("Ottimo");}
  else if(n == 9){printf("Distinto");}
  else if(n == 8){printf("Molto");}
  else if(n == 7){printf("Buono");}
  else if(n == 6){printf("Sufficiente");}
  else if(n == 5){printf("Insufficiente");}
  else if(n <= 4){printf("Gravemente insufficiente");}
}

int main(){
  int n;

  printf("Inserisci un voto da 1 a 10: ");
  scanf("%d", &n);

  voto(n);
  
	return 0;
}