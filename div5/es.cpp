#include <iostream>
using namespace std;

int main(){

  // creiamo una scatola per contenere il numero dell'utente
  int numero;
  
  // informiamo l'utente di inserire il valore
  cout<<"Inserisci un numero: ";
  
  // facciamo inserire il numero a schermo
  cin>> numero;

  // controlliamo che il numero è divisibile per 5
  if(numero%5 == 0){
  
    // stampiamo a schermo il numero
    cout<< numero;
  } 
  
	return 0;
}