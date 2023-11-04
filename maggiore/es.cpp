#include <iostream>
using namespace std;

int main(){

  // creiamo la scatola per contenere il primo numero
  int numero1;
  
  // creiamo la scatola per contenere il secondo numero
  int numero2;
  
  // informiamo l'utente che deve inserire il primo numero
  cout<<"Inserisci il primo numero: ";
  
  // chiediamo all'utente il primo numero
  cin>> numero1;
  
  // informiamo l'utente che deve inserire il secondo numero
  cout<<"Inserisci il secondo numero: ";
  
  // chiediamo all'utente il secondo numero
  cin>> numero2;
  
  // controlliamo se il primo è maggiore del secondo
  if(numero1>numero2){
    // Il numero maggiore vale primo
    cout<< "Il numero maggiore vale " << numero1 <<endl;
  }
  
  // altrimenti se il secondo è maggiore
  else if(numero1<numero2){
    // Il numero maggiore vale secondo
    cout<< "Il numero maggiore vale " << numero2 <<endl;
  }

  // in tutti gli altri casi
  else {
    // i due numeri sono uguali
    cout<<"I due numeri sono uguali"<<endl;
  }
  
	return 0;
}