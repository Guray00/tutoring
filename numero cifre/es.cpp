/*


*/

#include <iostream>
using namespace std;

int ncifre(int n){
  if(n==0){
    return 0;
  }
  else{
    return ncifre(n/10)+1;
  }
}

int main(){
  int val;

  cout << "Inserisci un numero: ";
  cin >> val;

  int risultato = ncifre(val);
  cout << "Il numero è composto da "<< risultato <<" cifre"<<endl;

  return 0;
}