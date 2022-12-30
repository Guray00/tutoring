#include <stdio.h>
#include <stdlib.h>


float calcoloSpessore(int, float);
int calcoloLaminatoi(float, float);


int main(){

  int comando = 1, n;
  float spessoreiniziale, spessoreFinale;

  while(comando>0)
    {
      printf("comando 0 -> Termina il programma\n");
      printf("comando 1 -> restituire spessore finale dati i laminatoi\n");
      printf("comando 2 -> determinare i laminatoi dallo spessore\n\n");

      scanf("%d", &comando);

      switch(comando)
        {
          case 0: break;

          case 1:
            {
              // chiedo di inserire il numero di laminatoi
              printf("inserire il numero dei laminatoi: ");
              scanf("%d", &n);
            
              // chiedo di inserire lo spessore iniziale
              printf("inserire lo spessore iniziale: ");
              scanf("%f", &spessoreiniziale);

              spessoreFinale = calcoloSpessore(n, spessoreiniziale);

              printf("Il risultato è di %f\n", spessoreFinale);
              
            } break;

          case 2:
            {

              printf("Inserire lo spessore iniziale: ");
              scanf("%f", &spessoreiniziale);

              printf("Inserire lo spessore massimo finale: ");
              scanf("%f", &spessoreFinale);

              n = calcoloLaminatoi(spessoreiniziale, spessoreFinale);

              printf("il numero dei laminatoi e' pari a %d\n", n);
              
            } break;
        }
    }
	
  return 0;
}


float calcoloSpessore(int n, float spessoreiniziale)
{
  // risultato della funzione
  int i;
  float spessorefinale = spessoreiniziale;

  for(i=0; i<n; i++){
    spessorefinale = spessorefinale - spessorefinale*0.1;
  }

  return spessorefinale;
}

int calcoloLaminatoi(float spessoreiniziale, float spessorefinale)
{
  int n = 0;

  // butto il semilavorato nel laminatoio fino a quando
  // non è spesso al massimo "spessorefinale"
  while(spessoreiniziale > spessorefinale){

     // lo metto in n
    

    // sono entrato in un laminatoio
    n++;
    spessoreiniziale = spessoreiniziale - spessoreiniziale*0.1;
  }

  return n;
}