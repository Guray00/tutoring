#include <iostream>
using namespace std;

int main(){
  int v[100];
  int dim; 

  // chiediamo di inserire la dimensione
  do {
    cout<< "Inserire la dimensione: ";
    cin >> dim;
  } while (dim <= 0 || dim >= 100);


  // riempi il vettore
  for (int i = 0; i < dim; i++) {
    cout << "Inserisci l'elemento: ";
    cin >> v[i];
  }

  // troviamo il numero di elementi dispari
  int k = 0;
  for (int i = 0; i < dim; i++) {
    if (v[i]%2 != 0) {
      k = k +1;
    }
  }

  // dobbiamo fare la media dei valori divisibili per dispari
  float somma = 0;
  int cont = 0;
  
  for(int i = 0; i < dim; i++){
    // dobbiamo controllare se il numero che guardo
    // è divisibile per k
    if (v[i] % k == 0){
      cont++;
      somma = somma + v[i];
    }
  }

  cout << "Sono stati trovati " << k << " valori dispari"<<endl;
  
  float media = 0;

  // se trovo almeno un elemento significa che 
  // sono in grado di calcolare la media
  if (cont > 0) {
    media = somma / cont;
    cout << "La media dei valori vale " << media << endl;
  }
  else {
    // non ho trovato elementi, non si può dividere per 0!
    cout << "La media non si può calcolare" << endl;
  }

	return 0;
}