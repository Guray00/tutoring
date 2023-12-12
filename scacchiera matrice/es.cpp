#include <iostream>
using namespace std;

// crea funzione che riceve una matrice dinamica di interi e stampa i valori 
void stampaMatrice (int** m, int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << m[i][j] << " ";
    }
    cout<<endl;
  }
}

void scacchiera(int** m, int r, int c){
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++){ 
      if ((i+j) %2 == 0) {
        m[i][j] = 2;
      } else{
        m[i][j] = 1;
      }
    }
  }
}


int main(){
  int r, c;
  do {
    cout<< "Inserisci il numero di righe: ";
    cin >> r;
  } while (r <= 0);

  do {
    cout<< "Inserisci il numero di colonne: ";
    cin >> c;
  } while (c <= 0);

  int** m = new int*[r];

  for (int i = 0; i < r; i++) {
      m[i] = new int[c];
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Inserisci l'elemento ["<<i<<", "<<j<<"]: ";
      cin >> m[i][j];
    }
  }

  // CHIAMATE DI FUNZIONE =========================================
  stampaMatrice(m, r, c);
  cout << endl;

  scacchiera(m, r, c);
  stampaMatrice(m,r,c);
  
  // ELIMINAZIONE MATRICE =========================================
  for (int i = 0; i < r; i++) {
    delete[] m[i];
  }

  delete[] m;
  return 0;
}