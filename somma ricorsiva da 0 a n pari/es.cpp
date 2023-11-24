#include <iostream>
#include <stdlib.h>

using namespace std;

/*
0 + sommaPari(0+2)
          2 + sommaPari(2+2)
                  4 + sommaPari(4+2)
                          6 + sommaPari(6+2)
                                    8 + sommaPari(8+2)
                                            10 == 10 <- caso base!
                                    8 + 10
                          6 + 18
                  4 + 24
          2 + 28
30
*/

// SOLUZIONE CRESCENTE: da 0 fino a n
int sommaPari (int n, int i) {
  // caso base
  if(n == i){
    // sono arrivato all'ultimo numero
    return i;
  }

  // caso iterativo
  return i + sommaPari(n, i+2);   
}

// SOLUZIONE DECRESCENTE: da n fino a 0
int sommaPari (int n) {
  // caso base
  if(n == 0){
    // sono arrivato all'ultimo numero
    return n;
  }

  // caso iterativo
  return n + sommaPari(n-2);
}

int main(){
  int n;

  // controllo che il valore sia positivo
  do{
    cout << "Inserisci un valore: ";
    cin >> n;
  } while(n < 0);

  // se il valore è dispari aggiusto al primo pari
  if (n %2 != 0){
    n = n - 1;
  }

  int risultato = sommaPari(n);
  cout << "La somma dei pari vale: " << risultato << endl;

  return 0;
}