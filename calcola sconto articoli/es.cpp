#include <iostream>
using namespace std;

int main(){
  int n;
  float prezzo, sconto, tmp, somma = 0;  // lo sconto può essere con la virgola

  // inserimento dei valori
  do{
    cout<<"Quanti articoli vuoi inserire? ";
    cin>> n;
    if(n <= 0){
      cout<<"Errore! Inserisci un valore positivo."<<endl<<endl;
    }
  } while(n <= 0);

  // scorro e chiedo il prezzo e lo sconto per ogni articolo
  for(int i = 0; i < n; i++){
    cout<<"Prezzo articolo? ";
    cin>> prezzo;

    cout <<"Sconto? ";
    cin >> sconto;

    // calcolo lo sconto sul singolo prodotto
    tmp = prezzo * sconto / 100;
    somma = somma + tmp;
  }
  
  cout<<"Lo sconto totale e' di "<<somma<<" euro"<<endl;
  
	return 0;
}