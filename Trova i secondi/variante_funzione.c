// variante con le funzione e tutto l'esercizio svolto
#include <stdio.h>
#include <stdlib.h>


int toSecondi(int ore, int minuti, int secondi){
  int risultato = ore*3600 + minuti*60 + secondi;
  return risultato;
}

// extra1
int trovaMaggiore(int tempo1, int tempo2){
  if (tempo1>tempo2)
  {
    return tempo1;
  }

  else {
    return tempo2;
  }
}

// extra2
int main(){

  int ore, minuti, secondi, risultato;
  int ore2, minuti2, secondi2, risultato2;
  
  printf("Inserisce le ore: ");
  scanf("%d", &ore);
  
  printf("Inserisce le minuti: ");
  scanf("%d", &minuti);
  
  printf("Inserisce le secondi: ");
  scanf("%d", &secondi);
  
  risultato = toSecondi(ore, minuti, secondi);
  printf("I secondi totali sono: %d", risultato);

  printf("\n\nInserisce le ore: ");
  scanf("%d", &ore2);
  
  printf("Inserisce le minuti: ");
  scanf("%d", &minuti2);
  
  printf("Inserisce le secondi: ");
  scanf("%d", &secondi2);

  risultato2 = toSecondi(ore2, minuti2, secondi2);
  printf("I secondi totali sono: %d", risultato2);

  int maggiore = trovaMaggiore(risultato, risultato2);
  printf("\n\nIl tempo maggiore e': %d", maggiore);
  
  return 0;
}

