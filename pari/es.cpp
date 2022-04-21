#include <iostream>
using namespace std;


int main(){

  // dichiariamo una variabile
  int a;

  // invitiamo l'utente a inserire un valore
  cout<<"Inserisci un numero: ";

  // lo facciamo inserire
  cin >> a;

  // verifichiamo se un numero è pari
  if (a%2 == 0){
    cout<<"Numero pari";
  }

  else {
    cout<<"Numero dispari";
  }
	
	return 0;
}