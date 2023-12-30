#include <iostream>
using namespace std;

int main(){
  int v[10], k, somma = 0, prodotto = 1;

  // chiedo all'utente di inserire k
  cout<< "inserisci il numero k: ";
  cin>> k;
  
  for(int i = 0; i < 10; i++){
    cout<< "inserisci v["<<i<<"]: ";
    cin>> v[i];
  }

  // la somma di tutti i valori dispari
  for(int i = 0; i < 10; i++){
    // se il numero è dispari
    if(v[i] % 2 != 0){
      somma = somma + v[i];
    }

    // controlliamo se è minore di k
    if(v[i] < k){
      prodotto = prodotto * v[i];
    }
  }

  cout << "La somma dei numeri dispari vale: " << somma << endl;
  cout << "Il prodotto dei valori minori di k vale: " << prodotto << endl;
  
	return 0;
}