#include <iostream>
using namespace std;

int main(){
  int v[100];
  int dim;
  
  do {
    cout << "Inserisci la dimensione del vettore: ";
    cin >> dim;
  } while (dim <= 0 || dim >= 100);

  // inserisco gli elementi
  for (int i = 0; i < dim; i ++) {
    cout<< "Inserisci il valore in posizione "<<i+1<<": ";
    cin >> v[i];
  }
  
	int posmax = 0;
  int posmin = 0;
  for (int i = 0; i < dim; i++) {

    // se trovo che l'elemento che guardo è maggiore di
    // quello in posizione massima
    if (v[i] > v[posmax]) {
      posmax = i;
    }

    // verifico se può essere il minimo
    if (v[i] < v[posmin]) {
      posmin = i;
    }
  }
  
  int differenza = v[posmax] - v[posmin];

  cout<<endl;
  cout<<"Il valore minimo vale: "<< v[posmin]<<endl;
  cout<<"Il valore massimo vale: "<< v[posmax]<<endl;
  cout<<"La differenza vale: " << differenza<<endl;
  return 0;
}