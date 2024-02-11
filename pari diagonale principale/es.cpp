#include <iostream>
using namespace std;


int diagonaleInferiore(int** m, int r, int c) {
  int conta = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      // se sono in posizione giusta e il valore è pari
      if (i > j && m[i][j] %2 == 0) {
        // lo conto
        conta++;
      }
    }
  }

  return conta;
}

int diagonaleSuperiore(int** m, int r, int c) {
  int conta = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      // se sono in posizione giusta e il valore è pari
      if (j > i && m[i][j] %2 == 0) {
        // lo conto
        conta++;
      }
    }
  }
  
  return conta;
}

int main(){
  int r;
  do {
    cout << "Inserisci il numero di righe: ";
    cin >> r;
  } while (r <= 0);
  int c;
  
  do {
    cout << "Inserisci il numero di colonne: ";
    cin >> c;
  } while (c <= 0);

  cout << endl << endl;

  int** m = new int*[r];
  for(int i = 0; i < r; i++) {
    m[i] = new int[c];
  }
  
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Inserisci un valore: ";
      cin >> m[i][j];
    }
  }

  cout <<endl<<endl;

  int d1 = diagonaleInferiore(m, r, c);
  int d2 = diagonaleSuperiore(m, r, c);

  cout << "Sotto la diagonale principale ci sono " << d1 << " valori pari"<<endl;
  cout << "Sopra la diagonale principale ci sono " << d2 << " valori pari"<<endl;

  // eliminazione della matrice
  for (int i = 0; i < r; i++) {
    delete[] m[i];
  }
  delete[] m;

  return 0;
}