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

  // inseriamo il valore da cercare
  int k;
  cout << "Inserisci un valore da cercare: ";
  cin >> k;

  // creo una variabile per contare le occorrenze
  int cont = 0;

  for (int i = 0; i < dim; i++) {
    // se ho trovato il numero
    if ( v[i] == k) {
        cont = cont + 1;   
    } 
  } 

  if (cont == 0){
    cout<< "Mi dispiace, il numero " << k << " non è presente"<<endl;
  }
  else {
    cout << "Il numero " << k << " compare " << cont << " volte" <<endl;
  }
    
  return 0;
}