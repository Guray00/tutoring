#include <iostream>
using namespace std;

int main(){
  int n, cont = 0;
  char c;
  
  // facciamo inserire il numero di caratteri da chiedere
  cout << "Quanti caratteri vuole inserire: ";
  cin >> n;

  // da 0 fino a n facciamo inserire un carattere
	for (int i = 0; i < n; i++) {
    cout << "Inserisci un carattere: ";
    cin >> c;

    // se c è un numero, allora lo conto
    if (c <= '9' && c >= '0') {
      // aumento il contatore
      cont++;
    }
  }
  cout << "Hai inserito " << cont << " numeri" <<endl;
  return 0;
}