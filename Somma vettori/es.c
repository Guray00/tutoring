#include <stdio.h>
#include <stdlib.h>

// funzione che mostra l'array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}

// funzione che inserisce gli elementi
void inserisci(int v[], int n){
  for (int i = 0; i < n; i++){
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    v[i] = numero;
  }
}

// funzione che esegue la somma
void somma(int v1[], int v2[], int v3[], int n){
  for (int i = 0; i < n; i++){
    v3[i] = v1[i] + v2[i];
  }
}


// funzione che somma gli elementi di un vettore
int sommaElementi(int v[], int n){

  int somma = 0;
  for(int i = 0; i < n; i++){
    somma = somma + v[i];
  }

  return somma;
}


int main(){

  int n, risultato;
  
  printf("Inserisci la dimensione del vettore: ");
  scanf("%d", &n);

  int v1[n], v2[n], v3[n];
  
  // devo inserire n valori all'interno del vettore
  inserisci(v1, n);
  inserisci(v2, n);
  somma(v1, v2, v3, n);

  printArray(v3, n);

  risultato = sommaElementi(v3, n);
  printf("La somma degli elementi vale: %d", risultato);

  return 0;

}