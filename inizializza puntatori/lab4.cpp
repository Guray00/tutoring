#include <iostream>
using namespace std;


void inizializzaP(int* &a){
  a = NULL;
}

int main(){

  int k = 5;
  int* p;

  cout<<"P non inizializzato: "<< p << endl;
  p = &k;
  
  cout<<"P punta a k: "<< p << endl;
  cout<<"valore di k: "<< k << endl;
  
  inizializzaP(p);
  cout<<"p inizializzato a NULL: "<< p << endl;
	return 0;
}