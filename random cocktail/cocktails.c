#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXN 30
#define HIGH 100
#define LOW 0

void carica(int[], int);
void stampa(int[], int);
float calcolo_media(int[], int);
int massimo(int[], int);
int minimo(int[], int);
void stampa_gradazione(int[], int, int);

int main(){

	int scelta, n, vett[MAXN], pos;
  float media;
  
  do
    {
      printf("\n");
      printf("scelta 0 -> Termina il programma\n");
      printf("scelta 1 -> Caricare il numero di coktails\n");
      printf("scelta 2 -> Stampare tutti i coktails\n");
      printf("scelta 3 -> Stampare la media generale di tutti i coktails\n");
      printf("scelta 4 -> Stampare il coktail più alcolico\n");
      printf("scelta 5 -> Stampare il coktail meno alcolico\n");
      printf("scelta 6 -> Dato un valore di alcolicità, stampare tutti i coctails corrispondenti\n");

      printf("scelta: ");
      printf("inserire la scelta: ");
      scanf("%d", &scelta);
      printf("\n");

      switch(scelta)
        {
          case 0: break;

          case 1:
            {
              do
                {
                  printf("inserire il numero di coktails: ");
                  scanf("%d", &n);
                } while(!(n>0 && n<=MAXN));
              
              carica(vett, n);
            }  break;

          case 2:
            {
              stampa(vett, n);
            }break;

          case 3:
          {
            media = calcolo_media(vett, n);

            printf("la media generale di tutti i coktails e' %f\n", media);
          }break;

          case 4:
            {
              pos = massimo(vett, n);
              printf("Il valore massimo e' %d", vett[pos]);
            }break;

          case 5:
            {
              pos = minimo(vett, n);
              printf("Il valore minimo e' %d", vett[pos]);
            }break;

          case 6:
            {
              
            }break;

          case 6:
            {
              
            } break;
        }
    }while(scelta);

    
	return 0;
}

void carica(int vett[], int n)
{
  int i;

  srand((unsigned)time(NULL));
  
  for(i=0; i<n; i++)
    {
      vett[i] = rand () % (HIGH - LOW +1) + LOW;
    }
}

void stampa(int vett[], int n)
{
  int i;

  for(i=0; i<n; i++)
    {
      printf("vett[%.2d] = %d\n", i, vett[i]);
    }
}

float calcolo_media(int vett[], int n)
{
  int i;
  float media = 0;

  for(i=0; i<n; i++)
    {
      media+=vett[i];
    }
  
  media/=n;

  return media;
  
}

int massimo(int vett[], int n)
{
  int i, pos=0;

  for(i=0; i<n; i++)
    {
      if(vett[i]>vett[pos])
      {
        pos=i;
      }
    }

  return pos;
}

int minimo(int vett[], int n)
{
  int i, pos=0;

  for(i=0; i<n; i++)
    {
      if(vett[i]<vett[pos])
      {
        pos=i;
      }
    }

  return pos;
}

void stampa_gradazione(int vett[], int n, int g)
{
  int i = 0, trovato = 0, pos = 0;

  for(i=0; i < n; i++){
    if(vett[i] == g){
      printf("- cocktail in posizione %d\n", i);
    }  
  }
  
}