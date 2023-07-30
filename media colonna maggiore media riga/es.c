#include <stdio.h>

#define N 3 // Definisci la dimensione N delle matrici
#define K 4 // Definisci la dimensione K delle matrici

// Funzione per calcolare la media degli elementi di ciascuna riga della matrice B
void calcolaMediaRigheB(int B[N][K], float media[N]) {
    for (int i = 0; i < N; i++) {
        float sum = 0;
        for (int j = 0; j < K; j++) {
            sum += B[i][j];
        }
        media[i] = sum / K;
    }
}

// Funzione per calcolare la quantità di elementi di ciascuna colonna di M che sono maggiori della media della corrispondente riga di B
void conteggioElementiMaggioriMedia(int M[N][K], int B[N][K]) {
    float media[N];
    calcolaMediaRigheB(B, media);

    int conteggio[K] = {0}; // Inizializziamo il conteggio a 0 per ogni colonna di M

    for (int j = 0; j < K; j++) {
        for (int i = 0; i < N; i++) {
            if (M[i][j] > media[i]) {
                conteggio[j]++;
            }
        }
    }

    // Stampa i risultati per ogni colonna
    printf("Quantità di elementi maggiori della media della riga di B per ogni colonna di M:\n");
    for (int j = 0; j < K; j++) {
        printf("Colonna %d: %d\n", j, conteggio[j]);
    }
}

int main() {
    int M[N][K] = {
        {5, 10, 15, 20},
        {2, 4, 6, 8},
        {1, 3, 5, 7}
    };

    int B[N][K] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {1, 1, 1, 1}
    };

    conteggioElementiMaggioriMedia(M, B);

    return 0;
}
