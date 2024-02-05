/*
Scrivere un algoritmo che dichiari un vettore di 50 interi denominato "dati" e lo si riempia con numeri casuali compresi tra 1 e 90. Successivamente, si calcoli e si stampi la media dei valori presenti nelle posizioni dispari del vettore.


## Esempio

3 6 49 57 49 37 78 43 7 85 75 26 8 65 6 39 46 76 55 65 1 53 27 11 58 61 52 48 70 13 68 15 1 35 85 9 82 43 87 78 62 79 10 42 36 16 41 3 54 33 

La media dei valori in posizione dispari e': 41.52
*/

#include <iostream>
#include <time.h>
using namespace std;


// funzione che stampa un vettore
void stampavettore (int dati[], int dim){
  for(int i=0; i<dim; i++){
    cout<<dati[i]<<" ";
  }
  cout<<endl;
}

// funzione che calcola la media dei valori in posizione dispari
float calcolamedia(int dati[], int dim){
  int somma = 0;
  float media;
  for(int i=1; i<dim; i=i+2){
    somma=somma+dati[i];
  }
  
  media = (float) somma / (dim/2);
  return media;
}

int main(){
  int dati[50];
  float media;
  srand(time(NULL));

  // generiamo il vettore di numeri casuali
  for(int i=0; i<50; i++){
    dati[i]=rand()%90+1;
  }

  // stampo a schermo il vettore
  stampavettore(dati, 50);
  media=calcolamedia(dati, 50);
  
  cout << "La media in posizione dispari vale "<<media<<endl;
  
	return 0;
}