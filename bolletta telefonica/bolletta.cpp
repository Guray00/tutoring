#include <iostream>
using namespace std;



int main(){

  int chiamate;
  float prezzo;

  // chiediamo di inserire il numero delle chiamate
  cout<<"Inserisci il numero delle chiamata: ";

  // lo inseriamo
  cin>> chiamate;

  if (chiamate < 80){
    prezzo = 5;
  }

  else if (chiamate < 140){
    prezzo =  5 + (chiamate - 80)*0.10;
  }

  else if (chiamate > 140) {
    prezzo = 5 + 60*0.10 + (chiamate - 140)*0.07;
  }

  cout<<"Il prezzo totale e' di: "<<prezzo<<endl;

    
  return 0;

}