#include <iostream>
using namespace std;

int main(){
  int n; // mi salva la dimensione
  
  // sapere quanto è grande il vettore
  cout<<"Inserisci la dimensione del vettore: ";
  cin>>n;

  // creo un vettore con n elementi
  int v[n];

  // devo chiedere al mio utente di inserire 
  // i valori da mettere al suo interno
  for (int i = 0; i < n; i++){

    int tmp; 
    
    // chiedere al mio utente di inserire un valore
    cout<<"Inserisci un valore: ";
    cin >> tmp;

    // mettere alla i-esima cella il valore 
    // contenuto nella scatola tmp
    v[i] = tmp;
  }

  for (int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }

  
	return 0;

}