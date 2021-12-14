#include <iostream>
using namespace std;

// l'utente inserisce un numero, vogliamo chiedere un numero fino a quando
// il numero inserito è pari

int main(){

  int x; // numero che inserisce l'utente

  cout<<"Inserisci un numero"<<endl;
  cin>>x;

  while(x % 2 == 0){
    cout<<"Inserisci un numero"<<endl;
    cin>>x;
  }

  cout<< "hai inserito un numero dispari.";

  
	return 0;

}