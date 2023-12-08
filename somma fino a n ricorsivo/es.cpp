#include <iostream>
using namespace std;

int somma(int x){
  if(x==0){
    return 0;
  }
  else{
    return somma(x-1)+x;
  }
}

int main(){

  int x;

  cout << "Inserisci un numero: ";
  cin >> x;

  int risultato = somma(x);
  cout << "La somma vale " << risultato << endl;

  return 0;
}