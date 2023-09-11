#include <iostream>
using namespace std;

int main(){
  int n; 
  int cont = 0;

  // numero che ho inserito prima
  int prec;

  // il primo  numero che metto sarà il precedente
  cout<< "Inserisci un numero: ";
  cin>> n;
  
  do{
    prec = n;
    cout << "inserisci un numero ";
    cin >> n;
    cont++;
  } while(n != prec);

  cont--;
  cout<< "hai inserito in modo consecutivo " << cont << " numeri"<<endl;
  
  return 0;
}