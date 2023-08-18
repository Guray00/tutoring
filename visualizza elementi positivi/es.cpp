#include <iostream>
using namespace std;

int main(){
  int v[25];
  int dim;

  // inserimento dimensione
  do {
    cout<< "inserisci la dimensione: ";
    cin >> dim;
  } while (dim <= 0 || dim >= 25);  

  // inserisco gli elementi rispettando i criteri
  for (int i = 0; i < dim; i++) {

    // controllo che ogni elemento rispetti il criterio
    do {
      cout<< "Inserisci un numero: ";
      cin >> v[i];

      if (v[i] < -50 || v[i] > 20){
        cout << "sbagliato! Inserisci un valore tra -50 e +20" << endl;
      }
    } while(v[i] < -50 || v[i] > 20);
  }

  // scorro tutti gli elementi del vettore
  for(int i = 0; i < dim; i++){

    // controllo che l'elemento sia positivo
    if (v[i] > 0) {
      cout << v[i] << " ";
    } 
  }
 
  return 0;
}