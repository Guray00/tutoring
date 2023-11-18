#include <iostream>
using namespace std;

int main(){
  int n;

  // faccio inserire il numero
  cout<< "inserire un numero: ";
  cin>> n;
  
  for(int i = 1; i <= n/2; i++){
    if(n % i == 0){
      cout<< i << " ";
    }
  }
  
	return 0;
}