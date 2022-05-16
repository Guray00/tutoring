#include <stdio.h>
#include <stdlib.h>

void frazione (int*, int*);
int  mcd (int, int);

/*
10/6 => 5/3


16 / 8 => 8
*/

int main(){
  int x, y;
  printf("inserire valore di x e y:\n");
  scanf("%d", &x);
  scanf("%d", &y);

  int vecchiodenom = y;

  frazione (&x, &y);
  printf("il valore della frazione e': %d/%d\n", x,y);

  if(vecchiodenom != y){
    printf("Abbiamo semplificato");
  }
  else{
    printf("Non abbiamo semplificato");
  }
  
	return 0;
}


int mcd(int x, int y){
  // trovare il massimo comune divisore
  // tra i due numeri x e y

  // dove mi fermo? al minore tra i due:

  int minimo;

  // mi ricordo dove devo fermarmi
  if (x < y){
    minimo = x;
  } else {
    minimo = y;
  }

  int risultato;

  // da dove parto? da 1, perchè sò che è
  // sempre un divisore

  for(int i = 1; i <= minimo; i++){

    // controllare se i è un divisore sia di x che di y 
    //5%2 == 0 => allora 2 è un divisore

    if (x%i == 0 && y%i == 0)
    {
      // mi salvo l'attuale divisore pià grande
      risultato = i;
    }
  }

  // restiuisco il divisore più grande che ho trovato
  return risultato;
}

void frazione (int *x, int *y)
{
  int m = mcd(*x, *y);

  *x = *x/m;
  *y = *y/m;
}
