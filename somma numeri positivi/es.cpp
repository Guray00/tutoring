#include <iostream>
using namespace std;

int main(){
  int somma = 0;
  int numero;

  do {
  
    // chiedo all'utente di inserire un numero
    cout<<"inserisci un numero (<0 per uscire): ";
  
    // faccio inserire il numero
    cin>>numero;

    if (numero > 0){
      // sommo numero con la somma precedente
      somma = numero+somma;
    }
    
  } while(numero > 0);

  // stampo a schermo la somma dei numeri
  cout<<"La somma dei numeri è "<<somma<<endl;
  
	return 0;
}