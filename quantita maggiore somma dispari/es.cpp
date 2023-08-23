#include <iostream>
using namespace std;

int main(){
  int v[10];
  
  for (int i = 0; i < 10; i++) {
    cout << "Inserisci il " << (i+1) << "-esimo elemento: ";
    cin >> v[i];
  }

  // somma degli elementi dispari
  int somma = 0; 
  for (int i = 0; i < 10; i++) {
    if (v[i]%2!=0) {
      somma = somma + v[i];
    }
  }

  // conto gli elementi che sono minori della somma
  int cont = 0;
  for (int i = 0; i < 10; i++) {
    if (v[i] > somma) {
      cont = cont + 1;
    }
  }

  cout << endl;
  cout << "La somma dei dispari vale " << somma <<endl;
  cout << "La quantità vale " << cont << endl;  
	
  return 0;
}