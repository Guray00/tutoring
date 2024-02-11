#include <iostream>
using namespace std;

int trovamax (int** m, int n) {
  int max = m[0][0];
  for (int i = 0; i < n; i++) {
    if (m[i][i] > max) {
      max = m[i][i];
    }
  }
  
  return max;
}

int trovamin(int** m, int n) {
  int min = m[0][0];
  for (int i = 0; i < n; i++)  {
    if (m[i][i] < min) {
      min = m[i][i];
    }
  }
  return min;
}

int main(){
  int n;
  do {
    cout << "Inserisci il numero di N: ";
    cin >> n;
  } while (n <= 0);
 
  cout << endl << endl;

  int** m = new int*[n];
  for(int i = 0; i < n; i++) {
    m[i] = new int[n];
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "Inserisci un valore: ";
      cin >> m[i][j];
    }
  }

  cout <<endl<<endl;

  int min = trovamin(m, n); 
  int max = trovamax(m, n); 

  cout << "Il minimo vale "<< min << " e il massimo " << max << endl;

  // eliminazione della matrice
  for (int i = 0; i < n; i++) {
    delete[] m[i];
  }
  delete[] m;

  return 0;
}
