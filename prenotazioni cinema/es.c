#include<stdio.h>

#define N 3
#define K 3

// mettiamo a zero tutti i valori perchè il cinema è vuoto
void inizializza(int M[][K]){
  int i,j;

  for (i=0; i < N; i++){
    for (j=0; j < K; j++){
      M[i][j] = 0;
    }
  }
}

void acquista_biglietto(int M[][K], int fila, int colonna, int ridotto){

  // controllo sulla riga
  if (fila > N || fila < 0){
    printf("Fila non esistente\n");
    return;
  }

  if (colonna > K || colonna < 0){
    printf("Colonna non esistente\n");
    return;
  }

  // continua solo se le condizioni sono false
  if(ridotto == 1){
    M[fila][colonna] = 8;
  }
  
  else {
    M[fila][colonna] = 10;
  }
      
}

void annulla_prenotazione(int M[][K], int fila, int colonna){

  if (fila > N || fila < 0){
    printf("Fila inesistente.\n");
    return;
  }

  if (colonna > K || colonna < 0){
    printf("Colonna inesistente.\n");
    return;
  }

  // continua solo se la fila e la colonna sono corrette
  if (M[fila][colonna] != 0){
    M[fila][colonna] = 0;
    printf("Prenotazione annullata correttamente.\n");
  }

  else {
    printf("Il posto non era stato prenotato.\n");
  }
  
}

int incasso_totale(int M[][K]){

  int i,j;
  int totale = 0;

  for (i = 0; i < N; i++){
    for (j=0; j < K; j++){
      totale = totale + M[i][j];
    }
  }

  return totale;
}

void stampa(int M[][K]){
  int i,j;

  for (i = 0; i < N; i++){
    for (j = 0; j < K; j++){
      printf("%.2d ", M[i][j]);
    }

    printf("\n");
  }
}

int main(){

  // matrice
  int M[N][K];
  inizializza(M);

  // -1 per dire che ancora non ho compiuto in una scelta
  int scelta = -1;
  
  do {
    printf("\nSeleziona una delle seguenti opzioni:\n");
    printf("1) Acquista un biglietto\n");
    printf("2) Cancella prenotazione\n");
    printf("3) Calcola incasso totale\n");
    printf("4) Stampa matrice\n");
    printf("0) Esci dal programma\n");
    printf("\nScelta: ");

    // prendiamo in input cosa l'utente vuole fare
    scanf("%d", &scelta);

    switch(scelta){

      case 1:{
        int ridotto, fila, colonna;

        // fila di interesse
        printf("In quale fila ti vuoi sedere? ");
        scanf("%d", &fila);

        // colonna di interesse
        printf("In quale colonna ti vuoi sedere? ");
        scanf("%d", &colonna);

        if (M[fila][colonna] != 0){
          printf("Posto già prenotato, mi dispiace\n\n");
          break;
        }
        
        printf("Paghi ridotto? (1 si, 0 no) ");
        scanf("%d", &ridotto);

        acquista_biglietto(M, fila, colonna, ridotto);
        }
        
        break;

      case 2:{

        int fila, colonna;

        printf("In quale fila eri prenotato? ");
        scanf("%d", &fila);
        
        printf("In quale colonna eri prenotato? ");
        scanf("%d", &colonna);

        annulla_prenotazione(M, fila, colonna);
        
      } break;

      case 3:
        printf("L'incasso totale e' di %d\n", incasso_totale(M));
        break;

      case 4:
        stampa(M);
        break;
      
    }

  } while(scelta != 0);

  return 0;
}