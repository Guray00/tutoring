/*
(123/10, 0)
  => (12/10, 0*10 + 3)
        => (1/10, 3*10 + 2) 
              => (0, 32*10 + 1) => finito perchè ho num = 0
                    return 321
              return 321
       return 321
  return 321
*/

#include <iostream>
using namespace std;

int inverti (int num, int inverso) {
  if (num == 0) {
    return inverso;
  }
  else {
    return inverti(num/10, inverso*10 + num%10);
  }
}

int main(){

  int num;
  cout << "Inserisci un numero: ";
  cin >> num;

  int risultato = inverti(num, 0);
  cout << "Il numero invertito vale: " << risultato << endl;

	return 0;
}