#include <iostream>
using namespace std;

int main(){
  int n, num, pos = 0, neg = 0, zero = 0;

  // chiediamo all'utente quanti valori vuole inserire 
  do{
    cout<<"inserire il valore di N: ";
    cin>> n;
  } while(n <= 0);

  // faccio inserire i valori all'utente
  for(int i = 0; i < n; i++){
    cout << "inserire un numero: ";
    cin >> num;
    
    if(num > 0){
      pos = pos + 1;
    }
    else if (num < 0){
      neg = neg + 1;
    }
    else {
      zero = zero + 1;
    }
  }
  
  cout << "sono stati inseriti "<<pos<<" numeri positivi"<<endl;
  cout << "sono stati inseriti "<<neg<<" numeri negativi"<<endl;
  cout << "sono stati inseriti "<<zero<<" numeri nulli"<<endl;

	return 0;
}