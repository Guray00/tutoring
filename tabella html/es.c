#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void leggiTabella(const char* nomefile, int matrice[][MAX], int* nrighe, int* ncolonne){
  // apro il file
  FILE* fp = fopen(nomefile, "r");
  if(fp == NULL){
    printf("Errore nell'apertura del file");
    return;
  }

  // leggi una riga
  fscanf(fp, "%d  %d", nrighe, ncolonne);

  // per ogni riga rimanente
  for(int i = 0; i < *nrighe; i++){
    // per ogni colonna rimanente
    for(int j = 0; j < *ncolonne; j++){
      // leggiamo una cella
      fscanf(fp, "%d  ", &matrice[i][j]);
    }
  }
  
  fclose(fp);
}

// funzione di utility per stampare una tabella
void stampaMatrice(int matrice[][MAX], int righe, int colonne){
  for(int i=0; i<righe;i++){
    for(int j = 0; j < colonne; j++){
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }
}

// funzione che scrive una tabella in fomrato html 
void scriviTabella(const char* nomefile, int matrice[][MAX], int righe, 
 int colonne){
  // apertura del file e controllo
  FILE* fp = fopen(nomefile, "w");
  if(fp == NULL){
    printf("Errore nell'apertura del file");
    return;
  }
  
  // prologo del html
  fprintf(fp, "<html>\n");
  fprintf(fp, "\t<body>\n");
  fprintf(fp, "\t\t<table>\n");

  // scorre le righe
  for(int i=0; i<righe;i++){
    fprintf(fp, "\t\t\t<tr>\n");
    
    // scorre le colonne
    for(int j=0; j<colonne; j++){
      fprintf(fp, "\t\t\t\t<td>%d</td>\n", matrice[i][j]);
    }
    
    fprintf(fp, "\t\t\t<tr>\n");
  }

  // epilogo del html
  fprintf(fp, "\t\t</table>\n");
  fprintf(fp, "\t</body>\n");
  fprintf(fp, "</html>\n");
  fclose(fp);
}

int main(){
  int matrice[MAX][MAX];
  int nrighe;
  int ncolonne;

  leggiTabella("tabella.txt", matrice, &nrighe, &ncolonne);
  //stampaMatrice(matrice, nrighe, ncolonne);

  // funzione che scrive la tabella in html
  scriviTabella("tabella.html", matrice, nrighe, ncolonne); 

	return 0;
}