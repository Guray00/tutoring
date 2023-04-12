#include <iostream>
using namespace std;
int main(){

  // creiamo una variabile per prendere il numero
  int num;

  // chiediamo all'utente di inserire un numero
  cout<<"inserisci il numero: ";

  // prendere in ingresso il numero
  cin>>num;

  // se il numero è pari...
  if(num % 2 == 0){
    // se è pari mostro a schermo il doppio
    cout<<num*2<<endl;
  }
  // in tutti gli altri casi è dispari
  else {
    cout<<num*3<<endl;
  }
  
	return 0;
}
