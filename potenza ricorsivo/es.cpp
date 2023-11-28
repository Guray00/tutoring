#include <iostream>
using namespace std;

int somma(int x, int y) {
  if (y == 0) {
    return x;
  } 
  else {
    return 1 + somma(x, y - 1);
  }
} 

int prodotto (int x, int y) {
  if (y == 0) {
    return 0;
  }
  else {
    return somma(x, prodotto(x, y-1));
  }
}

int esponente (int x, int y){
  if (y == 0) {
    return 1;
  }
  else {
    return prodotto(x, esponente(x, y-1));
  }
}


int main(){
  int n1, n2;

  cout<<"Inserire il primo numero: ";
  cin>>n1;

  cout<<"Inserire il secondo numero: ";
  cin>>n2;

  int risultato = esponente(n1, n2);
  cout<<"Il risultato vale " <<risultato<<endl;

  return 0;

}