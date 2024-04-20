#include <iostream>
using namespace std;

int main(){
  int n, numero, cont = 0;
  
  // chiedere all'utente quanti numeri inserire
  cout<<"quanti numeri vuoi inserire? ";
  
  // facciamo inserire il valore
  cin>>n;
  
  // per n volte
  for (int i = 0; i<n; i++){
  
    // chiedo all'utente di inserire un numero
    cout<<"inserire numero: ";
  
    // faccio inserire il numero all'utente 
    cin>>numero;
  
    // se il numero >= 1
    if(numero>=1){
      // lo conto
      cont++;
    }
  }
  
  // mostriamo il risultato a schermo
  cout<<"I numeri naturali sono " << cont << endl;

	return 0;
}