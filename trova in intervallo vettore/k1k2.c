#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CENTO 100
#define MIN -50
#define MAX 20

int generaCasuale(int, int);
void stampaVettore(int [], int);
int contaVettore(int[], int, int, int);

int main(){
  int arr[CENTO];
  int n, i, rand, k1, k2, ris;
  
  srand(time(0));
  
  // calcolo la lunghezza solo tra 1 e 10
  n = generaCasuale(1, 10);
  printf("n vale: %d\n", n);

  k1 = generaCasuale(MIN, MAX);
  k2 = generaCasuale(MIN, MAX);
  
  for(i = 0; i < n; i++){
    rand = generaCasuale(MIN, MAX);
    arr[i] = rand;
  }
  
  stampaVettore(arr, n);
  ris = contaVettore(arr, n, k1, k2);

  printf("k1=%d, k2=%d, conta=%d", k1, k2, ris);
  
	return 0;
}

int generaCasuale(int min, int max){
  int n;
  n = rand() % (max - min) + min;
  return n;
}

void stampaVettore(int arr[], int n){
  int i;

  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  
  printf("\n");
}

int contaVettore(int arr[], int n, int k1, int k2) {
  int i;
  int min;
  int max;
  int cont = 0;

  if(k1 > k2){
    min = k2;
    max = k1;
  }

  else {
    min = k1;
    max = k2;
  }

  for (i=0; i < n; i++){
    if(arr[i] >= min && arr[i] <= max){
      cont ++;
    }  
  }

  return cont;
}