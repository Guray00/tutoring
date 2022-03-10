#include <iostream>
using namespace std;

int main(){
  int ore=0, minuti=0, secondi=0;
  cout<<"inserisci il numero di ore\n";
  cin>>ore;
  cout<<"inserisci il numero di minuti\n";
  cin>>minuti;
  cout<<"inserisci il numero di secondi\n";
  cin>>secondi;
  secondi+=ore*3600+minuti*60;
  cout<<"il numero di secondi è: "<<secondi;

}