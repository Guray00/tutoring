#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ignora_a_capo(){
  getchar();
}

int main(){
  char nome[100], cognome[100], mese[100];
  int giorno, anno;
  
	printf("Inserisci il tuo nome: ");
  fgets(nome, sizeof(nome), stdin);

  printf("Inserisci il tuo cognome: ");
  fgets(cognome, sizeof(cognome), stdin);

  do{
    printf("Inserisci il giorno: ");
    scanf("%d", &giorno);
  }while(giorno<=0 || giorno>31);

  /* se prendiamo un valore numerico con scanf e 
  successivamente utilizziamo la fscanf rimane nel 
  input un \n, motivo per cui deve essere "mangiato" */
  ignora_a_capo();
    
  printf("Inserisci il tuo mese di nascita: ");
  fgets(mese, sizeof(mese), stdin);

  do{
    printf("Inserisci l'anno di nascita: ");
    scanf("%d", &anno);
  }while(anno>2023 ||  anno < 0);

  printf("Nome: %s", nome);
  printf("Cognome: %s", cognome);
  printf("Data di nascita: %d %s %d", giorno, mese, anno);
  
  
    return 0;
}