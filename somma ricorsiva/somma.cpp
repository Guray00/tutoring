#include <iostream>
using namespace std;


/*
calcolare la somma utilizzando l'ipotesi induttiva:

caso base:
  se y = 0 => somma (x, y) = x

passo induttivo:
  se y > 0 => somma (x, y) = 1 + somma(x, y - 1)


2 + 3 => 2 + 1 + somma(2, 2)    => 1 + 4 => 5
                    1 + somma(2, 1)     => 1 + 3 => 4 
                              1 + somma(2, 0)   => 1 + 2 => 3
                                         2
*/

int somma(int n1, int n2){
  if (n2==0){
    return n1;    
  }

  else {
    return 1 + somma(n1, n2-1); 
  }
}


int main(){
  int n1, n2;
  
  cout<<"Inserire il primo numero: ";
  cin>>n1;

  cout<<"Inserire il secondo numero: ";
  cin>>n2;

  int risultato = somma(n1, n2);
  cout<<risultato<<endl;
  
	return 0;
}