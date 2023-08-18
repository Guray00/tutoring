#include <iostream>
using namespace std;

int main(){
  float n, decimale;
  int risultato;

  cout<< "Inserisci un numero float: ";
  cin >> n;

  // calcolo la parte decimale
  decimale = n - (int) n;

  // se supera 0.5 allora arrotondo per eccesso
  if (decimale >= 0.5) {
    risultato = n + 1;
  }
  else {
    risultato = n;
  }
      
  cout<<"Numero arrotondato: " << risultato <<endl;

	return 0;
}