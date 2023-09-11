#include <iostream>
using namespace std;

int main(){
  int x;
  int prec;
  int cont=0;
  
  cout << "inserisci un numero: ";
  cin >> x;
  
  do{
    prec=x;
    cout << "inserisci un numero: ";
    cin >> x;
    cont++;
  } while(x>prec);

  cout << "hai inserito "<< cont << " numeri in modo crescente " << endl;
	return 0;
}