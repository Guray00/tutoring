#include <stdio.h>
#include <stdlib.h>

int main(){

	char voto;

  printf("inserire il voto: ");
  scanf("%c", &voto);

  // se deve essere ALMENO UNO dei due valori
  // bisogna mettere or!
  if (voto=='A' || voto=='a')
  {
    printf("il voto è ottimo %c", voto);
  }
  else if (voto=='B'|| voto=='b')
  {
    printf("il voto è buono %c", voto);
  }
  else if (voto=='C'|| voto=='c')
  {
    printf("il voto è sufficiente %c", voto);
  }
  else if (voto=='D' || voto=='d')
  {
    printf("il voto è insufficiente %c", voto);
  }
  else if(voto=='E' || voto=='e')
    {
      printf("il voto è gravemente insufficiente %c", voto);
    }

  else {
    printf("Non hai messo una valutazione valida");
  }
  
	return 0;

}