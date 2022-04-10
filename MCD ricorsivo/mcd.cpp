#include <iostream>
using namespace std;


// 10 6 => 10 > 6 => 4 6
// 4  6 => 4  < 6 => 2, 4
// 4  2 => 4  > 2 => 2, 2
// 2  2 => RITORNO 2

/*
---+     <- 10, 6
   |
   +---+     <- 4, 6
       |
       +---+     <- 4, 2
           |
           +---+     <- 2, 2
               |  
           +---+            
           |
       +---+ 
       |
   +---+
   |
---+ 
*/

// int perchè voglio restituire un intero
// si considera n1 >= n2
int mcd(int n1, int n2){

  // caso base => condizione di uscita => termine
  if (n1 == n2){
    return n1; // (o n2)
  }

  // passo induttivo => in tutti gli altri casi
  if (n1 > n2){
    return mcd(n1 - n2, n2);
  }

  else {
    return mcd(n2 -n1, n1);
  }
  
}


int mcm(int n1, int n2){
  // n1*n2 / mcd(n1, n2)
  return n1*n2/mcd(n1, n2);
}


int main(){

  int n1, n2;

  cout<<"Inserisci il primo numero: ";
  cin>>n1;
  
  cout<<"Inserisci il secondo numero: ";
  cin>>n2;

  int risultato  = mcd(n1, n2);
  cout<<risultato<<endl;

  int risultato2 = mcm(n1, n2);
  cout<<risultato2<<endl;
  
	return 0;
}