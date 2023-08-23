#include <iostream>
using namespace std;

int main(){
  int v[5];

  // carichiamo i 5 elementi nel vettore
  for (int i = 0; i < 5; i++) {

    // fino a quando l'utente sbaglia a mettere il valore
    // devo chiedergli di reinserirlo
    do {
      cout << "Inserisci un numero: ";
      cin >> v[i];
      
      if (v[i] < 1 || v[i] > 80){
        cout<<"Errore! Inserisci un valore tra 1 e 80\n\n";
      }
      
    } while(v[i] < 1 || v[i] > 80 );
  }

  // scorro il vettore per calcolare la somma
  int s = 0;
  for (int i = 0; i < 5; i++) {
    s = s + v[i];
  }

  // calcolo la media
	float media = (float) s / 5; 
  cout << "\nMedia = " << media << endl<<endl;

  // per ogni numero nel vettore
  for (int i = 0; i < 5; i++) {
    
    // stampiamo il numero di asterischi
    for (int j = 0; j < v[i]; j++) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}