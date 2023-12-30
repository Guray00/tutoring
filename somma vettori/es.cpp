/*

*/


#include <iostream>
using namespace std;

int main(){
  int n, v[100], w[100], z[100], somma = 0;

  // controllo che la dimensione sia sensata
  do{
    cout << "inserisci la dimensione dei vettori: ";
    cin >> n;
    // avvertimento in caso di errore
    if(n < 0){
      cout<< "Errore, inserisci un valore positivo."<<endl<<endl;
    }
  } while(n < 0 || n > 100);
  cout << endl;

  // inseriamo il primo vettore
  for(int i = 0; i < n; i++){
    cout<< "Inserisci V["<<i<<"]: ";
    cin>> v[i];
  }
  cout << endl;

  // inseriamo il secondo vettore
  for(int i = 0; i < n; i++){
    cout<< "Inserisci W["<<i<<"]: ";
    cin >> w[i];
  }
  cout << endl;

  // calcoliamo il contenuto del terzo vettore
  for(int i = 0; i < n; i++){
    z[i] = v[i] * w[i];
  }
  cout << endl;

  // stampa il terzo vettore e calcolo la somma
  cout << "[ ";
  for(int i = 0; i < n; i++){
    cout<< z[i] << " ";
    somma = somma + z[i];
  }
  cout << "]"<<endl;

  cout << "La somma vale " << somma<<endl;
  
	return 0;
}