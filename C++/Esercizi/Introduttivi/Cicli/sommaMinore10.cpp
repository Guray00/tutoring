#include <iostream>
using namespace std;

/*
Inserire una serie di numeri e sommarli. 
Interrompere l'immissione quando la somma raggiunge o supera il valore 10.
*/

int main(){

	int n;
  int somma = 0;
  
  do {
    cout << "inserisci un numero"<<endl;
    cin >> n;
    somma = somma + n;
    
  } while (somma<10);

  cout<<"La somma vale "<< somma <<endl;
	return 0;
}