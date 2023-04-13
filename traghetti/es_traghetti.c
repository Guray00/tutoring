#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_TRAGHETTI 50
#define MAX_LUNGHEZZA 50
#define SVUOTA while(getchar()!='\n');

typedef struct {
  char porto_destinazione[MAX_LUNGHEZZA];
  int passeggeri, tempo_percorrenza;
} Traghetto;

void carica(Traghetto[], int);
void stampa(Traghetto[], int);
void elimina_invio(char[]);
float calcolo_media(Traghetto[], int);
int tempo_minimo(Traghetto[], int);
int tempo_minimo_porto_dest(Traghetto[], int, char[MAX_LUNGHEZZA]);

int main()
{
  int n=0, scelta, i, minimo;
  float media;
  char porto_destinazione[MAX_LUNGHEZZA];
  Traghetto t[MAX_TRAGHETTI];
  printf("***** TRAGHETTI *****\n");

  do
    {
      printf("\n");
      printf("scelta 0 -> Fine\n");
      printf("scelta 1 -> Caricare i dati\n");
      printf("scelta 2 -> Visualizzare tutti i dati\n");
      printf("scelta 3 -> Visualizzare la media\n");
      printf("scelta 4 -> Visualizzare i dati dei traghetti con tempo di percorrenza > della media");
      printf("scelta 5 -> Visualizzare i dati di tutti i traghetti con tempo di percorrenza minimo\n");
      printf("scelta 6 -> Visualizzare i dati del traghetto che impiega il minor tempo a raggiungere un determinato porto di destinazione\n");

      printf("scelta: \n");
      scanf("%d", &scelta);
      printf("\n");

      switch(scelta)
        {
          case 0: break;

          case 1: 
            {
              do
                {
                  printf("inserire il numero di traghetti:");
                  scanf("%d", &n);
                } while(n<1 || n>MAX_TRAGHETTI);

              carica(t, n);
              
            } break;

          case 2 : stampa(t, n); break;

          case 3:
            {
              media = calcolo_media(t, n);
              printf("La media equivale a %.2f\n", media);
            } break;

          case 4:
            {
              media = calcolo_media(t, n);

              for(i=0; i<n; i++)
                {
                  if(t[i].tempo_percorrenza > media)
                  {
                    printf("Traghetto %d\n", i+1);
                    printf("\tPorto di destinazione: %s\n", t[i].porto_destinazione);
                    printf("\tNumero massimo di passeggeri: %d\n", t[i].passeggeri);
                    printf("\tTempo di percorrenza (minuti): %d\n", t[i].tempo_percorrenza);
                  }
                }
            } break;

          case 5: 
            {
              minimo = tempo_minimo(t, n);

              // Visto che più traghetti possono avere lo stesso tempo di percorrenza
              // e visto che tale tempo può coincidere con il tempo minimo, dobbiamo
              // fare in modo di stampare tutti i traghetti e non solo uno.

              for(i=0; i<n; i++)
                {
                  // Grazie al for possiamo visitare, uno ad uno, i traghetti che abbiamo
                  // memorizzato nel vettore t[]. Per ogni traghetto verifichiamo se il suo
                  // tempo di percorrenza sia uguale al tempo di percorrenza minimo che
                  // abbiamo trovato grazie alla funzione 'tempo_minimo(t, n)'. 
                  if(t[i].tempo_percorrenza == minimo)
                  {
                    // Se entriamo dentro 'if' significa che il traghetto ha il tempo
                    // di percorrenza minimo e quindi dobbiamo stampare le sue informazioni.
                    printf("Traghetto %d\n", i+1);
                    printf("\tPorto di destinazione: %s\n", t[i].porto_destinazione);
                    printf("\tNumero massimo di passeggeri: %d\n", t[i].passeggeri);
                    printf("\tTempo di percorrenza (minuti): %d\n", t[i].tempo_percorrenza);
                  }
                }
              // Facciamo un esempio di esecuzione del case 5. Supponiamo di avere i seguenti 3 traghetti:
              //     t[0]:
              //         porto_destinazione = 'Olbia'
              //         passeggeri = 150
              //         tempo_percorrenza = 250
              //     t[1]:
              //         porto_destinazione = 'Cagliari'
              //         passeggeri = 175
              //         tempo_percorrenza = 325
              //     t[2]:
              //         porto_destinazione = 'Arbatax'
              //         passeggeri = 125
              //         tempo_percorrenza = 250
              // Come vediamo, il tempo di percorrenza minimo è 250 minuti ma la particolarità è che sono ben
              // due traghetti ad avere quel tempo di percorrenza: t[0] e t[2]. Quando eseguiamo il caso 5 il
              // programma ci deve stampare le informazioni del traghetto t[0] e del traghetto t[2].
              // Eseguiamo a mente il codice:
              //    -> Quando il main chiama la funzione tempo_minimo(t,n) dentro la variabile minimo ci trova 250.
              //    -> Ciclo for: 
              //          i = 0 -> il primo traghetto, t[0], ha tempo di percorrenza uguale a 250 per cui il 
              //          programma stampa le informazioni.
              //          i = 1 -> il secondo traghetto, t[1], ha tempo di percorrenza uguale a 325 per cui il 
              //          programma NON stampa le informazioni.
              //          i = 2 -> il terzo traghetto, t[2], ha tempo di percorrenza uguale a 250 per cui il
              //          programma stampa le informazioni.
            } break;

          case 6:
            {
              printf("inserire il porto di destinazione: ");
              scanf("%s", porto_destinazione);

              minimo = tempo_minimo_porto_dest(t, n, porto_destinazione);

              for(i=0; i<n; i++)
                {
                  if(t[i].tempo_percorrenza == minimo && strcmp(t[i].porto_destinazione, porto_destinazione) == 0)
                  {
                    printf("Traghetto %d\n", i+1);
                    printf("\tPorto di destinazione: %s\n", t[i].porto_destinazione);
                    printf("\tNumero massimo di passeggeri: %d\n", t[i].passeggeri);
                    printf("\tTempo di percorrenza (minuti): %d\n", t[i].tempo_percorrenza);
                  }
                }
            } break;
        }
      
    } while(scelta);
}

void carica(Traghetto t[], int n)
{
  for(int i = 0; i < n; i++)
  {
      SVUOTA
      printf("Traghetto %d\n", i+1);

      // L'utente inserisce il porto di destinazione del traghetto.
      printf("\tPorto di destinazione: ");
      fgets(t[i].porto_destinazione, MAX_LUNGHEZZA, stdin); 
      elimina_invio(t[i].porto_destinazione);

      // L'utente inserisce il numero massimo di passeggeri.
      printf("\tNumero massimo di passeggeri: ");
      scanf("%d", &t[i].passeggeri);

      // L'utente inserisce il tempo di percorrenza (in minuti).
      printf("\tTempo di percorrenza (minuti): ");
      scanf("%d", &t[i].tempo_percorrenza);
  }
}

void elimina_invio(char str[])
{
  if(str[strlen(str)-1] == '\n')
    str[strlen(str)-1] = '\0';
}

void stampa(Traghetto t[], int n)
{
  for(int i = 0; i < n; i++)
  {
      printf("Traghetto %d\n", i+1);

      // Stampa  il porto di destinazione del traghetto.
      printf("\tPorto di destinazione: %s\n", t[i].porto_destinazione); 

      // Stamp il numero massimo di passeggeri.
      printf("\tNumero massimo di passeggeri: %d\n", t[i].passeggeri);

      // Stampa il tempo di percorrenza (in minuti).
      printf("\tTempo di percorrenza (minuti): %d\n", t[i].tempo_percorrenza);
  }
}

float calcolo_media(Traghetto t[], int n)
{
  int i;
  float media = 0.0;

  for(i=0; i<n; i++)
  {
    media += t[i].tempo_percorrenza;
  }

  media = media/n;

  return media;
}

int tempo_minimo(Traghetto t[], int n)
{
  // pos memorizza la posizione, all'interno del vettore t[], del traghetto con il tempo
  // di percorrenza minimo.
  int i, pos=0;

  for(i=0; i<n; i++)
    {
      if(t[i].tempo_percorrenza < t[pos].tempo_percorrenza)
      {
        // Se entro dentro questo 'if' vuol dire che il traghetto t[i]
        // ha un tempo di percorrenza minore rispetto a quello prece-
        // dentemente trovato. Aggiorno la variabile pos con la posi-
        // zione che indica il traghetto con tempo di percorrenza
        // minimo corrente.
        pos = i;
      }
    }

  // La funziona ritorna IL TEMPO DI PERCORRENZA MINIMO tra tutti i 
  // tempi presenti nel vettore t[].
  return t[pos].tempo_percorrenza;
  
}

int tempo_minimo_porto_dest(Traghetto t[], int n, char porto_destinazione[MAX_LUNGHEZZA])
{
  int i, pos = 0;

  for(i = 0; i < n; i++) 
    {
      if(t[i].tempo_percorrenza < t[pos].tempo_percorrenza && strcmp(t[i].porto_destinazione, porto_destinazione) == 0)
        pos = i;
    }

  return t[pos].tempo_percorrenza;
}