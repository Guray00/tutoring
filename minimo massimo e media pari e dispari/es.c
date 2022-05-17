#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

	int i, n, numero, minimopari, massimopari, sommapari, valoripari, minimodispari, massimodispari, valoridispari, sommadispari;
  float mediapari, mediadispari;
  const int MINNUM = -100; 
  const int MAXNUM = 500;

  // mi assicuro che il valore di n sia positivo
  do
    {
      printf("inserire la quantita' di valori: ");
      scanf("%d", &n);
    }while(!(n>0));


  massimopari = INT_MIN;
  minimopari  = INT_MAX;

  massimodispari = INT_MIN;
  minimodispari  = INT_MAX;
  
  valoripari = 0;
  valoridispari = 0;
  
  sommapari = 0;
  sommadispari = 0;
  
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
      // controllo se il numero è pari o meno
      if (numero%2 == 0)
      {
        valoripari = valoripari+1;
        sommapari = sommapari+numero;
      }
        
      else
      {
        valoridispari = valoridispari+1;
        sommadispari = sommadispari+numero;
      }

      // cerco il maggiore
      if(numero%2 == 0 && numero > massimopari)
      {
        massimopari = numero;
      }
      

      // cerco il minore
      if(numero%2 == 0 && numero<minimopari)
      {
        minimopari = numero;
      }
      
      if(numero%2 != 0 && numero>massimodispari)
      {
        massimodispari = numero;
      }
      
      if(numero%2 != 0 && numero<minimodispari)
      {
        minimodispari = numero;
      }
      

    }

  // voglio far comparire i dati solo se ci sono numeri pari

  if(valoripari != 0){
    mediapari = (float)sommapari/valoripari;
    printf("\n%f e' la media dei pari\n", mediapari);
    printf("%d e' il massimo dei pari\n", massimopari);
    printf("%d e' il minimo dei pari\n", minimopari);
  }
  else {
    printf("\nNon ci sono valori pari\n");
  } 

  // voglio far comparire i dati solo se ci sono numeri dispari
  if(valoridispari != 0){
    mediadispari = (float)sommadispari/valoridispari;
    printf("\n%f e' la media dei dispari\n", mediadispari);
    printf("%d e' il massimo dei dispari\n", massimodispari);
    printf("%d e' il minimo dei dispari\n", minimodispari);
  }
  else {
    printf("\nNon ci sono valori dispari\n");
  }
  
  return 0;
}