#include <iostream>
using namespace std;

int main(){
  int base=0,esponente=0,risultato=1;
  cout<<"inserisci la base"<<"\n";
  cin>>base;
  cout<<"inserici l'esponente"<<"\n";
  cin>>esponente;
  for(int i=0;i<esponente;i++){
    risultato*=base;
  }
  cout<<"il risultato è: "<<risultato;
	return 0;

}