#include <stdio.h>
#include <stdlib.h>

// massainiziale - anni * decadimento

int main(){

  int mi, mr1, mr2, anni, d;

  printf("Inserisci la massa iniziale: ");
  scanf("%d", &mi);

  printf("Inserisci gli anni trascorsi: ");
  scanf("%d", &anni);
  
  printf("Inserisci la costante di decadimento: ");
  scanf("%d", &d);

  // A ==================================================
  mr1 = mi;
  for( ; anni > 0; anni--){
    mr1 = mr1 - d;
  }
  
  if(mr1<0){
    mr1 = 0;
  }
  
  // B ==================================================
  mr2 = mi;
  while(mr2>1){
    // aggiornare il conteggio considerando di aver messo un anno
    anni++;

    // aggiornare il valore della massa residua sotratta
    mr2 = mr2 - d;
  }
  

  
  printf("La massa residua vale: %d\n", mr1);
  printf("Per scendere sotto un grammo ci vogliono %d anni\n", anni);
  
  return 0;
}