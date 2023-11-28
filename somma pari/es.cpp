#include <iostream>
using namespace std;

/*
f(12)
  12 + f(30)
        30   + f(20)
                20   + f(15) 
                20      
        30 +20
  12 + 50
62
*/

int sommaPari (){
  int num;
  cout << "Inserisci un numero: ";
  cin >> num;
  
  if(num %2 != 0){  // caso base
    // non va sommato ai valori
    return 0;
  } 
  else{             // caso ricorsivo
    return num + sommaPari();
  }
}

int main(){
  int risultato = sommaPari();
  cout<<"La somma vale " << risultato << " numeri"<<endl;

	return 0;
}