#include <iostream>
#include "PortaMonete.h"

using namespace std;

int main(){

	PortaMonete p (1, 1, 1);
  
  p.inserisci(0.5, 2);
  p.inserisci(1);

  // deve essere ignorata!
  p.inserisci(15);

  p.PrintDenaroPerTipo();

  cout<<"Il valore totale e': "<<p.getDenaro()<<endl;
  
	return 0;

}