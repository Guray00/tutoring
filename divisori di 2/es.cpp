#include <iostream>
using namespace std;

int f(int n){
  // caso in cui è dispari
  if (n %2 != 0) {
    return 0;
  }

  // caso iterativo
  return 1 + f(n/2);
}

int main(){
  int n;
  
  cout << "Inserisci un numero: ";
  cin >> n;

  int risultato = f(n);
  cout << "Il risultato vale: " << risultato<<endl;
  
	return 0;
}