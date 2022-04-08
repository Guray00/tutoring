#include <iostream>
using namespace std;

int main(){
  
  int n;
  
  // inserimento della dimensione
  cout<<"Inserire la dimensione dei vettori: ";
  cin>> n;
  int v[n];

  // inserimento degli elementi
  for (int i = 0; i < n; i++){
    cout<<"Inserisci l'elemento: ";
    cin>>v[i];
  }

  // do per scontato che il primo numero,
  // per cominciare, sia il maggiore
  int max = v[0];

  // trovare max e salvare indice
  // v = {1, 2, 5, 4}

  for (int i = 0; i < n; i++){
    // voglio verificare se il numero i-esiimo
    // e' maggiore del max
    if(max<v[i]){

      // aggiorno il massimo
      max=v[i];
    }
  }

  cout << "Il massimo all'interno del vettore vale: "<<max<<endl;
  
	return 0;

}