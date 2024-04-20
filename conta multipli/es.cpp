#include <iostream>
using namespace std;

int main(){
  int n, x, numero, cont = 0;
  
  // chiediamo di inserire quanti numeri inserire
  cout<<"Quanti numeri vuoi inserire? ";
  
  // l'utente inserisce la quantita'
  cin>>n;
  
  // chiediamo di inserire x
  cout<<"Quanto vale X? ";
  
  // facciamo inserire x
  cin>>x;
  
  // per n volte 
  for(int i=0; i<n; i++){
  
    // chiedo all'utente di inserire un numero
    cout<<"Inserire numero: ";
  
    // inserisce il numero
    cin>>numero;
    
    // se il resto tra il numero e X e' zero
    if(numero%x == 0){
      // conto il numero
      cont++;
    }
  }

  // stampo a schermo i numeri contati
  cout<< "Sono stati trovati " << cont << " multipli"<< endl;
 
	return 0;
}