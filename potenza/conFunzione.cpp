// variente con le funzioni

#include <iostream>
using namespace std;


int potenza(int base, int esponente){

  // 2^3 => 2*2*2
  int risultato = 1;
  
  for(int a=0; a<esponente; a++){
    risultato = base * risultato;  
  }
  return risultato;

}


int main(){

  int base, esponente, ris;

  cout << "Inserire la base: ";
  cin  >> base;

  cout<<"Inserire esponente: ";
  cin >> esponente;

  ris = potenza(base, esponente);
  cout<<"La potenza risulta: "<<ris;
  
	return 0;
}