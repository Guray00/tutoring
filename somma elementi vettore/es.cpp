#include <iostream>
using namespace std;



/*
Scrivere un programma che calcoli la somma degli elementi del vettore e mostri a schermo il risultato
*/

int main(){

  int n, somma;

  somma = 0;

  
  cout<<"Quanto e' grande il vettore? ";
  cin>>n;

  int v[n];

  // ciclo che mi inserisci i numeri
  for (int i = 0; i < n; i++){
    cout<<"Inserisci il valore: ";
    cin>>v[i];
  }


  // v = {1, 2, 3, 4, 5}

  // ciclo che mi somma i numeri
  for (int i = 0; i < n; i++){
    somma = somma + v[i];
  }
  
  cout<< "La somma degli elementi vale: "<<somma<<endl;
  
	return 0;

}