// variante con le funzioni

#include <stdio.h>
#include <stdlib.h>

// funzione che prende in input un valore e lo restituisce
int input();

// funzione che svolge il problema
void metodo(int);

// funzione che stampa in output il risultato
void output(int);


int main()
{
  int NUM;
  
  // Chiedo il valore di num
  NUM = input();

  // chiamiamo metodo(num)
  metodo(NUM);
  
	return 0;
}

int input()
{
  int NUM;

  printf("inserisci un valore: ");
  scanf("%d",&NUM);

  return NUM;
}

// procedura che chiede di inserire NUM numeri
// e ne effettua la somma
void metodo(int NUM)
{
  int x, i, somma;

  somma=0;

  // si chiede di inserire NUM numeri
  for(i=0;i<NUM;i++)
    {
      x = input();

      somma=somma+x;
    }

  output(somma);
}

void output(int n)
{
  printf("la somma e: %d", n);
}