#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODOTTI    50
#define LEN_CODICE      5
#define LEN_DESCRIZIONE 30

typedef struct {
    int quantita;
    float prezzo; 
    char codice[LEN_CODICE], descrizione[LEN_DESCRIZIONE];
} Prodotto;

void carica(Prodotto[], int);
void elimina_invio(char[]);
void stampa(Prodotto[], int);

int main() {
  int scelta = 0, n = 0, pos_prodotto_piu_costoso;
  Prodotto lista_prodotti[MAX_PRODOTTI];
  
	printf("##### CARTOLERIA #####\n");
	
  do {
    printf("\t0. Uscita.\n");
    printf("\t1. Caricare articoli.\n");
    printf("\t2. Visualizzare tutti i dati.\n");
    printf("\t3. Visualizzare uno qualunque degli articoli che costano di più.\n");
    printf("\t4. Visualizzare tutti gli articoli che hanno il prezzo maggiore.\n");
    printf("\t5. Visualizzare la quantità media.\n");
    printf("\t6. Visualizzare gli articoli che hanno quantità superiore alla media.\n");
    printf("\t7. Visualizzare l'articolo di cui è dato il codice.\n");
    printf("\t8. Visualizzare l'articolo di cui è data la descrizione.\n");
    printf("\t9. Visualizzare tutti gli articoli in ordine alfabetico (di descrizione).\n");

    switch(scelta)
    {
        case 0: break;

        case 1:
        {
            do {
                printf("Inserire il numero di prodotti: ");
                scanf("%d", &n);
            } while(n < 1 || n > MAX_PRODOTTI);
            carica(lista_prodotti, n);
        } break;

        case 2:
        {
            stampa(lista_prodotti, n);
        } break;

      case 3:
      {
        pos_prodotto_piu_costoso = ricerca_articolo_prezzo_maggiore(lista_prodotti, n);
        printf("Articolo più costoso\n");
        printf("\tCodice: %s\n", lista_prodotti[pos_prodotto_piu_costoso].codice);
        printf("\tDescrizione: %s\n", lista_prodotti[pos_prodotto_piu_costoso].descrizione);
        printf("\tPrezzo: %f\n", lista_prodotti[pos_prodotto_piu_costoso].prezzo);
        printf("\tQuantita': %d\n", lista_prodotti[pos_prodotto_piu_costoso].quantita);
      } break;
      
    }
    
  } while(scelta > 0);

  return 0;
}

void carica(Prodotto p[], int n)
{
  for(int i = 0; i < n; i++)
  {
      printf("Prodotto %d\n", i);

      // L'utente inserisce il codice del prodotto.
      printf("\tCodice: ");
      fgets(p[i].codice, LEN_CODICE, stdin); 
      elimina_invio(p[i].codice);

      // L'utente inserisce la descrizione del prodotto.
      printf("\tDescrizione: ");
      fgets(p[i].descrizione, LEN_DESCRIZIONE, stdin);
      elimina_invio(p[i].descrizione);

      // L'utente inserisce il numero di prodotti presenti.
      printf("\tQuantità: ");
      scanf("%d", p[i].quantita);

      // L'utente inserisce il prezzo del prodotto.
      printf("\tPrezzo: ");
      scanf("%f", p[i].prezzo);
  }
}

void elimina_invio(char str[])
{
  if(str[strlen(str)-1] != '\0')
    str[strlen(str)-1] = '\0';
}

void stampa(Prodotto p[], int n)
{
  int i; 
  
  for(i = 0; i < n; i++)
  {
      printf("Prodotto[%d]\n", i);

      // Stampa il codice del prodotto.
      printf("\tCodice: %s\n", p[i].codice); 

      // Stampa la descrizione del prodotto.
      printf("\tDescrizione: %s\n", p[i].descrizione);

      // Stampa il numero di prodotti presenti.
      printf("\tQuantità: %d\n", p[i].quantita);

      // Stampa il prezzo del prodotto.
      printf("\tPrezzo: %f\n", p[i].prezzo);
  }
}

float ricerca_prezzo_maggiore(Prodotto p[], int n)
{
  int i = 0;
  float prezzo_maggiore_corrente = p[0].prezzo;
  
  do
  {
    if(prezzo_maggiore_corrente < p[i + 1].prezzo)
      prezzo_maggiore_corrente = p[i + 1].prezzo;
    i++;
  } while(i < n-1);

  return prezzo_maggiore_corrente;
}

int ricerca_articolo_prezzo_maggiore(Prodotto p[], int n)
{
  int i, pos = 0;
  float prezzo_maggiore_corrente = ricerca_prezzo_maggiore(p, n);

  for(i=0; i<n; i++)
  {
    if(prezzo_maggiore_corrente == p[i].prezzo) {
      pos = i;
      break;
    }
  }

  return pos;
}