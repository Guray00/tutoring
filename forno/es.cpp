#include <string>
#include <iostream>
#include "prodottoForno.h"

using namespace std;


int main(){

  ProdottoForno p("pane", "panino al salame", 2);

  p.setScadenza(12);
  cout<<p.getScadenza();
  
  
	return 0;
}