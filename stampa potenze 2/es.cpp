#include <iostream>
using namespace std;

int main(){
  int x;

  // inserisco il numero
  cout<<"Inserisci un numero: ";
  cin>>x;

  // se è compreso tra 0 e 10 proseguo
  while(x >= 0 and x <= 10){
    int base = 2, r=1, i=0;

    // finchè i non raggiunge x
    while(i < x){
      r=r*base;
      i=i+1;
    }
    
    cout<<"2^"<<x<<": "<<r<<endl<<endl;

    // facio reinserire il valore
    cout<<"Inserisci un numero: ";
    cin>>x;
  }
    
  return 0;
}