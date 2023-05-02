#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SVUOTA while(getchar () != '\n');
#define MAX 100
#define MAXTITOLO 26
#define MAXNOME 31
#define MAXGENERE 21

typedef struct
{
  char titolo[MAXTITOLO], nome[MAXNOME], genere[MAXGENERE];
  int anno, quantita; 
} Videocassetta;

void eliminainvio(char[]);
void carica(Videocassetta v[], int);
void stampa(Videocassetta v[], int);
int ricercaregista(Videocassetta v[], int, char[]);

int main(){
  
  int i, scelta, n=0, conta;
  Videocassetta v[MAX];
  char regista[MAXNOME];

  do
    {
      printf("\n");
      printf("scelta 1 -> Carica tutti i dati\n");
      printf("scelta 2 -> Visualizzare i dati\n");
      printf("scelta 3 -> Contare il numero di videocassette di un regista, di cui è dato il nome\n");

      printf("Scelta: ");
      scanf("%d", &scelta);
      SVUOTA
      printf("\n");

      switch(scelta)
        {
          case 0: break;

          case 1:
            {
              do
                {
                  printf("inserire il numero di videocassette: ");
                  scanf("%d", &n);
                }while(n<0 || n>MAX);

            carica(v, n);
            SVUOTA
              
            } break;

          case 2:
            {
              for(i=0; i<n; i++)
                {
                  stampa(v, i);
                }
              printf("\n");
            } break;

          case 3:
            {
              printf("Inserisci il nome del regista: ");
              fgets(regista, MAXNOME, stdin);
              eliminainvio(regista);

              conta = ricercaregista(v, n, regista);
              printf("Sono stati trovati %d film\n", conta);             
            } break;
        }
    } while(scelta);
  
	return 0;
}

void eliminainvio(char str[])
{
  if(str[strlen(str)-1] == '\n')
    str[strlen(str)-1] = '\0';
}

void carica(Videocassetta v[], int n)
{
  int i;
  
  for(i=0; i<n; i++)
    {
      SVUOTA
      
      printf("\n%d^ prodotti\n", i+1);

      printf("inserire il titolo: ");
      fgets(v[i].titolo, MAXTITOLO, stdin);
      eliminainvio(v[i].titolo);

      printf("inserire il nome: ");
      fgets(v[i].nome, MAXNOME, stdin);
      eliminainvio(v[i].nome);

      printf("inserire il genere: ");
      fgets(v[i].genere, MAXGENERE, stdin);
      eliminainvio(v[i].genere);

      do
        {
          printf("inserire l'anno: ");
          scanf("%d", &v[i].anno);
        }while(v[i].anno<0);

      do
        {
          printf("inserire la quantita: ");
          scanf("%d", &v[i].quantita);
        }while(v[i].quantita<0);  
    }
 
}

void stampa(Videocassetta v[], int i)
{
  printf("\nFilm di titolo %-20s di nome %-20s di genere %-20s di anno %d di quantita %d", v[i].titolo, v[i].nome, v[i].genere, v[i].anno, v[i].quantita);
}

int ricercaregista(Videocassetta v[], int n,  char regista[])
{
  int i, conta = 0;

  for(i=0; i<n; i++)
    {
      if(strcmp(v[i].nome, regista) == 0)
      {
        conta++;
      }
    }

  return conta;
}