#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXN 25
#define LIM1 -50
#define LIM2 20

void stampa(int [MAXN], int);
void stampa_minimo(int [MAXN], int);
void stampa_massimo(int [MAXN], int);
void stampa_medio(int [MAXN], int);

int main(){

  int scelta, n, minimo, massimo, vett[MAXN], i;
  float medio;

  srand(time(NULL));

  do{
    printf("Inserire il valore di n: ");
    scanf("%d", &n);
  } while(!(n<=MAXN));
  
  
  // dobbiamo generare il vettore con gli n elementi casuali
  for(i=0; i<n; i++){
    vett[i] = rand() % (LIM2 - LIM1) + LIM1;
  }

  do
    {
      printf("\n");
      printf("scelta 0 -> Termina il programma\n");
      printf("scelta 1 -> Stampa tutti i numeri del vettore\n");
      printf("scelta 2 -> Stampa il numero minimo\n");
      printf("scelta 3 -> Stampa il numero massimo\n");
      printf("scelta 4 -> Stampa la media\n");

      printf("\nscelta: ");
      scanf("%d", &scelta);

      switch(scelta)
        {
          case 0: break;

          case 1:
            {
              stampa(vett, n);
            }
            break;

          case 2:
            {
              stampa_minimo(vett, n);
            }break;

          case 3:
            {
              stampa_massimo(vett, n);
            }break;

          case 4:
            {
              stampa_medio(vett, n);
            }break;
        }
    } while(scelta > 0);
	
  return 0;
}

void stampa(int vett[MAXN], int n)
{
  int i;

  for(i=0; i<n; i++)
    {
      printf("%d ", vett[i]);
    }
  
  printf("\n");
}

void stampa_minimo(int vett[MAXN], int n)
{
  int i, minimo;
  minimo = vett[0];

  // min = 1
  // 20 10 5 4 3 2 1
  
  for(i=0; i<n; i++)
    {
      if(vett[i]<minimo)
      {
        minimo = vett[i]; 
      }
    }

  printf("Il valore minimo e' %d\n", minimo);
}

void stampa_massimo(int vett[MAXN], int n)
{
  int i, massimo = vett[0];

  for(i=0; i<n; i++)
    {
      if(vett[i] > massimo)
      {
        massimo = vett[i];
      }
    }
  
  printf("%d e' il massimo\n", massimo);
}

void stampa_medio(int vett[MAXN], int n){
  int i;
  float media;
  int somma = 0;

  // scorriamo i numeri
  for(i = 0; i < n; i++){
    somma = somma + vett[i];
  }

  media = (float) somma / n;
  printf("La media vale %f\n", media);
}