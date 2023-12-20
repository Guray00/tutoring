#include <iostream>
using namespace std;

int main(){
  int n, sum = 0;
  
  do{
    cout<<"inserire un valore: ";
    cin>> n;
  } while(n < 0);
  
  // voglio fare la somma da 0 fino al numero prima di n
  for(int i = 0; i < n; i++){
    sum = sum + i;
  }

  cout << "La somma vale: " << sum<<endl;
  
	return 0;
}