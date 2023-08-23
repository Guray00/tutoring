#include <stdio.h>

int postiLiberi(int M[][6]){
  int i, j, cont = 0;
  
  for(i=0; i<45; i++){
    for(j=0; j<6;j++){

      // se è libero
      if(M[i][j] == 0){
        cont++;
      }
    }
  }
  
  return cont;
}

void inizializzaMatrice(int M[][6]){
  // mette tutti zeri dentro la matrice
  int i, j;
  for(i=0; i<45; i++){
    for(j=0; j<6;j++){
      M[i][j]=0;
    }
  }
}

void stampaMatrice(int M[][6]){
  int i, j;
  
  for(i=0; i<45; i++){
    for (j = 0; j < 6; j++){
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }
  
}

int prenotaPosto(int M[][6], int x, int y){
  // -1 se non sono riuscito a inserire il posto
  // 0 se è andato tutto bene
  if(x<45 && y<6 && M[x][y] == 0){
    M[x][y] = 1;
    return 0;
  }
  
  return -1;
}

int cancellaPrenotazione(int M[][6], int i, int j){
  // 0 => prenotazione cancellata 
  // -1 => posizione non esistente
  // -2 => prenotazione non esistente

  // se la matrice è 1 allora la cancello (metto 0)
  if(M[i][j]==1){
    M[i][j] = 0;
    return 0;
  }

  else if(i < 0 || i >= 45 || j < 0 || j >= 6){
    return -1;
  }

  // se è uguale a zero
  else if(M[i][j]==0){
    return -2;
  }
  
}

int contaFileNoPrenotazioni(int M[][6]){
  int file_libere = 0;
  int occupati = 0;
  int i, j;

  // scorriamo tutte le righe
  for(i=0; i<45; i++){
    occupati = 0;

    // conta i posti occupati su una riga
    for(j=0; j<6; j++){
      if(M[i][j] != 0){
        occupati++;
      }
    }

    // se non ho contato posti occupati
    if(occupati==0){
      file_libere++;
    }
    
  }

  return file_libere;
}

float mediaColonne(int M[][6]){
  int i, j;
  int cont = 0;
  int colonne = 0;
  int posti = 0;
  float media;

  // per ogni colonna
  for(j=0; j<6; j++){
    cont = 0;

    // scorro le righe di una colonna
    for(i=0; i<45; i++){
      if(M[i][j] != 0){
        cont++;
      }
    }

    if(cont > 0){
      colonne++;
      posti = posti + cont;
    }
  }

  if (colonne > 0){
    media = (float) posti / colonne;
  }
  else {
    media = 0;
  }

  return media;
}


int main(){
  int n, i, j;
  int M[45][6];
  float media;
  
  inizializzaMatrice(M);
  
  do{
    printf("Inserisci la tua scelta:\n");
		printf("1. Quantità di posti liberi\n");
		printf("2. Stampa aereo\n");
		printf("3. Prenota posto\n");
    printf("4. Cancella prentoazione\n");
    printf("5. Conta file senza ...\n");
    printf("6. Conta prenotati...\n");
		printf("0. Uscire dal programma\n\n");
    
    printf("Scelta: ");
    scanf("%d", &n);

    if(n==1){
      int cont = postiLiberi(M);
      printf("Il numero di posti liberi vale %d\n", cont);
    }

    else if(n==2){
      stampaMatrice(M);
    }

    else if(n==3){
      int tmp;
      printf("Inserisci la fila: ");
      scanf("%d", &i);
      
      printf("Inserisci la colonna: ");
      scanf("%d", &j);

      tmp = prenotaPosto(M, i, j);
      
      if(tmp == 0){
        printf("Prenotazione andata a buon fine\n");
      }
      else {
        printf("Errore! Non è stato possibile prenotare!\n");
      }
      
    }

    else if (n == 4){
      int tmp;
      printf("Inserisci la fila: ");
      scanf("%d", &i);
      
      printf("Inserisci la colonna: ");
      scanf("%d", &j);

      tmp = cancellaPrenotazione(M, i, j);
      if(tmp==0){
        printf("L'azione e andata a buon fine\n");
      }
      
      if(tmp==-1){
        printf("Posto non trovato\n");
      }
      
      if(tmp==-2){
        printf("Posto non prenotato\n");
      }
    }

    else if (n==5){
      int file_libere = contaFileNoPrenotazioni(M);
      printf("Il numero di file libere e': %d\n", file_libere);
    }

    else if (n==6){
      int tmp = mediaColonne(M);
      printf("In media per colonna sono occupati %d posti\n", tmp);
    }

    else if (n==0){
      printf("Arriverci!\n");
    }

    else {
      printf("Hai sbagliato a selezionare!\n");
    }
      
    printf("\n");
  } while(n != 0);

	return 0;
}