#include <iostream>
using namespace std;

int main(){
  char v[100];
  int dim;
  int cont = 0;

  // controllo sulla dimensione inserita dall'utente
  do {
    cout<< "Quanti caratteri vuoi inserire? ";
    cin >> dim; 
    
    if (dim <= 0 || dim >= 100) {
      cout << "Errore, inserisci un numero valido" << endl << endl;
    }
  
  } while (dim <= 0 || dim >= 100);
 
  // faccio inserire i caratteri nel vettore
  for (int i = 0; i < dim; i++) {
    cout << "Inserisci un carattere: ";
    cin >> v[i];
  }

  // per ogni carattere inserito
  for (int i = 0; i < dim; i++) {

    // se v[i] è compreso 'a' e 'z'
    if (v[i] >= 'a' && v[i] <= 'z') {
      // lo conto
      cont ++;
    }
  }

  cout<< "Sono stati inseriti " << cont << " caratteri minuscoli" <<endl;
  
  return 0;
}