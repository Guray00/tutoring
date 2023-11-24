#include <iostream>
#include <stdlib.h>

using namespace std;

void verificaNeg (float* v, int dim){
  bool risultato = true;

  // all'inizio non cerco negativi
  bool cerco_negativi = false;

  for (int i = 0; i< dim; i++) {

    if (v[i] < 0) {
      cerco_negativi = true;
    }

    // appena trovo un valore positivo mentre cerco
    // soo i negativi imposto la risposta come falsa
    if (cerco_negativi && v[i]>0){
      risultato = false;
      break; // dopo il primo sbagliato non serve cercare
    }
  }

  if(risultato){
    cout << "SI"<<endl;
  } else {
    cout << "NO"<<endl;
  }
}

int main(){
  int dim;

  cout << "Inserire la dimensione del vettore: ";
  do {
    cin >> dim;
  } while (dim <= 0);

  // creo il vettore dinamicamente della dimensione corretta
  float* v = new float [dim];

  for (int i = 0; i < dim; i++){
    cout << "Inserisci un valore: "; 
    cin >> v[i];
  }

  verificaNeg(v, dim);

  // liberiamo la memoria prima della chiusura del programma
  delete[] v;

  return 0;
}