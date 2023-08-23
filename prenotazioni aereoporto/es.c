
// mettiamo a zero tutti i dati
void inizializza(int aereo[][6]){
  int i, j;

  for (i = 0; i < 45; i++){
    for (j = 0; j < 6; j++){
      aereo[i][j] = 0;
    }
  }
}

// 1) posti liberi
int contaLiberi(int aereo[][6]){
  int i, j;
  int conta = 0;

  for (i = 0; i < 45; i++){
    for (j= 0; j < 6; j++){
      if (aereo[i][j] == 0){
        conta += 1; // conta = conta + 1;
      }
    }  
  }

  return conta;
}

void stampa(int aereo[][6]){
  int i, j;

  for (i=0; i < 45; i++){
    for (j = 0; j < 6; j++){
      printf("%d ", aereo[i][j]);
    }
    printf("\n");
  }
  
}

void prenotaPosto(int aereo[][6], int fila, int colonna){

  // il posto è già corretto
  aereo[fila][colonna] = 1;
  
}

int main(){
	int aereo[45][6]; //aereo con 45 file di posti e 6 linee
	int scelta, fila, posto;
	
	inizializza(aereo);
	
	do{
		printf("Inserisci la tua scelta.\n");
		printf("1. Quantità di posti liberi\n");
		printf("2. Stampa gli arei\n");
		printf("3. Prenota posto\n");
    printf("4. Cancella prentoazione\n");
    printf("5. Conta file senza ...\n");
    printf("5. Conta prenotati...\n");
		printf("7. Uscire dal programma\n\n");

    printf("Scelta: ");
		scanf("%d", &scelta);
		
		switch(scelta){
			case 1:
				printf("Il numero di posti liberi è %d", contaLiberi(aereo));
				break;
      
			case 2:
				stampa(aereo);
				break;
      
			case 3:
				printf("Inserisci il posto da prenotare");
				do{
					scanf("%d", &fila);
					if(fila<1 || fila>45)
						printf("Le file vanno da 1 a 45. Inserisci scelta corretta.\n");
				}while(fila<1 || fila>45);
				do{
					scanf("%d", &posto);
					if (posto<1 || posto>6)
						printf("I posto vanno da 1 a 6. Inserisci scelta corretta.\n");
				}while(posto<1 || posto>6);
				
				// Si suppone che il posto sia libero.
				// Tolgo 1 alle scelte dell'utente perché gli indici della
				// matrice partono da 0
				prenotaPosto(aereo, fila-1, posto-1);
				break;
			case 4:
				//TODO: stessa lettura di posto e fila del caso 3
				cancellaPrenotazione(aereo, fila-1, posto-1);
				break;
			case 5:
				printf("Ci sono %d file senza passeggeri prenotati.\n", contaFile(aereo));
				break;
			case 6:
				printf("Mediamente, ci sono %f passeggeri prenotati per colonna.\n", mediaColonne(aereo));
				break;
			case 7: 
				printf("Arrivederci!");
				break;
			default:
				printf("Scelta non valida\n");
				break;
		}
	}while(scelta!=0);
	
	return 0;
}