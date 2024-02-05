#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SVUOTA while(getchar () != '\n');
#define MAX 100
#define MAXDESCRIZIONE 21
#define MAXUBICAZIONE 21


typedef struct{
  char descrizione[MAXDESCRIZIONE], ubicazione[MAXUBICAZIONE]; 
  int codice, superficie, tipo;
  float prezzo;
} Immobili;

void eliminainvio(char[]);
void carica(Immobili i[], int);
void stampa(Immobili i[], int);

// funzione che stampa solo gli elementi di un certo tipo
void stampa_per_tipo(int, Immobili[], int);

// funzione che restituisce la posizione in cui viene trovato un elemento 
int ricerca_codice(int, Immobili[], int);

// conta gli immobili di un tipo
int conta_per_tipo(int, Immobili[], int);

int main(){

	int i, scelta, n = 0;
  Immobili im[MAX];

  do
  {
    printf("\n");
    printf("scelta 1 -> Caricare i dati\n");
    printf("scelta 2 -> Visualizzare i dati\n");
    printf("scelta 3 -> Visualizzare i dati di tutti gli immobili di un determinato tipo\n");
    printf("scelta 4 -> Visualizzare i dati dell' immobile di cui è dato il codice\n");
    printf("scelta 5 -> Contare gli immobili di un determinato tipo\n");
    printf("scelta 6 -> Contare gli immobili di tipo Abitazione\n");
    printf("scelta 7 -> Visualizzare i dati di tutti gli immobili di tipo Abitazione con prezzo compreso tra un prezzo iniziale e un prezzo finale forniti in input\n");
    printf("scelta 8 -> Calcolare la superficie media di tutti gli Uffici\n");
    printf("scelta 9 -> Visualizzare tutti gli Uffici con superficie maggiore della media.\n");

    printf("Scelta: ");
    scanf("%d", &scelta);
    printf("\n");
    SVUOTA

    switch(scelta)
      {
        case 0: break;

        case 1:
          {
            do
              {
                printf("inserire il numero di immobili: ");
                scanf("%d", &n);
              } while(n<0 || n>MAX);
            
            carica(im, n);
            SVUOTA
          } break;

        case 2:
          {
            for(i=0; i<n; i++)
              {
                stampa(im, i);
              }
          } break;

        case 3:
          {
            int tipo;
             do
              {
            printf("Inserisci il tipo  [0: abitazione, 1:ufficio, 2: negozio]: ");
            scanf("%d", &tipo);
              } while(tipo < 0 || tipo > 2);

            stampa_per_tipo(tipo, im, n);
          } break;
      }
  
  } while(scelta > 0);

  
    
	return 0;
}

void eliminainvio(char str[])
{
  if(str[strlen(str)-1] == '\n')
    str[strlen(str)-1] = '\0';
}


void carica(Immobili im[], int n)
{
  int i;

  for(i=0; i<n; i++)
    {
      printf("%d^ immobili\n", (i+1));

      // inserimento codice
      printf("inserire il codice: ");
      scanf("%d", &im[i].codice);
      SVUOTA

      // inserimento tipo
      do {
        printf("inserire il tipo [0: abitazione, 1:ufficio, 2: negozio]: ");
        scanf("%d", &im[i].tipo);
        SVUOTA
      }  while(im[i].tipo < 0 || im[i].tipo > 2);
      
      printf("inserire la descrizione: ");
      fgets(im[i].descrizione, MAXDESCRIZIONE, stdin);
      eliminainvio(im[i].descrizione);

      printf("inserire l'ubicazione: ");
      fgets(im[i].ubicazione, MAXUBICAZIONE, stdin);
      eliminainvio(im[i].ubicazione);

      printf("inserire la superficie: ");
      scanf("%d", &im[i].superficie);
      SVUOTA

      printf("inserire il prezzo: ");
      scanf("%f", &im[i].prezzo);
      SVUOTA
      
    }
    
}

// funzione che stampa a schermo tutti gli elementi
void stampa(Immobili im[], int i)
{
  printf("%d^ Immobile: \n", (i+1));
  printf("=> Codice: %d\n", im[i].codice);
  
  // stampiamo in base alla situazione
  switch(im[i].tipo){
    case 0:
      printf("=> Tipo: Abitazione\n");
      break;
    case 1:
      printf("=> Tipo: Ufficio\n");
      break;
    case 2:
      printf("=> Tipo: Negozio\n");
      break;
  }
  
  printf("=> Descrizione: %s\n", im[i].descrizione);
  printf("=> Ubicazione: %s\n", im[i].ubicazione);
  printf("=> Superficie: %d\n", im[i].superficie);
  printf("=> Prezzo: %f\n", im[i].prezzo);
  printf("\n");
  
}

void stampa_per_tipo(int tipo, Immobili im[], int n){
  int i;

  for (i=0; i < n; i++){
    // se il tipo di i è uguale al tipo di pos allora stampa
    if(im[i].tipo == tipo){
      stampa(im, i);
    }
  }
  
}

// funzione che deve restituire la posizone
int ricerca_codice(int codice, Immobili im[], int n){
  int i;

  for (i=0; i < n; i++){
    // se lo trovo
    if(codice == im[i].codice){
      // restituisco la posizione
      return i;
    } 
  }

  // se arrivo qua, non ho trovato nulla
  return -1; // -1 significa che non lo ho trovato
}