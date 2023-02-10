#include <stdio.h>
#include <stdlib.h>

/*
2 + 6 + 4 + 3

0 + 2 => 2
         2 + 6 => 8
                  8 + 4 => 12
                           12 + 3 => 25
*/

int main(){

  int numeroarticoli, prezzoarticolo;
  float scontototale = 0;
  
  printf("quanti articoli vuoi inserire? ");
  scanf("%d", &numeroarticoli);

  
  for (int i=0; i < numeroarticoli; i=i+1)
    {
      float psconto;
      float sconto;
      
      printf("\ninserire il prezzo dell'articolo: ");
      scanf("%d",&prezzoarticolo);

      printf("inserire il valore dello sconto: ");
      scanf("%f", &psconto);

      sconto = prezzoarticolo - calcolo_prezzo(prezzoarticolo, psconto);
    }

    printf("\nLo sconto totale applicato e' di %f", scontototale);
  return 0;
}

float calcolo_prezzo(float prezzoiniziale, int psconto)
{
  float prezzoscontato;
  float sconto;

  sconto = (prezzoiniziale*psconto)/100;
  prezzoscontato = prezzoiniziale - sconto;

  printf("sconto di %f", sconto);
  
  return prezzoscontato;
}