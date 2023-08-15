#include <iostream>
using namespace std;

int main(){
  int v[100], b[100];
  int dim; 

  // chiediamo di inserire la dimensione
  do {
    cout<< "Inserire la dimensione: ";
    cin >> dim;
  } while (dim <= 0 || dim >= 100);

  cout<< "\nInserisci v"<<endl;

  // riempi il vettore
  for (int i = 0; i < dim; i++) {
    cout << "Inserisci l'elemento: ";
    cin >> v[i];
  }

  // inserisco b
  cout<< "\nInserisci b"<<endl;
  for (int i = 0; i < dim; i++) {
    cout << "Inserisci l'elemento: ";
    cin >> b[i];
  }

  int cont = 0;

  // scorriamo v
  for (int i = 0; i < dim; i++){

    // scorriamo b
    for (int j = 0; j < dim; j++ ) {
      if (v[i] == b[j]) {
        cont = cont +1;
      }
    }
  }
  
  cout << "\nNel vettore b compaiono "<< cont <<" elementi di v" << endl;

	return 0;
}