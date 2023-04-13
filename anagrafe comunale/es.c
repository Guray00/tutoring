#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SVUOTA while(getchar () != '\n');
#define MAX 200
#define MAXCODICE 6
#define MAXNOME 31
#define MAXINDIRIZZO 21

// definizione della struttura
typedef struct
{
  char codice[MAXCODICE], nominativo[MAXNOME],           
  indirizzo[MAXINDIRIZZO];
  int anno;
} Cittadino;

void eliminainvio(char[]);
void carica(Cittadino[], int);
void stampa(Cittadino[], int);
int massimo(Cittadino[], int);
void stampa_indirizzo(Cittadino[], int, char[]);
void stampa_anno(Cittadino[], int, int);
void stampa_70(Cittadino[], int);
void stampa_minorenni(Cittadino[], int);

int main(){
  
  Cittadino c[MAX];
  int i, scelta, n = 0;

  do
    {
      printf("\n");
      printf("0 -> Termina il programma\n");
      printf("1 -> Carica n<=200 cittadini\n");
      printf("2 -> stampa tutti i dati\n");
      printf("3 -> Visualizzare i dati dei cittadini residenti in un determinato indirizzo\n");
      printf("4 -> Visualizzare i dati dei cittadini nati in un determinato anno\n");
      printf("5 -> Visualizzare il numero di cittadini over 70\n");
      printf("6 -> Visualizzare il numero di cittadini minorenni\n");
      printf("7 -> Visualizzare i dati del cittadino più vecchio\n");

      printf("scelta: ");
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
                  printf("inserire il numero di cittadini: ");
                  scanf("%d", &n);
                }while(n<=0 || n>MAX);

              carica(c, n);
            } break;

          case 2:
            {
              for(i=0; i<n; i++)
                {
                  stampa(c, i);
                }
            } break;

          case 3:
            {
              // l'indirizzo da verificare
              char indirizzo[MAXINDIRIZZO];

              printf("Inserisci l'indirizzo: ");
              fgets(indirizzo, MAXINDIRIZZO, stdin);
              eliminainvio(indirizzo);

              stampa_indirizzo(c, n, indirizzo);
              
            } break;

          case 4:
            {
              // l'indirizzo da verificare
              int anno;

              printf("Inserisci l'anno: ");
              scanf("%d", &anno);

              stampa_anno(c, n, anno);
              
            } break;

          case 5:
            {
              stampa_70(c, n);
            } break;

          case 6:
            {
              stampa_minorenni(c, n);
            } break;

          case 7:
            {
              int pos = massimo(c, n);
              stampa(c, pos);
            } break;
          
        }
      

    } while(scelta);
	
  return 0;
}

// funzione che sostituisce l'ultimo carattere
void eliminainvio(char str[])
{
  if(str[strlen(str)-1] == '\n')
    str[strlen(str)-1] = '\0';
}

void carica(Cittadino c[], int n)
{
  int i;

  // in modo da evitare problemi con l'invio 
  // della richiesta precedente
  SVUOTA;

  for(i=0; i<n; i++)
    {
      printf("%d^ cittadino\n", i+1);

      printf("inserire il codice: ");
      fgets(c[i].codice, MAXCODICE, stdin);
      eliminainvio(c[i].codice);

      printf("inserire il nominativo: ");
      fgets(c[i].nominativo, MAXNOME, stdin);
      eliminainvio(c[i].nominativo);

      printf("inserire l'indirizzo: ");
      fgets(c[i].indirizzo, MAXINDIRIZZO, stdin);
      eliminainvio(c[i].indirizzo);

      printf("inserire l'anno di nascita: ");
      scanf("%d", &c[i].anno);
      SVUOTA;
    }
}

// funzione che consente di stampare a schermo le informazioni
// dei cittadini
void stampa(Cittadino c[], int i)
{
  printf("\n%d^ cittadino\n", i+1);
  printf("  -> Codice = %-20s\n", c[i].codice);
  printf("  -> Nominativo = %-20s\n", c[i].nominativo);
  printf("  -> Indirizzo = %-20s\n", c[i].indirizzo);
  printf("  -> Anno di nascita = %d\n", c[i].anno);
}

// Visualizzare i dati dei cittadini residenti in un determinato indirizzo
void stampa_indirizzo(Cittadino c[], int n, char ind[])
{
  int i;

  for(i=0; i<n; i++)
  {
    if(strcmp(c[i].indirizzo, ind) == 0)
    {
      stampa(c, i);
    }
  }
}

void stampa_anno(Cittadino c[], int n, int an)
{
  int i;

  for(i=0; i<n; i++)
  {
    if(c[i].anno == an)
    {
      stampa(c, i);
    }
  }
}

void stampa_70(Cittadino c[], int n)
{
  int i;

  for(i=0; i<n; i++)
  {
    if(2023 - c[i].anno >= 70)
    {
      stampa(c, i);
    }
  }
}

void stampa_minorenni(Cittadino c[], int n)
{
  int i;

  for(i=0; i<n; i++)
  {
    if(2023 - c[i].anno < 18)
    {
      stampa(c, i);
    }
  }
}

int massimo(Cittadino c[], int n){

  int max;
  int i, pos;

  max = 2023 - c[0].anno;
  pos = 0;
  
  for (i = 0; i < n; i++){
    if(2023 - c[i].anno > max){
      max = 2023-c[i].anno;
      pos = i;
    }  
  }

  return pos;
}