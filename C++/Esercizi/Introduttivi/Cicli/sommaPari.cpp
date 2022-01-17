#include <iostream>
using namespace std;

/*
Inserire una serie di numeri e sommare i numeri pari. Interrompere l'immissione al quinto valore pari. 
Visualizzare la somma ottenuta.
*/

int main(){

  int n; // definizione
  int cont = 0; // serve a contare i numeri pari
  int somma = 0;
  
  do{
    cout<<"Inserisci un numero: "<<endl;
    cin>> n;


    // se il numero è pari
    if (n%2==0) {
      // incrementa il contatore
      cont++;

      // somma soltanto i numeri pari!
      somma = somma + n;
    }

    
    
  } while(cont != 5);  // se ho già contato 5 numeri pari => FINE

  cout<<"Il risultato e': "<<somma<<endl;
	
	return 0;

}