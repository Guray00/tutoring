/*
Scrivere un programma che inserisca degli elementi all'interno di un vettore e ne stampi il contenuto

Esempio
Inserisci la dimensione del vettore: 5
Inserisci un valore: 1
Inserisci un valore: 2
Inserisci un valore: 3
Inserisci un valore: 4
Inserisci un valore: 5

1 2 3 4 5 
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
  int vettore[MAX];
  int i, n;
  
  printf("Quanti numeri vuoi inserire? ");
  scanf("%d", &n);
  
    
  for(i=0;i<n;i++){
    printf("Inserisci un valore: ");
    scanf("%d", &vettore[i]);
  }

  printf("\n");

  for(i=0;i<n;i++){
    printf("%d ", vettore[i]);
  }

  return 0;
}