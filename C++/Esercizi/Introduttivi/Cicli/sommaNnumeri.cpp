#include <iostream>
using namespace std;

/*
Inserito da tastiera un numero N, calcolare la somma dei primi N numeri interi 
successivi ad un valore fornito da tastiera
*/

int main(){
  int n;
  int somma = 0;

  // chiedo il numero in ingresso (n)
  cout << "inserisci un numero"<<endl;
  cin >> n;

  // for (da 0 fino a N)
  for (int i = 1; i<=n; i++){
    //  faccio le somme
    somma = somma + n + i; // somma = 0 + 5 + 1;
  }

  cout<<"La somma risultante e': "<< somma<<endl;

  /*
  se inserisco n=3
  somma = 0 + 3 + 1
  somma = 4 + 3 + 2
  somma = 9 + 3 + 3 
  */
  
	return 0;

}