#include <iostream>
using namespace std;

void f(int* m){
  // se il resto della divisione è zero
  // significa che è un multiplo di 2
  if( (*m) % 2 == 0){
    *m = (*m) * (*m);
  }

  // se invece è un multiplo di 3
  else if( (*m) % 3 == 0){
    *m = (*m) * (*m) * (*m);
  }
    
}

int main(){

  int n;

  // chiedo il numero a schermo
  cout<<"Numero? ";
  cin >> n;
  
  cout<<"Indirizzo di n: "<<&n<<endl;
  f(&n);
  
  cout<<"Il risultato e': "<<n<<endl;
  
	return 0;
}