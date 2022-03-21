// variante con funzione

#include <iostream>
using namespace std;

int doppio (int b){
  b=b*2;

  return b;
}

int main(){

  int a;

  // prendo in input un valore
  cout<<"Inserire un valore";
	cin>>a;  
  
  // chiamiamo la funzione
  int d = doppio(a);
  cout<<"Il doppio vale "<<d<<endl;

  
  return 0;
}