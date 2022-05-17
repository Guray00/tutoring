#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

	int i, n, numero, minimo, massimo, somma, valoripositivi, valorinegativi;
  float ppositivi, pnegativi, media;
  const int MINNUM = -100; 
  const int MAXNUM = 500;

  // mi assicuro che il valore di n sia positivo
  do
    {
      printf("inserire la quantita' di valori: ");
      scanf("%d", &n);
    }while(!(n>0));


  massimo = INT_MIN;
  minimo  = INT_MAX;
  valoripositivi = 0;
  valorinegativi = 0;
  somma = 0;
  
  // chiedo di inserire n numeri
  for(i = 0; i<n; i++)
    {
      do
        {
          printf("inserire il valore di un numero: ");
          scanf("%d", &numero);

        // finchè il numero non è compreso tra -100 e 500
        // !(n>=-100 && n<=500)
        } while(!(n>=MINNUM && n<=MAXNUM));

      // il numero è nel range corretto
      // controllo se il numero è positivo o meno
      if (numero>=0)
      {
        valoripositivi = valoripositivi+1;
      }
      else
      {
        valorinegativi = valorinegativi+1;
      }

      // facciamo la somma per la media
      somma = somma+numero;

      
      // cerco il maggiore
      if(numero>massimo)
      {
        massimo = numero;
      }

      // cerco il minore
      if(numero<minimo)
      {
        minimo = numero;
      }

      

    }

  media = (float)somma/n;
  printf("\n%f e' la media\n", media);
  printf("%d e' il massimo\n", massimo);
  printf("%d e' il minimo\n", minimo);

  pnegativi = ((float) valorinegativi/n)*100;
  ppositivi = ((float) valoripositivi/n)*100;

  printf("Percentuale di positivi: %f%%\n", ppositivi);
  printf("Percentuale di negativi: %f%%\n", pnegativi);
  
  return 0;
}