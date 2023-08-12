/*
Dato un vettore di dimensione arbitraria inserita dall'utente, far inserire i relativi valori e mostrare a schermo il prodotto tra tutti gli elementi.

Esempio
Inserisci la dimensione del vettore: 4

Inserisci il numero 0-esimo: 1
Inserisci il numero 1-esimo: 2
Inserisci il numero 2-esimo: 3
Inserisci il numero 3-esimo: 4

Il prodotto tra tutti gli elementi è pari a 24.
*/

#include <iostream>
using namespace std;

int main(){
  int v[100];
  int dim;

  // verifichiamo che la dimensione rispetti 
  // le condizioni relative alla dimensione
  do {
    cout<< "Inserisci la dimensione: ";
    cin >> dim;
    
    // visualizzazione messaggio di errore
    if (dim <= 0 || dim >= 100) {
      cout << "Errore! Inserisci un valore tra 0 e 100!\n\n";
    } 
    
  } while (dim <= 0 || dim >= 100);

  // carichiamo il vettore
  for ( int i = 0; i < dim; i++) {
    cout<<"Inserisci un valore: ";
    cin >> v[i];
  }


  // dobbiamo implementare il prodotto di tutti i numeri del vettore
  int p = 1;

  // scorro tutti i valori
  for (int i=0; i < dim; i++){
    p = p * v[i];
  }

  // mostro a schermo il risultaot
  cout << "il prodotto è: " << p <<endl; 
  
  return 0;
}