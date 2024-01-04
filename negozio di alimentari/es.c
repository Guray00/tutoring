#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// struttura per l'articolo
typedef struct {
  char codice[9]; // 8 + 1 per il terminatore
  double prezzo;
} Articolo;

// struttura per l'acquisto
typedef struct {
  char codice[9]; // 8 + 1 per il terminatore
  int quantita;
} Acquisto;

// struttura per salvare l'incasso di un articolo
typedef struct{
  char codice[9];
  int quantita;
  double incasso;
} IncassoArticolo;

// funzione per la lettura degli articoli
int leggiArticoli(const char* nomefile, Articolo articoli[]){
  FILE *fp = fopen(nomefile, "r");

  // controllo se non sono riuscito ad aprire il file
  if(fp == 0){
    printf("Errore apertura file");
    return -1; // esco perchè non devo leggere
  }

  int i = 0;

  // finchè il file non è finito leggo la riga
  while(!feof(fp)){
    // leggi una riga del file
    fscanf(fp, "%8s %lf", articoli[i].codice, &articoli[i].prezzo);
    i++; // contatore di articoli letti
  }

  fclose(fp);
  return i;
}

// funzione che stampa gli acquisti
void stampaArticoli(Articolo articoli[], int n_articoli){
  // per ogni articolo presente
  for(int i=0; i < n_articoli; i++){
    // stampo le informazioni dell'articolo
    printf("%8s %lf\n", articoli[i].codice, articoli[i].prezzo);
  } 
}

// funzione che legge il file degli acquisti
int leggiAcquisti(const char* nomefile, Acquisto acquisti[]){
  FILE *fp = fopen(nomefile, "r");
  int i = 0;

  // controllo che il file sia stato aperto correttamente
  if(fp == 0){
    printf("Errore nell'apertura del file");
    return -1;
  }

  // leggiamo ogni riga del file
  while(!feof(fp)){
    fscanf(fp,"%8s %d", acquisti[i].codice, &acquisti[i].quantita);
    i++;
  }

  fclose(fp);
  return i;
}

void stampaAcquisti(Acquisto acquisti[], int n_acquisti){
  // per ogni acquisto presente
  for(int i=0; i < n_acquisti; i++){
    // stampo le informazioni dell'acquisto
    printf("%8s %d\n", acquisti[i].codice, acquisti[i].quantita);
  } 
}

//funzione che calcola gli incassi totali
void calcolaIncassi(IncassoArticolo incassi[], Articolo articoli[], int n_articoli, Acquisto acquisti[], int n_acquisti){
  
  // per ogni articolo
  for(int i = 0; i<n_articoli; i++){

    // la quantità iniziale è 0
    int quantita = 0;

    // scorro ogni acquisto
    for(int j = 0; j < n_acquisti; j++){

      // controllo se il codice è uguale
      if(strcmp(articoli[i].codice, acquisti[j].codice) == 0){
        // sommo la quantità a quella che ho calcolato
        quantita += acquisti[j].quantita;
      }
    }

    // qua ho le quantità per un articolo 
    strcpy(incassi[i].codice, articoli[i].codice);
    incassi[i].quantita = quantita;
    incassi[i].incasso  = articoli[i].prezzo * quantita;

    // ordinamento degli incassi in ordine decrescente
    for (int i = 0; i < n_articoli - 1; i++) {
      for (int j = i + 1; j < n_articoli; j++) {
        if (incassi[i].incasso < incassi[j].incasso) {
          IncassoArticolo temp = incassi[i];
          incassi[i] = incassi[j];
          incassi[j] = temp;
        }
      }
    } 
  }
}

// funzione che scrive gli incassi nel file
int scriviIncassi(const char* nomefile, IncassoArticolo incassi[], int n_articoli, double incassoTotale) {

  // --- stiamo andando a scrivere nel file ---
  FILE *fp = fopen(nomefile, "w");
  int i = 0;
  if (fp == 0){
    printf("Errore nell'apertura del file");
    return -1;
  }

  // scrivo l'incasso totale
  fprintf(fp, "%.2lf\n", incassoTotale);

  // per ogni incasso presente
  for (i = 0; i < n_articoli; i++) {
    // scrivo le informazioni dell'incasso
    fprintf(fp, "%8s %d %.2lf\n", incassi[i].codice, incassi[i].quantita, incassi[i].incasso);
  }


  fclose(fp);
  return i;
}

int main(){

  // vettori in cui andiamo a salvare i dati che leggiamo
  Articolo articoli[MAX];
  Acquisto acquisti[MAX];
  IncassoArticolo  incassi[MAX];

  int n_articoli = leggiArticoli("articoli.txt", articoli);
  //stampaArticoli(articoli, n_articoli);

  int n_acquisti = leggiAcquisti("acquisti.txt", acquisti);
  //stampaAcquisti(acquisti, n_acquisti);

  // calcoliamo gli incassi
  calcolaIncassi(incassi, articoli, n_articoli, acquisti, n_acquisti);

  double incassoTotale = 0.0;
  for (int i = 0; i < n_articoli; i++) {
    incassoTotale += incassi[i].incasso;
  }

  // scriviamo gli incassi nel file
  scriviIncassi("incassi.txt", incassi, n_articoli, incassoTotale);

  return 0;
}