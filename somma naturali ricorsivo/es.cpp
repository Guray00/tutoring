#include <iostream>
using namespace std;

int somma(int n){
  if(n==0){
    return 0;
  }
  else{
    return somma(n-1)+n;
  }
}


int main(){
  int n;

  do{
    cout << "Inserisci un numero: ";
    cin >> n;
  } while(n <= 0);

  int risultato = somma(n);
  cout << "La somma dei numeri vale " << risultato << endl;

	return 0;
}