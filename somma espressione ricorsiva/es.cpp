#include <iostream>
using namespace std;

float somma(float a, int n){
  if(n==1){
    return a-(n/a);
  }
  else {
    return somma(a, n-1) + (a - (n/a));
  }
}

int main(){
  int a, n;

  do {
   cout << "Inserire il valore di a: ";
   cin >> a;
  } while(a <= 0);

  do {
    cout << "Inserisci il valore di n: ";
    cin >> n;
  } while(n <= 1);

  float risultato = somma(a, n);

  cout << "Il risultato vale: " << risultato << endl;

  return 0;
}