#include <stdio.h>

// funzione che consente di inserire gli elementi nel vettore
void caricaVett(int V[], int N){
  int i;
  for(i=0; i<N; i++){
    printf("V[%d]: ", i);
    scanf("%d", &V[i]);
  }
}

// funzione che copia gli elementi minori in v2
int sovrascriviVett(int V[], int V2[], int N, int x){
  int i, cont=0;
  
  for(i=0; i<N; i++){
    if(V[i]<x){
      // devo copiare la componente V[i] in V2
      V2[cont] = V[i];
      cont++;
    }
  }

  return cont;
}

// funzione che permette di stampare un vettore
void stampaVett(int V[], int N){
  int i;
  for(i=0; i<N; i++){
    printf("%d ", V[i]);
  }
}


int main(){
 int V[20], V2[20], N, x, cont;

  // chiediamo la dimensione del vettore
  do{
    printf("Inserisci la lunghezza del vettore: ");
    scanf("%d", &N);
  } while(N<=0 || N>20);

  printf("Inserisci la soglia x: ");
  scanf("%d", &x);
  
  // chiamo la carica del vettore
  caricaVett(V, N);

  // funzione che copia solo gli elementi minori di x
  cont=sovrascriviVett(V, V2, N, x);

  printf("\nV:  ");
  stampaVett(V, N);

  printf("\nV2: ");
  stampaVett(V2, cont);
  
  return 0;
}