#include <iostream>
using namespace std;

/*
        +-> 3*2*1
        |
4! => 4*3! => 4*3*2! => 4*3*2*1
*/


int fattoriale(int n){
  // caso base => caso in cui la funzione finisce
  if (n == 1){
    return 1;
  }

  // passo induttivo => passaggi intermedi
  else {
    return n*fattoriale(n-1);
  }  
}

/*

fattoriale(4) => 24
   4 * fattoriale(3)     => 4*6 => 24
             3 * fattoriale(2)  => 3* 2 = 6
                     2* fattoriale(1) <--+ => 2*1 = 2
                            1 -----------+
*/


int main(){

  int n;
  cout<<"Inserisci un numero: ";

  cin>>n;

  int risultato = fattoriale(n);
  cout<<"Il fattoriale e': "<<risultato<<endl;

	return 0;

}