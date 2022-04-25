#include <iostream>
#include "Batteria.h"

using namespace std;

int main(){

  Batteria b(4, 2);

  // test costruttore
  cout<< b.getCapacita()<<endl;
  cout<< b.getLivello()<<endl;

  // test consuma
  b.consuma();
  cout<< b.getLivello()<<endl;

  // test carica
  b.carica(4);
  cout<< b.getLivello()<<endl;
  
  
	return 0;

}