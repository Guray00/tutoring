#include <iostream>
using namespace std;

/*
 Inserire una serie di numeri 0 per terminare, Visualizzare la somma 
 ottenuta e il numero di valori inseriti.
*/

int main(){

	int n;
  int somma = 0;
  int cont = 0;

  //  somma    n = somma
  // (1 + 2) + 3 = 6
  
  do{
    cout<<"Inserisci un numero: "<<endl;
    cin>> n;
    cont++;
    somma = somma + n;
  } while(n != 0);

  cont = cont - 1; // levo l'ultmimo numero inserito (zero)
  cout<<"Hai inserito "<< cont << " numeri"<< endl;
  cout<<"La somma risultante e' "<< somma << endl;

	return 0;

}