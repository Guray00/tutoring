#include <stdio.h>

#define N 3 // Definisci la dimensione N della matrice
#define K 4 // Definisci la dimensione K della matrice

// Funzione per caricare la matrice M da input
void carica(int M[N][K]) {
    // Utilizziamo due cicli for per scorrere tutte le righe (i) e colonne (j) della matrice M.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            // Chiediamo all'utente di inserire un valore per l'elemento in posizione (i, j) della matrice.
            printf("Inserisci l'elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

int main() {
    int M[N][K]; // Definiamo la matrice M di dimensione N*K

    // Chiamiamo la funzione "carica" per permettere all'utente di inserire i valori degli elementi di M.
    carica(M);

    int V[N] = {2, 2, 5}; // Definiamo il vettore V di dimensione N con valori predefiniti.

    int maxRow = -1;    // Indice della riga con la media più grande (inizializzato a -1 per indicare nessuna riga valida trovata)
    float maxMean = 0;  // Valore della media più grande inizializzato a 0.

    // Scorrere tutte le righe della matrice M
    for (int i = 0; i < N; i++) {
        int sum = 0;    // Variabile per calcolare la somma degli elementi pari e divisibili per V[i] nella riga corrente.
        int count = 0;  // Contatore per tenere traccia del numero di elementi pari e divisibili per V[i] nella riga corrente.

        // Scorrere tutte le colonne della riga i-esima
        for (int j = 0; j < K; j++) {
            // Controlla se l'elemento in posizione (i, j) è pari e divisibile per V[i]
            if (M[i][j] % 2 == 0 && M[i][j] % V[i] == 0) {
                sum += M[i][j]; // Se l'elemento soddisfa i criteri, aggiungilo alla somma
                count++;       // Incrementa il contatore
            }
        }

        // Calcola la media solo se ci sono elementi pari e divisibili per V[i] nella riga corrente
        if (count > 0) {
            float mean = (float) sum / count; // Calcola la media come somma divisa per il numero di elementi

            // Se la media calcolata è maggiore della media massima finora trovata, aggiorna i valori massimi
            if (mean > maxMean) {
                maxMean = mean; // Aggiorna la media massima
                maxRow = i;     // Aggiorna l'indice della riga con la media più grande
            }
        }
    }

    // Stampa il risultato
    if (maxRow != -1) {
        printf("La riga con la media più grande è la riga %d\n", maxRow);
    } else {
        printf("Nessuna riga contiene elementi pari e divisibili per V corrispondente.\n");
    }

    return 0;
}