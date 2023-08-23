#include <iostream>
using namespace std;

int main(){
  int v[100];
  int dim; 
  
  do {
    cout<<"Inserisci la dimensione del vettore: ";
    cin >> dim;
    if(dim <= 0 || dim >= 100){
      cout<< "Errore! Inserisci un valore compreso tra 1 e 100"<<endl<<endl;
    }
  } while (dim <= 0 || dim >= 100);

  // chiedo di inserire gli elementi
  for (int i = 0; i < dim; i++) {
    cout<< "Inerisci l'elemento in posizione "<<i<<": ";
    cin >> v[i];
  }

  //somma degli elementi di posto pari e divisibili per 5
  int somma = 0;
  for (int i = 0; i < dim; i++) {
    if (i%2==0 && v[i]%5==0){
      somma = somma + v[i];
    }
  }
  
  cout<<endl;
  cout << "La somma vale " << somma << endl; 
	return 0;
}