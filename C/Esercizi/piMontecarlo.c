#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){

  // qua definiamo le variabili
  int simulazioni;
  int i;
  int dentro;
  double x, y, n, pi;
  
  printf("Quante simulazioni vuoi fare?\n");
  scanf("%d", &simulazioni);

  // inizializziamo il seme
  srand(time(0));
  dentro = 0;
  for (i = 0; i < simulazioni; i++){
      
    // x^2 + y^2 < 1 => dentro la circonferenza

    // genera il primo numero
    n = rand();
    x = (double)n/RAND_MAX;

    // genera il secondo numero
    n = rand();
    y = (double)n/RAND_MAX;

    // controllare la formula per vedere
    // se è rispettata, se lo è vuol dire 
    // che è interno

    if(x*x + y*y < 1){
      dentro++;
    }
  }

  // ci manca da fare il rapporto delle aree
  pi = 4*(double)dentro/(double)simulazioni;
  printf("Il pi-greco viene: %f", pi);
  return 0;
}