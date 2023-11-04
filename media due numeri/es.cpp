#include <iostream>
using namespace std;

int main(){
  int numero1;
  int numero2;
  float media;

  cout<< "Inserisci il primo numero: ";
  cin >> numero1;
  
  cout<< "Inserisci il secondo numero: ";
  cin >> numero2; 

  if(numero1 != numero2){
    media = (float) (numero1 + numero2) / 2;
    cout<< "La media vale: " << media <<endl;
  }
    
  else {
    cout<< "I due numeri sono uguali"<<endl;
  }
  
	return 0;
}