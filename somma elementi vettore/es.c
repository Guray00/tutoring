#include <stdio.h>
#include <stdlib.h>

// utility to print an array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}


int somma(int vettore[], int dimensione){
  int somma = 0;

  for(int i=0; i < dimensione;i++)
    {
      somma = somma + vettore[i];
    }

  return somma;
}

int main(){
  int n;
  int risultato;
  
  printf("Quanto e' grande il vettore? ");
  scanf("%d",&n);

  int vettore [n];

  for (int i=0; i < n; i++){
    int tmp;
    printf("Inserisci un valore: ");
    scanf("%d", &tmp);

    vettore[i] = tmp;
  }
  
  risultato = somma(vettore, n);

  // stampiamo a schermo
  printArray(vettore, 4);
  printf("Il valore della soma e': %d", risultato);
  
	return 0;

}